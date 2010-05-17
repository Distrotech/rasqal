/* -*- Mode: c; c-basic-offset: 2 -*-
 *
 * rasqal_query_write.c - Write query data structure as a syntax
 *
 * Copyright (C) 2004-2010, David Beckett http://www.dajobe.org/
 * Copyright (C) 2004-2005, University of Bristol, UK http://www.bristol.ac.uk/
 * 
 * This package is Free Software and part of Redland http://librdf.org/
 * 
 * It is licensed under the following three licenses as alternatives:
 *   1. GNU Lesser General Public License (LGPL) V2.1 or any newer version
 *   2. GNU General Public License (GPL) V2 or any newer version
 *   3. Apache License, V2.0 or any newer version
 * 
 * You may not use this file except in compliance with at least one of
 * the above three licenses.
 * 
 * See LICENSE.html or LICENSE.txt at the top of this package for the
 * complete terms and further detail along with the license texts for
 * the licenses in COPYING.LIB, COPYING and LICENSE-2.0.txt respectively.
 * 
 * 
 */

#ifdef HAVE_CONFIG_H
#include <rasqal_config.h>
#endif

#ifdef WIN32
#include <win32_rasqal_config.h>
#endif

#include <stdio.h>
#include <string.h>
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#include <stdarg.h>

#include "rasqal.h"
#include "rasqal_internal.h"


typedef struct 
{
  rasqal_world* world;
  raptor_uri* type_uri;
  raptor_uri* base_uri;
  raptor_namespace_stack *nstack;
} sparql_writer_context;

static void rasqal_query_write_sparql_expression(sparql_writer_context *wc, raptor_iostream* iostr, rasqal_expression* e);


static void
rasqal_query_write_sparql_variable(sparql_writer_context *wc,
                                   raptor_iostream* iostr, rasqal_variable* v)
{
  if(v->expression) {
    raptor_iostream_counted_string_write("( ", 2, iostr);
    rasqal_query_write_sparql_expression(wc, iostr, v->expression);
    raptor_iostream_counted_string_write(" AS ", 4, iostr);
  }
  if(v->type == RASQAL_VARIABLE_TYPE_ANONYMOUS)
    raptor_iostream_counted_string_write("_:", 2, iostr);
  else if(!v->expression)
    raptor_iostream_write_byte('?', iostr);
  raptor_iostream_string_write(v->name, iostr);
  if(v->expression)
    raptor_iostream_counted_string_write(" )", 2, iostr);
}


static void
rasqal_query_write_sparql_uri(sparql_writer_context *wc,
                              raptor_iostream* iostr, raptor_uri* uri)
{
  size_t len;
  unsigned char* string;
  raptor_qname* qname;

  qname = raptor_new_qname_from_namespace_uri(wc->nstack, uri, 10);
  if(qname) {
    const raptor_namespace* nspace = raptor_qname_get_namespace(qname);
    if(!raptor_namespace_get_prefix(nspace))
      raptor_iostream_write_byte(':', iostr);
#ifdef HAVE_RAPTOR2_API
    raptor_qname_write(qname, iostr);
#else
    raptor_iostream_write_qname(iostr, qname);
#endif
    raptor_free_qname(qname);
    return;
  }
  
  if(wc->base_uri)
    string = raptor_uri_to_relative_counted_uri_string(wc->base_uri, uri, &len);
  else
    string = raptor_uri_as_counted_string(uri, &len);

  raptor_iostream_write_byte('<', iostr);
  raptor_string_ntriples_write(string, len, '>', iostr);
  raptor_iostream_write_byte('>', iostr);

  if(wc->base_uri)
    raptor_free_memory(string);
}


static void
rasqal_query_write_sparql_literal(sparql_writer_context *wc,
                                  raptor_iostream* iostr, rasqal_literal* l)
{
  if(!l) {
    raptor_iostream_counted_string_write("null", 4, iostr);
    return;
  }

  switch(l->type) {
    case RASQAL_LITERAL_URI:
      rasqal_query_write_sparql_uri(wc, iostr, l->value.uri);
      break;
    case RASQAL_LITERAL_BLANK:
      raptor_iostream_counted_string_write("_:", 2, iostr);
      raptor_iostream_string_write(l->string, iostr);
      break;
    case RASQAL_LITERAL_STRING:
      raptor_iostream_write_byte('"', iostr);
      raptor_string_ntriples_write(l->string, l->string_len, '"', iostr);
      raptor_iostream_write_byte('"', iostr);
      if(l->language) {
        raptor_iostream_write_byte('@', iostr);
        raptor_iostream_string_write(l->language, iostr);
      }
      if(l->datatype) {
        raptor_iostream_counted_string_write("^^", 2, iostr);
        rasqal_query_write_sparql_uri(wc, iostr, l->datatype);
      }
      break;
    case RASQAL_LITERAL_QNAME:
      raptor_iostream_counted_string_write("QNAME(", 6, iostr);
      raptor_iostream_counted_string_write(l->string, l->string_len, iostr);
      raptor_iostream_write_byte(')', iostr);
      break;
    case RASQAL_LITERAL_INTEGER:
      raptor_iostream_decimal_write(l->value.integer, iostr);
      break;
    case RASQAL_LITERAL_BOOLEAN:
    case RASQAL_LITERAL_DOUBLE:
    case RASQAL_LITERAL_FLOAT:
    case RASQAL_LITERAL_DECIMAL:
      raptor_iostream_counted_string_write(l->string, l->string_len, iostr);
      break;
    case RASQAL_LITERAL_VARIABLE:
      rasqal_query_write_sparql_variable(wc, iostr, l->value.variable);
      break;
    case RASQAL_LITERAL_DATETIME:
    case RASQAL_LITERAL_XSD_STRING:
    case RASQAL_LITERAL_UDT:
    case RASQAL_LITERAL_INTEGER_SUBTYPE:
      if(1) {
        raptor_uri* dt_uri;
        
        raptor_iostream_write_byte('"', iostr);
        raptor_string_ntriples_write(l->string, l->string_len, '"', iostr);
        raptor_iostream_counted_string_write("\"^^", 3, iostr);
        if(l->type == RASQAL_LITERAL_UDT) 
          dt_uri = l->datatype;
        else
          dt_uri = rasqal_xsd_datatype_type_to_uri(l->world, l->type);
        rasqal_query_write_sparql_uri(wc, iostr, dt_uri);
      }
      break;

    case RASQAL_LITERAL_UNKNOWN:
    case RASQAL_LITERAL_PATTERN:
    default:
      RASQAL_FATAL2("Literal type %d cannot be written as a SPARQL literal", l->type);
  }
}


static void
rasqal_query_write_sparql_triple(sparql_writer_context *wc,
                                 raptor_iostream* iostr, rasqal_triple* triple)
{
  rasqal_query_write_sparql_literal(wc, iostr, triple->subject);
  raptor_iostream_write_byte(' ', iostr);
  if(triple->predicate->type == RASQAL_LITERAL_URI &&
     raptor_uri_equals(triple->predicate->value.uri, wc->type_uri))
    raptor_iostream_write_byte('a', iostr);
  else
    rasqal_query_write_sparql_literal(wc, iostr, triple->predicate);
  raptor_iostream_write_byte(' ', iostr);
  rasqal_query_write_sparql_literal(wc, iostr, triple->object);
  raptor_iostream_counted_string_write(" .", 2, iostr);
}


#define SPACES_LENGTH 80
static const char spaces[SPACES_LENGTH+1] = "                                                                                ";

static void
rasqal_query_write_indent(raptor_iostream* iostr, int indent) 
{
  while(indent > 0) {
    int sp = (indent > SPACES_LENGTH) ? SPACES_LENGTH : indent;
    raptor_iostream_write_bytes(spaces, sizeof(char), sp, iostr);
    indent -= sp;
  }
}

  

static const char* const rasqal_sparql_op_labels[RASQAL_EXPR_LAST+1] = {
  NULL, /* UNKNOWN */
  "&&",
  "||",
  "=",
  "!=",
  "<",
  ">",
  "<=",
  ">=",
  "-",
  "+",
  "-",
  "*",
  "/",
  NULL, /* REM */
  NULL, /* STR EQ */
  NULL, /* STR NEQ */
  NULL, /* STR_MATCH */
  NULL, /* STR_NMATCH */
  NULL, /* TILDE */
  "!",
  NULL, /* LITERAL */
  NULL, /* FUNCTION */
  "BOUND",
  "STR",
  "LANG",
  "DATATYPE",
  "isIRI",
  "isBLANK",
  "isLITERAL",
  NULL, /* CAST */
  "ASC",   /* ORDER BY ASC */
  "DESC",  /* ORDER BY DESC */
  "LANGMATCHES",
  "REGEX",
  "ASC",   /* GROUP BY ASC */
  "DESC",  /* GROUP BY DESC */
  "COUNT",
  NULL, /* VARSTAR */
  "sameTerm",
  "SUM",
  "AVG",
  "MIN",
  "MAX",
  "COALESCE",
  "IF",
  "URI",
  "IRI",
  "STRLANG",
  "STRDT",
  "BNODE",
  "GROUP_CONCAT",
  "SAMPLE",
  "IN",
  "NOT IN"
};



static void
rasqal_query_write_sparql_expression_op(sparql_writer_context *wc,
                                        raptor_iostream* iostr,
                                        rasqal_expression* e)
{
  rasqal_op op = e->op;
  const char* string;
  if(op > RASQAL_EXPR_LAST)
    op = RASQAL_EXPR_UNKNOWN;
  string = rasqal_sparql_op_labels[(int)op];
  
  if(string)
    raptor_iostream_string_write(string, iostr);
  else
    raptor_iostream_string_write("NONE", iostr);
}


static void
rasqal_query_write_sparql_expression(sparql_writer_context *wc,
                                     raptor_iostream* iostr, 
                                     rasqal_expression* e)
{
  int i;
  int count;

  switch(e->op) {
    case RASQAL_EXPR_AND:
    case RASQAL_EXPR_OR:
    case RASQAL_EXPR_EQ:
    case RASQAL_EXPR_NEQ:
    case RASQAL_EXPR_LT:
    case RASQAL_EXPR_GT:
    case RASQAL_EXPR_LE:
    case RASQAL_EXPR_GE:
    case RASQAL_EXPR_PLUS:
    case RASQAL_EXPR_MINUS:
    case RASQAL_EXPR_STAR:
    case RASQAL_EXPR_SLASH:
    case RASQAL_EXPR_REM:
    case RASQAL_EXPR_STR_EQ:
    case RASQAL_EXPR_STR_NEQ:
    case RASQAL_EXPR_STRLANG:
    case RASQAL_EXPR_STRDT:
      raptor_iostream_counted_string_write("( ", 2, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg1);
      raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_expression_op(wc, iostr, e);
      raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg2);
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_BOUND:
    case RASQAL_EXPR_STR:
    case RASQAL_EXPR_LANG:
    case RASQAL_EXPR_DATATYPE:
    case RASQAL_EXPR_ISURI:
    case RASQAL_EXPR_ISBLANK:
    case RASQAL_EXPR_ISLITERAL:
    case RASQAL_EXPR_ORDER_COND_ASC:
    case RASQAL_EXPR_ORDER_COND_DESC:
    case RASQAL_EXPR_GROUP_COND_ASC:
    case RASQAL_EXPR_GROUP_COND_DESC:
    case RASQAL_EXPR_COUNT:
    case RASQAL_EXPR_SAMETERM:
    case RASQAL_EXPR_SUM:
    case RASQAL_EXPR_AVG:
    case RASQAL_EXPR_MIN:
    case RASQAL_EXPR_MAX:
    case RASQAL_EXPR_URI:
    case RASQAL_EXPR_IRI:
    case RASQAL_EXPR_BNODE:
    case RASQAL_EXPR_SAMPLE:
      rasqal_query_write_sparql_expression_op(wc, iostr, e);
      raptor_iostream_counted_string_write("( ", 2, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg1);
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;
      
    case RASQAL_EXPR_LANGMATCHES:
    case RASQAL_EXPR_REGEX:
    case RASQAL_EXPR_IF:
      rasqal_query_write_sparql_expression_op(wc, iostr, e);
      raptor_iostream_counted_string_write("( ", 2, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg1);
      raptor_iostream_counted_string_write(", ", 2, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg2);
      if((e->op == RASQAL_EXPR_REGEX || e->op == RASQAL_EXPR_IF) && e->arg3) {
        raptor_iostream_counted_string_write(", ", 2, iostr);
        rasqal_query_write_sparql_expression(wc, iostr, e->arg3);
      }
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_TILDE:
    case RASQAL_EXPR_BANG:
    case RASQAL_EXPR_UMINUS:
      rasqal_query_write_sparql_expression_op(wc, iostr, e);
      raptor_iostream_counted_string_write("( ", 2, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg1);
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_LITERAL:
      rasqal_query_write_sparql_literal(wc, iostr, e->literal);
      break;

    case RASQAL_EXPR_FUNCTION:
      raptor_uri_write(e->name, iostr);
      raptor_iostream_counted_string_write("( ", 2, iostr);
      if(e->flags & RASQAL_EXPR_FLAG_DISTINCT)
        raptor_iostream_counted_string_write(" DISTINCT ", 10, iostr);
      count = raptor_sequence_size(e->args);
      for(i = 0; i < count ; i++) {
        rasqal_expression* arg;
        arg = (rasqal_expression*)raptor_sequence_get_at(e->args, i);
        if(i > 0)
          raptor_iostream_counted_string_write(", ", 2, iostr);
        rasqal_query_write_sparql_expression(wc, iostr, arg);
      }
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_CAST:
      raptor_uri_write(e->name, iostr);
      raptor_iostream_counted_string_write("( ", 2, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, e->arg1);
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_VARSTAR:
      raptor_iostream_write_byte('*', iostr);
      break;
      
    case RASQAL_EXPR_COALESCE:
      raptor_iostream_counted_string_write("COALESCE( ", 10, iostr);
      count = raptor_sequence_size(e->args);
      for(i = 0; i < count ; i++) {
        rasqal_expression* e2;
        e2 = (rasqal_expression*)raptor_sequence_get_at(e->args, i);
        if(i > 0)
          raptor_iostream_counted_string_write(", ", 2, iostr);
        rasqal_query_write_sparql_expression(wc, iostr, e2);
      }
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_GROUP_CONCAT:
      raptor_iostream_counted_string_write("GROUP_CONCAT( ", 14, iostr);
      count = raptor_sequence_size(e->args);
      for(i = 0; i < count ; i++) {
        rasqal_expression* arg;
        arg = (rasqal_expression*)raptor_sequence_get_at(e->args, i);
        if(i > 0)
          raptor_iostream_counted_string_write(", ", 2, iostr);
        rasqal_query_write_sparql_expression(wc, iostr, arg);
      }
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_IN:
    case RASQAL_EXPR_NOT_IN:
      rasqal_query_write_sparql_expression(wc, iostr, e->arg1);
      raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_expression_op(wc, iostr, e);
      raptor_iostream_counted_string_write(" (", 2, iostr);
      count = raptor_sequence_size(e->args);
      for(i = 0; i < count ; i++) {
        rasqal_expression* e2;
        e2 = (rasqal_expression*)raptor_sequence_get_at(e->args, i);
        if(i > 0)
          raptor_iostream_counted_string_write(", ", 2, iostr);
        rasqal_query_write_sparql_expression(wc, iostr, e2);
      }
      raptor_iostream_counted_string_write(" )", 2, iostr);
      break;

    case RASQAL_EXPR_UNKNOWN:
    case RASQAL_EXPR_STR_MATCH:
    case RASQAL_EXPR_STR_NMATCH:
    default:
      RASQAL_FATAL2("Expression op %d cannot be written as a SPARQL expresson", e->op);
  }
}


static void
rasqal_query_write_sparql_triple_data(sparql_writer_context *wc,
                                      raptor_iostream* iostr,
                                      raptor_sequence *triple_gps,
                                      int indent)
{
  int gp = 0;
  
  for(gp = 0; 1; gp++) {
    rasqal_graph_pattern* tgp;
    int triple_index = 0;
  
    tgp = (rasqal_graph_pattern*)raptor_sequence_get_at(triple_gps, gp);
    if(!tgp)
      break;

    if(gp > 0)
      raptor_iostream_write_byte('\n', iostr);

    raptor_iostream_counted_string_write("{\n", 2, iostr);
    indent += 2;
    
    /* look for triples */
    while(1) {
      rasqal_triple* t = rasqal_graph_pattern_get_triple(tgp, triple_index);
      if(!t)
        break;
      
      rasqal_query_write_indent(iostr, indent);
      rasqal_query_write_sparql_triple(wc, iostr, t);
      raptor_iostream_write_byte('\n', iostr);
      
      triple_index++;
    }
    
    indent -= 2;
    
    rasqal_query_write_indent(iostr, indent);
    raptor_iostream_write_byte('}', iostr);

  }

}


static void
rasqal_query_write_sparql_graph_pattern(sparql_writer_context *wc,
                                        raptor_iostream* iostr,
                                        rasqal_graph_pattern *gp, 
                                        int gp_index, int indent)
{
  int triple_index = 0;
  rasqal_graph_pattern_operator op;
  raptor_sequence *seq;
  int filters_count = 0;
  int want_braces = 1;
  
  op = rasqal_graph_pattern_get_operator(gp);
  
  if(op == RASQAL_GRAPH_PATTERN_OPERATOR_LET) {
    /* LAQRS */
    raptor_iostream_counted_string_write("LET (", 5, iostr);
    rasqal_query_write_sparql_variable(wc, iostr, gp->var);
    raptor_iostream_counted_string_write(" := ", 4, iostr);
    rasqal_query_write_sparql_expression(wc, iostr, gp->filter_expression);
    raptor_iostream_counted_string_write(") .", 3, iostr);
    return;
  }
  
  if(op == RASQAL_GRAPH_PATTERN_OPERATOR_OPTIONAL ||
     op == RASQAL_GRAPH_PATTERN_OPERATOR_GRAPH) {
    /* prefix verbs */
    if(op == RASQAL_GRAPH_PATTERN_OPERATOR_OPTIONAL) 
      raptor_iostream_counted_string_write("OPTIONAL ", 9, iostr);
    else {
      raptor_iostream_counted_string_write("GRAPH ", 6, iostr);
      rasqal_query_write_sparql_literal(wc, iostr, gp->origin);
      raptor_iostream_write_byte(' ', iostr);
    }
  }

  if(gp->op == RASQAL_GRAPH_PATTERN_OPERATOR_FILTER)
    want_braces = 0;


  if(want_braces) {
    raptor_iostream_counted_string_write("{\n", 2, iostr);
    indent += 2;
  }

  /* look for triples */
  while(1) {
    rasqal_triple* t = rasqal_graph_pattern_get_triple(gp, triple_index);
    if(!t)
      break;
    
    rasqal_query_write_indent(iostr, indent);
    rasqal_query_write_sparql_triple(wc, iostr, t);
    raptor_iostream_write_byte('\n', iostr);

    triple_index++;
  }


  /* look for sub-graph patterns */
  seq = rasqal_graph_pattern_get_sub_graph_pattern_sequence(gp);
  if(seq && raptor_sequence_size(seq) > 0) {
    for(gp_index = 0; 1; gp_index++) {
      rasqal_graph_pattern* sgp = rasqal_graph_pattern_get_sub_graph_pattern(gp, gp_index);
      if(!sgp)
        break;

      if(sgp->op == RASQAL_GRAPH_PATTERN_OPERATOR_FILTER) {
        filters_count++;
        continue;
      }
      
      if(!gp_index)
        rasqal_query_write_indent(iostr, indent);
      else {
        if(op == RASQAL_GRAPH_PATTERN_OPERATOR_UNION)
          /* infix verb */
          raptor_iostream_counted_string_write(" UNION ", 7, iostr);
        else {
          /* must be prefix verb */
          raptor_iostream_write_byte('\n', iostr);
          rasqal_query_write_indent(iostr, indent);
        }
      }
      
      rasqal_query_write_sparql_graph_pattern(wc, iostr, sgp, gp_index, indent);
    }
    raptor_iostream_write_byte('\n', iostr);
  }
  

  /* look for constraints */
  if(filters_count > 0) {
    for(gp_index = 0; 1; gp_index++) {
      rasqal_graph_pattern* sgp;
      rasqal_expression* expr;

      sgp = rasqal_graph_pattern_get_sub_graph_pattern(gp, gp_index);
      if(!sgp)
        break;
      
      if(sgp->op != RASQAL_GRAPH_PATTERN_OPERATOR_FILTER)
        continue;

      expr = rasqal_graph_pattern_get_filter_expression(sgp);

      rasqal_query_write_indent(iostr, indent);
      raptor_iostream_counted_string_write("FILTER( ", 8, iostr);
      rasqal_query_write_sparql_expression(wc, iostr, expr);
      raptor_iostream_counted_string_write(" )\n", 3, iostr);
    }
  }
  

  if(want_braces) {
    indent -= 2;

    rasqal_query_write_indent(iostr, indent);
    raptor_iostream_write_byte('}', iostr);
  }

}


    
int
rasqal_query_write_sparql_20060406(raptor_iostream *iostr, 
                                   rasqal_query* query, raptor_uri *base_uri)
{
  int i;
  sparql_writer_context wc;
#ifndef HAVE_RAPTOR2_API
  const raptor_uri_handler *uri_handler;
  void *uri_context;
#endif

  wc.world = query->world;
  wc.base_uri = NULL;

#ifdef HAVE_RAPTOR2_API
  wc.type_uri = raptor_new_uri_for_rdf_concept(query->world->raptor_world_ptr,
                                               (const unsigned char*)"type");
  wc.nstack = raptor_new_namespaces(query->world->raptor_world_ptr, 1);
#else
  wc.type_uri = raptor_new_uri_for_rdf_concept("type");
  raptor_uri_get_handler(&uri_handler, &uri_context);
  wc.nstack = raptor_new_namespaces(uri_handler, uri_context,
                                    (raptor_simple_message_handler)rasqal_query_simple_error,
                                    query,
                                    1);
#endif

  if(base_uri) {
    raptor_iostream_counted_string_write("BASE ", 5, iostr);
    rasqal_query_write_sparql_uri(&wc, iostr, base_uri);
    raptor_iostream_write_byte('\n', iostr);

    /* from now on all URIs are relative to this */
    wc.base_uri = raptor_uri_copy(base_uri);
  }
  
  
  for(i = 0; 1 ; i++) {
    raptor_namespace *nspace;
    rasqal_prefix* p = rasqal_query_get_prefix(query, i);
    if(!p)
      break;
    
    raptor_iostream_counted_string_write("PREFIX ", 7, iostr);
    if(p->prefix)
      raptor_iostream_string_write(p->prefix, iostr);
    raptor_iostream_counted_string_write(": ", 2, iostr);
    rasqal_query_write_sparql_uri(&wc, iostr, p->uri);
    raptor_iostream_write_byte('\n', iostr);

    /* Use this constructor so we copy a URI directly */
    nspace = raptor_new_namespace_from_uri(wc.nstack, p->prefix, p->uri, i);
    raptor_namespaces_start_namespace(wc.nstack, nspace);
  }

  if(query->explain)
    raptor_iostream_counted_string_write("EXPLAIN ", 8, iostr);

  /* Experimental LAQRS INSERT and DELETE (RASQAL_QUERY_VERB_INSERT
   * and RASQAL_QUERY_VERB_DELETE) are handled in generic code
   * below */
  if(query->verb == RASQAL_QUERY_VERB_INSERT ||
     query->verb == RASQAL_QUERY_VERB_DELETE) {
    raptor_iostream_string_write("\n# Writing deprecated LAQRS INSERT/DELETE\n",
                                 iostr);
  }

  
  /* Write SPARQL 1.1 (Draft) Update forms */
  if(query->verb == RASQAL_QUERY_VERB_UPDATE) {
    rasqal_update_operation* update;
    /* Write SPARQL Update */

    for(i = 0; (update = rasqal_query_get_update_operation(query, i)); i++) {
      if(update->type == RASQAL_UPDATE_TYPE_UPDATE) {
        /* update operations:
         * WITH ... INSERT { template } DELETE { template } WHERE { template }
         * INSERT/DELETE { template } WHERE { template }
         * INSERT/DELETE DATA { triples } 
         */
        if(update->graph_uri) {
          raptor_iostream_counted_string_write("WITH ", 5, iostr);
          rasqal_query_write_sparql_uri(&wc, iostr, update->graph_uri);
          raptor_iostream_write_byte('\n', iostr);
        }
        if(update->delete_templates) {
          raptor_iostream_counted_string_write("DELETE ", 7, iostr);
          if(update->flags & RASQAL_UPDATE_FLAGS_DATA) 
            raptor_iostream_counted_string_write("DATA ", 5, iostr);
          rasqal_query_write_sparql_triple_data(&wc, iostr,
                                                update->delete_templates,
                                                0);
          raptor_iostream_write_byte('\n', iostr);
        }
        if(update->insert_templates) {
          raptor_iostream_counted_string_write("INSERT ", 7, iostr);
          if(update->flags & RASQAL_UPDATE_FLAGS_DATA) 
            raptor_iostream_counted_string_write("DATA ", 5, iostr);
          rasqal_query_write_sparql_triple_data(&wc, iostr,
                                                update->insert_templates,
                                                0);
          raptor_iostream_write_byte('\n', iostr);
        }
        if(update->where) {
          raptor_iostream_counted_string_write("WHERE ", 6, iostr);
          rasqal_query_write_sparql_graph_pattern(&wc, iostr,
                                                  update->where,
                                                  -1, 0);
          raptor_iostream_write_byte('\n', iostr);
        }
      } else {
        /* admin operations:
         * CLEAR / CLEAR GRAPH graph-uri
         * CREATE (SILENT) GRAPH graph-uri
         * DROP (SILENT) GRAPH graph-uri
         * LOAD GRAPH graph-uri / LOAD doc-uri INTO graph-uri
         */
        raptor_iostream_string_write(rasqal_update_type_label(update->type),
                                     iostr);
        if(update->flags & RASQAL_UPDATE_FLAGS_SILENT)
          raptor_iostream_counted_string_write(" SILENT", 7, iostr);
        if(update->document_uri) {
          raptor_iostream_write_byte(' ', iostr);
          rasqal_query_write_sparql_uri(&wc, iostr, update->document_uri);
        }
        if(update->graph_uri) {
          if(update->type == RASQAL_UPDATE_TYPE_LOAD &&
             update->document_uri)
            raptor_iostream_counted_string_write(" INTO ", 6, iostr);
          else
            raptor_iostream_counted_string_write(" GRAPH ", 7, iostr);
          rasqal_query_write_sparql_uri(&wc, iostr, update->graph_uri);
          raptor_iostream_write_byte('\n', iostr);
        }
      }
    }

    goto tidy;
  }


  if(query->verb != RASQAL_QUERY_VERB_CONSTRUCT)
    raptor_iostream_string_write(rasqal_query_verb_as_string(query->verb),
                                 iostr);

  if(query->distinct) {
    if(query->distinct == 1)
      raptor_iostream_counted_string_write(" DISTINCT", 9, iostr);
    else
      raptor_iostream_counted_string_write(" REDUCED", 8, iostr);
  }

  if(query->wildcard)
    raptor_iostream_counted_string_write(" *", 2, iostr);
  else if(query->verb == RASQAL_QUERY_VERB_DESCRIBE) {
    raptor_sequence *lit_seq = query->describes;
    int count = raptor_sequence_size(lit_seq);

    for(i = 0; i < count; i++) {
      rasqal_literal* l = (rasqal_literal*)raptor_sequence_get_at(lit_seq, i);
      raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_literal(&wc, iostr, l);
    }
  } else if(query->verb == RASQAL_QUERY_VERB_SELECT) {
    raptor_sequence *var_seq = query->selects;
    int count = raptor_sequence_size(var_seq);

    for(i = 0; i < count; i++) {
      rasqal_variable* v = (rasqal_variable*)raptor_sequence_get_at(var_seq, i);
      raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_variable(&wc, iostr, v);
    }
  }
  raptor_iostream_write_byte('\n', iostr);

  if(query->data_graphs) {
    for(i = 0; 1; i++) {
      rasqal_data_graph* dg = rasqal_query_get_data_graph(query, i);
      if(!dg)
        break;
      
      if(dg->flags & RASQAL_DATA_GRAPH_NAMED)
        continue;
      
      raptor_iostream_counted_string_write("FROM ", 5, iostr);
      rasqal_query_write_sparql_uri(&wc, iostr, dg->uri);
      raptor_iostream_counted_string_write("\n", 1, iostr);
    }
    
    for(i = 0; 1; i++) {
      rasqal_data_graph* dg = rasqal_query_get_data_graph(query, i);
      if(!dg)
        break;

      if(!(dg->flags & RASQAL_DATA_GRAPH_NAMED))
        continue;
      
      raptor_iostream_counted_string_write("FROM NAMED ", 11, iostr);
      rasqal_query_write_sparql_uri(&wc, iostr, dg->name_uri);
      raptor_iostream_write_byte('\n', iostr);
    }
    
  }

  if(query->constructs) {
    raptor_iostream_string_write("CONSTRUCT {\n", iostr);
    for(i = 0; 1; i++) {
      rasqal_triple* t = rasqal_query_get_construct_triple(query, i);
      if(!t)
        break;

      raptor_iostream_counted_string_write("  ", 2, iostr);
      rasqal_query_write_sparql_triple(&wc, iostr, t);
      raptor_iostream_write_byte('\n', iostr);
    }
    raptor_iostream_counted_string_write("}\n", 2, iostr);
  }
  if(query->query_graph_pattern) {
    raptor_iostream_counted_string_write("WHERE ", 6, iostr);
    rasqal_query_write_sparql_graph_pattern(&wc, iostr,
                                            query->query_graph_pattern, 
                                            -1, 0);
    raptor_iostream_write_byte('\n', iostr);
  }

  if(query->group_conditions_sequence) {
    raptor_iostream_counted_string_write("GROUP BY ", 9, iostr);
    for(i = 0; 1; i++) {
      rasqal_expression* expr = rasqal_query_get_group_condition(query, i);
      if(!expr)
        break;

      if(i > 0)
        raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_expression(&wc, iostr, expr);
    }
    raptor_iostream_write_byte('\n', iostr);
  }

  if(query->order_conditions_sequence) {
    raptor_iostream_counted_string_write("ORDER BY ", 9, iostr);
    for(i = 0; 1; i++) {
      rasqal_expression* expr = rasqal_query_get_order_condition(query, i);
      if(!expr)
        break;

      if(i > 0)
        raptor_iostream_write_byte(' ', iostr);
      rasqal_query_write_sparql_expression(&wc, iostr, expr);
    }
    raptor_iostream_write_byte('\n', iostr);
  }

  if(query->limit >= 0 || query->offset >= 0) {
    if(query->limit >= 0) {
      raptor_iostream_counted_string_write("LIMIT ", 7, iostr);
      raptor_iostream_decimal_write(query->limit, iostr);
    }
    if(query->offset >= 0) {
      if(query->limit)
        raptor_iostream_write_byte(' ', iostr);
      raptor_iostream_counted_string_write("OFFSET ", 8, iostr);
      raptor_iostream_decimal_write(query->offset, iostr);
    }
    raptor_iostream_write_byte('\n', iostr);
  }


  tidy:
  raptor_free_uri(wc.type_uri);
  if(wc.base_uri)
    raptor_free_uri(wc.base_uri);
  raptor_free_namespaces(wc.nstack);

  return 0;
}
