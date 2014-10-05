/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sparql_parser_parse
#define yylex           sparql_parser_lex
#define yyerror         sparql_parser_error
#define yydebug         sparql_parser_debug
#define yynerrs         sparql_parser_nerrs


/* Copy the first part of user declarations.  */
#line 28 "./sparql_parser.y" /* yacc.c:339  */

#ifdef HAVE_CONFIG_H
#include <rasqal_config.h>
#endif

#ifdef WIN32
#include <win32_rasqal_config.h>
#endif

#include <stdio.h>
#include <stdarg.h>

#include <rasqal.h>
#include <rasqal_internal.h>

#include <sparql_parser.h>

#define YY_NO_UNISTD_H 1
#include <sparql_lexer.h>

#include <sparql_common.h>


/* Set RASQAL_DEBUG to 3 for super verbose parsing - watching the shift/reduces */
#if 0
#undef RASQAL_DEBUG
#define RASQAL_DEBUG 3
#endif


#define DEBUG_FH stderr

/* Make verbose error messages for syntax errors */
#define YYERROR_VERBOSE 1

/* Fail with an debug error message if RASQAL_DEBUG > 1 */
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1
#define YYERROR_MSG(msg) do { fputs("** YYERROR ", DEBUG_FH); fputs(msg, DEBUG_FH); fputc('\n', DEBUG_FH); YYERROR; } while(0)
#else
#define YYERROR_MSG(ignore) YYERROR
#endif

/* Slow down the grammar operation and watch it work */
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 2
#undef YYDEBUG 1
#define YYDEBUG 1
#endif

/* the lexer does not seem to track this */
#undef RASQAL_SPARQL_USE_ERROR_COLUMNS

/* Prototypes */ 
int sparql_parser_error(rasqal_query* rq, void* scanner, const char *msg);

/* Make lex/yacc interface as small as possible */
#undef yylex
#define yylex sparql_lexer_lex

/* Make the yyerror below use the rdf_parser */
#undef yyerror
#define yyerror(rq, scanner, message) sparql_query_error(rq, message)

/* Prototypes for local functions */
static int sparql_parse(rasqal_query* rq);
static void sparql_query_error(rasqal_query* rq, const char *message);
static void sparql_query_error_full(rasqal_query *rq, const char *message, ...) RASQAL_PRINTF_FORMAT(2, 3);


static sparql_uri_applies*
new_uri_applies(raptor_uri* uri, rasqal_update_graph_applies applies) 
{
  sparql_uri_applies* ua;

  ua = RASQAL_MALLOC(sparql_uri_applies*, sizeof(*ua));
  if(!ua)
    return NULL;
  
  ua->uri = uri;
  ua->applies = applies;

  return ua;
}


static void
free_uri_applies(sparql_uri_applies* ua)
{
  if(ua->uri)
    raptor_free_uri(ua->uri);
  RASQAL_FREE(sparql_uri_applies*, ua);
}




#line 168 "sparql_parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sparql_parser.tab.h".  */
#ifndef YY_SPARQL_PARSER_SPARQL_PARSER_TAB_H_INCLUDED
# define YY_SPARQL_PARSER_SPARQL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sparql_parser_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SELECT = 258,
    FROM = 259,
    WHERE = 260,
    OPTIONAL = 261,
    DESCRIBE = 262,
    CONSTRUCT = 263,
    ASK = 264,
    DISTINCT = 265,
    REDUCED = 266,
    LIMIT = 267,
    UNION = 268,
    PREFIX = 269,
    BASE = 270,
    BOUND = 271,
    GRAPH = 272,
    NAMED = 273,
    FILTER = 274,
    OFFSET = 275,
    ORDER = 276,
    BY = 277,
    REGEX = 278,
    ASC = 279,
    DESC = 280,
    LANGMATCHES = 281,
    A = 282,
    STRLANG = 283,
    STRDT = 284,
    STR = 285,
    IRI = 286,
    URI = 287,
    BNODE = 288,
    LANG = 289,
    DATATYPE = 290,
    ISURI = 291,
    ISBLANK = 292,
    ISLITERAL = 293,
    ISNUMERIC = 294,
    SAMETERM = 295,
    GROUP = 296,
    HAVING = 297,
    COUNT = 298,
    SUM = 299,
    AVG = 300,
    MIN = 301,
    MAX = 302,
    GROUP_CONCAT = 303,
    SAMPLE = 304,
    SEPARATOR = 305,
    DELETE = 306,
    INSERT = 307,
    WITH = 308,
    CLEAR = 309,
    CREATE = 310,
    SILENT = 311,
    DATA = 312,
    DROP = 313,
    LOAD = 314,
    INTO = 315,
    DEFAULT = 316,
    TO = 317,
    ADD = 318,
    MOVE = 319,
    COPY = 320,
    ALL = 321,
    COALESCE = 322,
    AS = 323,
    IF = 324,
    NOT = 325,
    IN = 326,
    BINDINGS = 327,
    UNDEF = 328,
    SERVICE = 329,
    MINUS = 330,
    YEAR = 331,
    MONTH = 332,
    DAY = 333,
    HOURS = 334,
    MINUTES = 335,
    SECONDS = 336,
    TIMEZONE = 337,
    TZ = 338,
    STRLEN = 339,
    SUBSTR = 340,
    UCASE = 341,
    LCASE = 342,
    STRSTARTS = 343,
    STRENDS = 344,
    CONTAINS = 345,
    ENCODE_FOR_URI = 346,
    CONCAT = 347,
    STRBEFORE = 348,
    STRAFTER = 349,
    REPLACE = 350,
    BIND = 351,
    ABS = 352,
    ROUND = 353,
    CEIL = 354,
    FLOOR = 355,
    RAND = 356,
    MD5 = 357,
    SHA1 = 358,
    SHA224 = 359,
    SHA256 = 360,
    SHA384 = 361,
    SHA512 = 362,
    UUID = 363,
    STRUUID = 364,
    VALUES = 365,
    EXPLAIN = 366,
    LET = 367,
    CURRENT_DATETIME = 368,
    NOW = 369,
    FROM_UNIXTIME = 370,
    TO_UNIXTIME = 371,
    HATHAT = 372,
    SC_OR = 373,
    SC_AND = 374,
    EQ = 375,
    NEQ = 376,
    LT = 377,
    GT = 378,
    LE = 379,
    GE = 380,
    ASSIGN = 381,
    STRING = 382,
    LANGTAG = 383,
    DOUBLE_LITERAL = 384,
    DOUBLE_POSITIVE_LITERAL = 385,
    DOUBLE_NEGATIVE_LITERAL = 386,
    INTEGER_LITERAL = 387,
    INTEGER_POSITIVE_LITERAL = 388,
    INTEGER_NEGATIVE_LITERAL = 389,
    DECIMAL_LITERAL = 390,
    DECIMAL_POSITIVE_LITERAL = 391,
    DECIMAL_NEGATIVE_LITERAL = 392,
    BOOLEAN_LITERAL = 393,
    URI_LITERAL = 394,
    URI_LITERAL_BRACE = 395,
    QNAME_LITERAL = 396,
    QNAME_LITERAL_BRACE = 397,
    BLANK_LITERAL = 398,
    IDENTIFIER = 399
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 156 "./sparql_parser.y" /* yacc.c:355  */

  raptor_sequence *seq;
  rasqal_variable *variable;
  rasqal_literal *literal;
  rasqal_triple *triple;
  rasqal_expression *expr;
  rasqal_graph_pattern *graph_pattern;
  double floating;
  raptor_uri *uri;
  unsigned char *name;
  rasqal_formula *formula;
  rasqal_update_operation *update;
  unsigned int uinteger;
  rasqal_data_graph* data_graph;
  rasqal_row* row;
  rasqal_solution_modifier* modifier;
  int limit_offset[2];
  int integer;
  rasqal_projection* projection;
  rasqal_bindings* bindings;
  sparql_uri_applies* uri_applies;

#line 376 "sparql_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sparql_parser_parse (rasqal_query* rq, void* yyscanner);

#endif /* !YY_SPARQL_PARSER_SPARQL_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 390 "sparql_parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  393
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  812

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,     2,     2,   125,     2,     2,     2,
     118,   119,   137,   135,   117,   136,   159,   138,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   158,
       2,     2,     2,   124,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   120,     2,   121,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,     2,   123,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   512,   512,   513,   518,   527,   541,   548,   568,   573,
     578,   586,   590,   591,   592,   596,   600,   604,   608,   612,
     616,   620,   624,   628,   632,   640,   648,   653,   660,   690,
     697,   715,   730,   735,   740,   750,   754,   764,   773,   782,
     800,   804,   846,   850,   854,   858,   862,   866,   870,   877,
     891,   897,   901,   909,   930,   951,   972,   993,  1014,  1021,
    1030,  1039,  1055,  1083,  1105,  1128,  1173,  1197,  1214,  1223,
    1232,  1248,  1269,  1273,  1281,  1289,  1309,  1341,  1361,  1405,
    1422,  1455,  1470,  1474,  1482,  1497,  1506,  1526,  1556,  1576,
    1620,  1662,  1704,  1728,  1732,  1736,  1740,  1744,  1757,  1789,
    1824,  1829,  1836,  1863,  1898,  1934,  1943,  1962,  1966,  1973,
    1977,  1985,  1997,  2024,  2070,  2101,  2132,  2163,  2169,  2178,
    2183,  2190,  2214,  2237,  2245,  2249,  2257,  2262,  2269,  2283,
    2293,  2313,  2318,  2325,  2329,  2333,  2360,  2374,  2388,  2395,
    2402,  2412,  2432,  2446,  2453,  2458,  2463,  2468,  2474,  2482,
    2487,  2494,  2504,  2524,  2531,  2538,  2546,  2563,  2571,  2583,
    2597,  2610,  2615,  2622,  2627,  2633,  2642,  2661,  2666,  2675,
    2687,  2709,  2737,  2744,  2758,  2781,  2787,  2793,  2801,  2819,
    2823,  2827,  2831,  2835,  2847,  2851,  2862,  2920,  2934,  2946,
    2983,  2988,  3000,  3048,  3061,  3089,  3090,  3095,  3126,  3134,
    3138,  3142,  3146,  3150,  3154,  3158,  3162,  3170,  3209,  3259,
    3276,  3297,  3304,  3308,  3316,  3325,  3330,  3345,  3361,  3371,
    3381,  3396,  3403,  3413,  3438,  3459,  3467,  3471,  3475,  3482,
    3487,  3494,  3533,  3567,  3595,  3602,  3612,  3629,  3637,  3645,
    3650,  3661,  3691,  3706,  3750,  3798,  3896,  3901,  3908,  3913,
    3920,  3998,  4003,  4010,  4018,  4028,  4056,  4060,  4068,  4135,
    4261,  4314,  4351,  4355,  4363,  4375,  4388,  4394,  4402,  4406,
    4413,  4424,  4428,  4432,  4442,  4446,  4450,  4454,  4458,  4462,
    4472,  4480,  4487,  4495,  4503,  4512,  4519,  4526,  4533,  4540,
    4547,  4554,  4559,  4564,  4573,  4580,  4587,  4600,  4613,  4620,
    4627,  4634,  4642,  4649,  4653,  4660,  4674,  4678,  4682,  4691,
    4697,  4707,  4715,  4723,  4730,  4737,  4744,  4751,  4766,  4773,
    4780,  4787,  4794,  4801,  4808,  4815,  4822,  4829,  4836,  4843,
    4850,  4857,  4864,  4871,  4878,  4885,  4889,  4893,  4900,  4907,
    4914,  4921,  4928,  4935,  4942,  4949,  4953,  4957,  4964,  4971,
    4978,  4985,  4992,  4999,  5006,  5013,  5020,  5027,  5034,  5041,
    5048,  5055,  5066,  5073,  5084,  5091,  5098,  5105,  5112,  5119,
    5126,  5133,  5144,  5161,  5179,  5197,  5222,  5228,  5248,  5252,
    5256,  5263,  5267,  5271,  5279,  5283,  5287,  5295,  5299,  5303,
    5315,  5321,  5341,  5347
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "FROM", "WHERE", "OPTIONAL",
  "DESCRIBE", "CONSTRUCT", "ASK", "DISTINCT", "REDUCED", "LIMIT", "UNION",
  "PREFIX", "BASE", "BOUND", "GRAPH", "NAMED", "FILTER", "OFFSET", "ORDER",
  "BY", "REGEX", "ASC", "DESC", "LANGMATCHES", "\"a\"", "\"strlang\"",
  "\"strdt\"", "\"str\"", "\"iri\"", "\"uri\"", "\"bnode\"", "\"lang\"",
  "\"datatype\"", "\"isUri\"", "\"isBlank\"", "\"isLiteral\"",
  "\"isNumeric\"", "\"sameTerm\"", "GROUP", "HAVING", "COUNT", "SUM",
  "AVG", "MIN", "MAX", "GROUP_CONCAT", "SAMPLE", "SEPARATOR", "DELETE",
  "INSERT", "WITH", "CLEAR", "CREATE", "SILENT", "DATA", "DROP", "LOAD",
  "INTO", "DEFAULT", "TO", "ADD", "MOVE", "COPY", "ALL", "COALESCE", "AS",
  "IF", "NOT", "IN", "BINDINGS", "UNDEF", "SERVICE", "MINUS", "YEAR",
  "MONTH", "DAY", "HOURS", "MINUTES", "SECONDS", "TIMEZONE", "TZ",
  "STRLEN", "SUBSTR", "UCASE", "LCASE", "STRSTARTS", "STRENDS", "CONTAINS",
  "ENCODE_FOR_URI", "CONCAT", "STRBEFORE", "STRAFTER", "REPLACE", "BIND",
  "ABS", "ROUND", "CEIL", "FLOOR", "RAND", "MD5", "SHA1", "SHA224",
  "SHA256", "SHA384", "SHA512", "UUID", "STRUUID", "VALUES", "EXPLAIN",
  "LET", "CURRENT_DATETIME", "NOW", "FROM_UNIXTIME", "TO_UNIXTIME", "','",
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'?'", "'$'", "\"^^\"",
  "SC_OR", "SC_AND", "EQ", "NEQ", "LT", "GT", "LE", "GE", "'+'", "'-'",
  "'*'", "'/'", "\":=\"", "\"string\"", "\"langtag\"",
  "\"double literal\"", "\"double positive literal\"",
  "\"double negative literal\"", "\"integer literal\"",
  "\"integer positive literal\"", "\"integer negative literal\"",
  "\"decimal literal\"", "\"decimal positive literal\"",
  "\"decimal negative literal\"", "\"boolean literal\"", "\"URI literal\"",
  "\"URI literal (\"", "\"QName literal\"", "\"QName literal (\"",
  "\"blank node literal\"", "\"identifier\"", "';'", "'.'", "'!'",
  "$accept", "Sparql", "Query", "ExplainOpt", "ReportFormat", "Update",
  "UpdateTailOpt", "UpdateOperation", "Prologue", "BaseDeclOpt",
  "PrefixDeclListOpt", "SelectQuery", "SubSelect", "SelectClause",
  "SelectExpressionList", "SelectExpressionListTail", "SelectTerm",
  "AggregateExpression", "DistinctOpt", "ExpressionOrStar",
  "CountAggregateExpression", "SumAggregateExpression",
  "AvgAggregateExpression", "MinAggregateExpression",
  "MaxAggregateExpression", "SeparatorOpt", "ExpressionList",
  "GroupConcatAggregateExpression", "SampleAggregateExpression",
  "ConstructQuery", "DescribeQuery", "VarOrIRIrefList", "AskQuery",
  "DatasetClause", "GraphRef", "DeleteQuery", "GraphTriples",
  "GraphTemplate", "ModifyTemplate", "ModifyTemplateList", "InsertQuery",
  "UpdateQuery", "GraphRefAll", "ClearQuery", "SilentOpt", "CreateQuery",
  "DropQuery", "IriRefList", "GraphOrDefault", "OldGraphRef", "LoadQuery",
  "AddQuery", "MoveQuery", "CopyQuery", "DatasetClauseList",
  "DatasetClauseListOpt", "DefaultGraphClause", "NamedGraphClause",
  "SourceSelector", "WhereClause", "WhereClauseOpt", "SolutionModifier",
  "GroupConditionList", "AsVarOpt", "GroupCondition", "GroupClauseOpt",
  "HavingCondition", "HavingConditionList", "HavingClauseOpt",
  "LimitOffsetClausesOpt", "OrderClauseOpt", "OrderConditionList",
  "OrderCondition", "LimitClause", "OffsetClause", "ValuesClauseOpt",
  "VarListOpt", "VarList", "DataBlockRowListOpt", "DataBlockRowList",
  "DataBlockRow", "DataBlockValueList", "RDFLiteral", "DataBlockValue",
  "GroupGraphPattern", "GroupGraphPatternSub", "TriplesBlockOpt",
  "GraphPatternListOpt", "GraphPatternList", "GraphPatternListFilter",
  "DotOptional", "TriplesBlock", "GraphPatternNotTriples",
  "OptionalGraphPattern", "GraphGraphPattern", "ServiceGraphPattern",
  "Bind", "InlineData", "DataBlock", "InlineDataOneVar",
  "DataBlockValueListOpt", "InlineDataFull", "InlineDataGraphPattern",
  "MinusGraphPattern", "GroupOrUnionGraphPattern",
  "GroupOrUnionGraphPatternList", "LetGraphPattern", "Filter",
  "Constraint", "ParamsOpt", "FunctionCall", "CoalesceExpression",
  "ArgList", "ArgListNoBraces", "ConstructTemplate", "ConstructTriplesOpt",
  "ConstructTriples", "TriplesSameSubject", "PropertyListNotEmpty",
  "PropertyListTailOpt", "PropertyList", "ObjectList", "ObjectTail",
  "Object", "Verb", "TriplesNode", "BlankNodePropertyList", "Collection",
  "GraphNodeListNotEmpty", "GraphNode", "VarOrTerm", "VarOrIRIref", "Var",
  "VarName", "VarOrBadVarName", "GraphTerm", "Expression",
  "ConditionalOrExpression", "ConditionalAndExpression",
  "RelationalExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PrimaryExpression", "BrackettedExpression",
  "BuiltInCall", "StringExpression", "RegexExpression",
  "DatetimeBuiltinAccessors", "DatetimeExtensions", "IRIrefBrace",
  "NumericLiteral", "NumericLiteralUnsigned", "NumericLiteralPositive",
  "NumericLiteralNegative", "IRIref", "BlankNode", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,    44,    40,    41,
      91,    93,   123,   125,    63,    36,   372,   373,   374,   375,
     376,   377,   378,   379,   380,    43,    45,    42,    47,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,    59,    46,
      33
};
# endif

#define YYPACT_NINF -583

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-583)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      34,   -85,    94,  -583,  -583,   602,  -583,  -583,  -583,    66,
      72,   -46,    28,    62,    62,    62,    62,    62,    62,  -583,
     302,   -30,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,
    -583,  -583,   110,    30,    13,    26,  1982,  -583,    74,    43,
    1982,    74,    37,  -583,    73,    47,    73,    -8,     5,     5,
       5,    91,   -21,    56,   175,    79,  -583,   175,  -583,  -583,
    -583,   130,  -583,    54,   -42,  -583,  -583,  -583,  -583,  -583,
    -583,   404,  -583,  2028,   216,   935,    98,    57,    57,    12,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,
    -583,  -583,  -583,   459,  -583,  -583,    65,   105,  -583,  -583,
     105,  -583,  -583,    95,  -583,  -583,  -583,  -583,  -583,    13,
    -583,  -583,  -583,  -583,  2028,   496,  -583,   111,    18,    46,
    -583,  -583,  -583,  -583,  -583,   103,  -583,  -583,  -583,    27,
      45,  -583,  -583,   200,   208,   211,   121,   121,  1380,  -583,
    -583,   136,  -583,  -583,   175,    88,  -583,  -583,  -583,  2102,
     175,   273,   175,    40,   147,  -583,    40,  -583,   672,   137,
    -583,   174,    40,   180,   250,  -583,   148,   140,   199,  -583,
     210,  -583,  -583,  2067,  -583,  -583,  -583,  -583,   222,  2102,
    -583,  -583,  -583,  -583,   -42,  -583,    40,  -583,  2102,  -583,
    -583,  -583,   -42,  -583,   234,    40,  1982,   236,  1982,  -583,
    -583,    16,  -583,     5,     5,     5,  -583,  -583,   241,   243,
     245,   246,   247,   251,   257,   258,   259,   260,   263,   264,
     265,   272,   274,   275,   277,   278,   280,   281,   282,   283,
     285,   286,   287,   301,   304,   305,   306,   307,   308,   312,
     314,   315,   319,   320,   321,   323,   324,   325,   326,   327,
     329,   330,   331,   332,   334,   336,   337,   340,   341,   348,
     351,   357,   359,   360,   361,   362,   363,   365,   366,   368,
     864,   270,  1521,  1521,  -583,  -583,  1521,  -583,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,   316,
     364,   369,  -583,   403,   201,   177,  -583,  -583,  -583,  -583,
    -583,  -583,  -583,  1380,   370,   176,  -583,    40,   216,    40,
    -583,   367,  -583,   371,    40,  -583,   -25,  -583,  -583,  -583,
     374,   446,  -583,  -583,   446,  -583,    13,   216,  1868,    62,
      13,   390,   147,   391,   497,   250,  -583,   353,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  2102,
     392,  -583,  2102,  -583,  -583,  -583,   358,   401,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,   717,  2028,  1892,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,   -25,  1380,  1380,  1380,  1380,
    1380,  1380,  1380,  1098,  1380,  1380,  1380,  1380,  1380,  1380,
    1380,   510,   510,   510,   510,   510,   510,   510,  1380,  -583,
    1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,
    1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,
    1380,  1380,  1380,  1380,  1380,   406,  1380,  1380,  1380,  1380,
    1380,  1380,   407,   408,   411,   412,  1380,  1380,   419,  -583,
    -583,  -583,   107,  1380,  1380,   452,   286,  1380,  1380,  1380,
    1380,  1380,  1380,  1380,  1380,  -583,  -583,  1380,  1380,    83,
    -583,   510,  -583,   446,  -583,   446,  -583,  2102,   446,   420,
     -25,  -583,   609,   519,  -583,   500,    79,  -583,    13,  1380,
    -583,  -583,  -583,  -583,   370,   216,  -583,  1380,  -583,   -25,
      13,  -583,  -583,  2102,  -583,  2102,   422,   105,  -583,  2102,
    -583,    29,   434,    40,   424,   442,   444,   445,   447,   449,
     450,   453,  -583,   456,   457,   461,   462,   466,   467,   468,
     448,  -583,  1239,  1380,  1380,  1380,  1380,  1380,  1380,   124,
     454,   478,   479,   493,   498,   503,   504,   505,   506,   511,
     512,   514,   515,   518,   520,   532,   539,   132,  -583,   534,
     542,   551,   552,   554,   555,   556,  -583,   557,   558,   560,
     561,   562,   564,  -583,  -583,  -583,  -583,   579,   581,  -583,
      57,    57,  -583,   582,   369,  -583,   286,  -583,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  1380,  -583,
    1380,  -583,  -583,   440,  -583,   509,  -583,  -583,  -583,   609,
    -583,  -583,   443,    95,  -583,  1765,  1868,   649,  -583,  -583,
      13,   634,   439,  -583,   690,  -583,   583,  -583,  -583,  -583,
     585,  -583,  -583,  -583,  -583,  1380,  1380,  1380,  1380,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  1380,
    -583,   586,  -583,   589,   590,   591,   593,   -37,   595,  -583,
    1380,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,
    1380,  -583,  -583,  1380,  1380,  1380,  -583,  1380,  -583,  1380,
    1380,  1380,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,   -31,
     446,   597,  -583,  -583,  1380,  1765,  -583,  -583,  -583,  -583,
    -583,  1868,  -583,   694,   205,  -583,   -25,  1380,    13,  -583,
    1982,   162,   599,   600,   603,   610,  -583,  -583,  -583,  -583,
    -583,   671,   614,  -583,   621,   169,   620,   622,   623,  -583,
     624,   625,   628,  -583,   627,  -583,   266,   639,   597,  -583,
     680,  -583,  -583,  1662,   619,   626,  -583,   746,   755,   650,
     651,  -583,  1947,  1380,  -583,  -583,  -583,  -583,  -583,   643,
    -583,  1380,  1380,  -583,  -583,  -583,  -583,  -583,  -583,  1380,
    -583,  -583,   545,  -583,  -583,   -25,   654,   657,   657,  1662,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,
    -583,    40,   658,   636,   674,   675,   209,  -583,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  1380,  -583,
     676,  -583
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      27,     0,     0,     2,     3,     6,    29,    26,     1,     0,
       0,     0,   101,   101,   101,   101,   101,   101,   101,     5,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,   118,   127,     0,
       0,   127,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   120,   162,     7,   120,     8,     9,
      10,    27,    11,     0,     0,   390,   391,    72,    73,   121,
     123,   188,    78,     0,     0,     0,     0,     0,     0,   175,
     383,   386,   389,   381,   384,   387,   382,   385,   388,   277,
     392,    83,    85,     0,   275,    82,   242,   249,   257,   256,
       0,   264,   265,   276,   378,   379,   380,   274,   278,     0,
     117,   126,    75,   125,     0,     0,    86,     0,     0,     0,
      95,    94,    96,    93,    98,     0,   102,   103,   104,   106,
       0,   107,   108,     0,     0,     0,     0,     0,     0,    36,
      34,    35,    39,    40,   120,   120,    70,   266,   267,   240,
     119,     0,   120,     0,     0,     4,     0,    12,     0,     0,
     122,     0,     0,     0,   191,   187,   198,     0,     0,    79,
       0,   279,   263,     0,   261,   262,   255,   393,     0,     0,
     254,   270,   268,   269,     0,   176,     0,    84,   240,   248,
     244,   243,     0,   124,     0,   127,     0,     0,     0,    97,
      74,     0,   105,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,     0,   311,    42,    43,
      44,    45,    46,    47,    48,   308,   336,   310,   309,     0,
     280,   282,   284,   293,   298,   301,   305,   306,   307,   335,
     345,   346,   347,   237,   274,     0,    37,   127,     0,   127,
      68,     0,   239,     0,     0,    71,   164,   161,   212,   213,
       0,   138,    28,   184,   138,   185,     0,     0,     0,   101,
       0,     0,     0,     0,   221,   186,   190,   196,   193,   200,
     202,   203,   205,   218,   206,   201,   199,   204,   194,   188,
       0,    77,     0,   259,   260,   258,   247,   252,   253,   177,
      76,   241,   178,    88,    87,     0,     0,     0,   111,   110,
     109,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    50,    50,    50,    50,    50,    50,   237,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   303,
     304,   302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,   297,     0,     0,     0,
     236,    50,    38,   138,    69,   138,   238,     0,   138,     0,
     163,   166,   216,     0,    30,   143,   162,   207,     0,     0,
     225,   228,   226,   227,     0,     0,   219,     0,   211,     0,
       0,   189,   195,   188,   197,     0,     0,   249,   245,     0,
     250,   127,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,   322,     0,     0,     0,
       0,     0,     0,   333,   334,   372,   373,     0,     0,   312,
       0,     0,   273,     0,   281,   283,     0,   291,   285,   286,
     287,   288,   289,   290,   294,   295,   299,   300,     0,   232,
     237,    67,    66,     0,    64,     0,   165,   183,   182,   215,
     180,   174,     0,   181,   179,     0,     0,   150,    31,   208,
       0,     0,     0,   223,   220,   192,     0,    81,   246,   251,
       0,    90,    92,    91,   317,     0,     0,     0,     0,   313,
     318,   319,   320,   314,   316,   341,   342,   343,   344,     0,
      52,     0,    51,     0,     0,     0,     0,    59,     0,   234,
       0,   364,   365,   366,   367,   368,   369,   370,   371,   348,
       0,   351,   352,     0,     0,     0,   356,     0,   357,     0,
       0,     0,   323,   326,   324,   325,   327,   328,   329,   330,
     331,   332,   374,   375,   271,   272,    41,   292,   235,   230,
     138,   168,   173,   214,     0,   137,   130,   134,   136,   133,
     141,   142,   139,     0,   148,   209,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
      57,     0,     0,    63,     0,     0,     0,     0,     0,    60,
       0,     0,     0,   229,     0,    65,     0,     0,   167,   170,
     132,   129,   140,     0,     0,     0,   128,   146,   147,     0,
       0,   222,     0,     0,   362,   315,   338,   339,   340,     0,
      62,     0,     0,   349,   353,   354,   355,   358,   359,     0,
     231,   172,     0,   217,   169,     0,     0,     0,     0,   149,
     152,   155,   156,   157,   158,   159,   160,   144,   145,   210,
     224,   127,     0,     0,     0,     0,     0,   171,   131,   135,
     153,   154,   151,    89,   363,    58,   337,   350,     0,   360,
       0,   361
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -583,  -583,  -583,  -583,  -583,   707,  -583,  -583,   735,  -583,
    -583,  -583,  -583,   727,   182,  -583,  -122,  -583,   109,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,   300,  -583,  -583,  -583,
    -583,  -583,  -583,    31,     2,  -583,  -103,  -583,   -90,   -26,
    -583,  -583,   753,  -583,    38,  -583,  -583,  -583,   -12,  -583,
    -583,  -583,  -583,  -583,   343,    92,  -583,  -583,   736,  -127,
     -41,  -288,  -583,  -583,   139,  -583,   135,  -583,  -583,  -583,
    -583,  -583,    67,    96,   100,   372,  -583,  -583,  -583,  -583,
     112,   113,  -456,  -582,   -22,  -583,  -319,  -583,   516,  -583,
    -583,   -68,  -583,  -583,  -583,  -583,  -583,  -583,   513,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,   524,  -583,
    -322,  -583,  -415,  -383,  -583,   665,  -125,   -64,     9,  -583,
     373,   355,  -583,  -583,  -583,   -65,  -583,  -583,  -583,   -18,
     -53,   -34,    22,   -76,  -583,   133,   402,  -583,   413,   414,
     142,  -102,  -583,   -38,  -307,  -315,  -583,  -583,  -583,  -583,
    -583,  -449,  -583,   578,   580,   -32,  -583
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    20,    55,     4,    62,    21,     5,     6,
      32,    56,   161,    57,   140,   141,   142,   277,   522,   641,
     278,   279,   280,   281,   282,   722,   547,   283,   284,    58,
      59,   145,    60,    37,   123,    22,   168,    91,    92,    93,
      23,    24,   124,    25,    44,    26,    27,   130,   133,   371,
      28,    29,    30,    31,   150,   151,    67,    68,    69,   111,
     112,   474,   695,   776,   696,   475,   700,   701,   607,   746,
     704,   779,   780,   747,   748,   155,   469,   470,   737,   738,
     739,   599,    94,   601,   113,   163,   164,   335,   336,   337,
     493,   165,   338,   339,   340,   341,   342,   343,   317,   318,
     602,   319,   344,   345,   346,   614,   347,   348,   702,   734,
     285,   286,   399,   459,   152,   311,    95,    96,   189,   498,
     190,   356,   500,   357,   179,    97,    98,    99,   173,   358,
     100,   180,   287,   182,   573,   288,   460,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   103,   104,   105,   106,   304,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,    70,   183,   187,   107,   169,   481,   166,   107,   166,
     172,   194,    72,   483,   115,   529,   600,   692,   146,   306,
     148,   482,   175,   603,   312,   187,   315,  -112,   -99,   321,
     494,   577,    70,   125,   109,   324,   476,   134,   135,   107,
     170,   107,   148,   107,   148,   109,   169,   127,    64,     1,
     166,    45,    46,    47,    48,    49,    50,   174,   101,   360,
      33,   107,   101,   312,   125,   148,   131,     7,   148,   110,
      33,    34,   110,   143,   147,   197,    33,   368,    33,   109,
     667,   620,   107,   107,    43,   178,   588,   193,   117,   118,
     119,   120,    33,   101,     8,   101,   147,   101,   147,    77,
      78,   136,   137,    77,    78,   201,    42,   199,   172,   191,
      65,   310,    66,   148,   172,   101,   144,   107,    43,   147,
     175,   721,   147,    35,    63,   176,   175,   733,    61,    39,
     -13,    65,   176,    66,   121,    71,   101,   101,   184,   122,
     198,   107,   334,   600,   129,     1,   153,   107,    73,   156,
     603,    71,   359,   185,   364,   354,   107,   132,   143,   143,
     362,   687,    71,   143,   107,   114,   107,   147,   369,   102,
     365,   101,   367,   102,   615,   591,   320,   592,   149,    33,
     594,   110,    65,   462,    66,  -112,   -99,   468,    36,   154,
     692,   372,   373,   374,    40,   101,    71,   202,   200,   126,
     588,   101,   589,   370,   102,   308,   102,   689,   102,   138,
     101,   159,    77,    78,   181,    77,    78,   744,   101,   177,
     101,   192,    77,    78,   188,   745,   102,   496,   139,    77,
      78,   570,   571,   196,   439,   440,   307,   309,   441,   138,
      65,   588,    66,   649,   314,    77,    78,   102,   102,   667,
      65,   668,    66,   305,   138,   200,   326,    65,   139,    66,
      77,    78,   203,   502,   181,   316,   463,   327,   465,   328,
     204,    77,    78,   205,   464,   187,   148,   187,   313,   753,
     600,   754,   102,   697,   481,   166,   762,   603,   763,   322,
     699,   483,   350,   478,   138,   148,   484,   323,   169,   482,
      77,    78,   166,   325,   477,    51,   102,   349,   486,    52,
      53,    54,   102,   334,   457,   458,   600,   107,   206,   207,
     107,   102,   351,   603,   329,   330,   808,   143,   809,   102,
     147,   102,   352,   107,   107,   107,   453,   454,   471,   597,
      77,    78,   593,   355,    81,    82,   331,    84,    85,   147,
      87,    88,    38,    41,   320,   586,   587,   363,   366,   375,
     332,   376,   333,   377,   378,   379,   572,   485,    65,   380,
      66,   101,    71,   697,   101,   381,   382,   383,   384,   481,
     699,   385,   386,   387,   442,   771,   483,   101,   101,   101,
     388,   177,   389,   390,   482,   391,   392,   504,   393,   394,
     395,   396,   735,   397,   398,   400,    79,    51,    80,    81,
      82,    83,    84,    85,    86,    87,    88,   598,    65,   401,
      66,   781,   402,   403,   404,   405,   406,   616,   784,   166,
     407,   166,   408,   409,   172,   107,   783,   410,   411,   412,
     604,   413,   414,   415,   416,   417,   175,   418,   419,   420,
     421,   610,   422,   148,   423,   424,   609,   781,   425,   426,
     621,   107,   623,   107,   784,   148,   427,   107,   613,   428,
     800,   801,   783,   445,   446,   429,    74,   430,   431,   432,
     433,   434,   102,   435,   436,   102,   437,   473,   461,   101,
     466,   443,   596,   467,   684,   685,   472,   444,   102,   102,
     102,   523,   524,   525,   526,   527,   528,   147,   487,   489,
     490,   612,   492,    74,   495,   101,   497,   101,   499,   147,
     521,   101,    75,   576,    76,   556,   563,   564,    77,    78,
     565,   566,   447,   448,   449,   450,   451,   452,   569,   595,
     289,   605,   606,   624,    79,   617,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    65,   622,    66,   625,
      90,   626,   627,   690,   628,   639,   693,   604,   629,   630,
     590,   650,   631,   484,   484,   632,   633,    75,   707,    76,
     634,   635,   186,    77,    78,   636,   637,   638,   705,   578,
     579,   580,   581,   582,   583,   584,   585,   651,   652,    79,
     102,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    65,   653,    66,    75,    90,    76,   654,   597,   195,
      77,    78,   655,   656,   657,   658,   102,   698,   102,   660,
     659,   691,   102,   661,   662,   663,    79,   664,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    65,   665,
      66,   669,    90,     9,    10,    11,    12,    13,   666,   670,
      14,    15,   187,   484,   797,    16,    17,    18,   671,   484,
     703,   672,   438,   673,   674,   675,   676,   677,   107,   678,
     679,   680,   597,   681,   752,    79,   751,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   598,    65,   682,    66,
     683,   686,   706,   708,   604,   716,   709,   710,   717,   718,
     719,   484,   720,    19,   723,   736,   743,   698,   755,   756,
     107,   759,   757,     9,    10,    11,    12,    13,   749,   758,
      14,    15,   101,   760,    74,    16,    17,    18,   761,   764,
     604,   765,   766,   767,   768,   769,   770,   484,   775,    79,
     803,    80,    81,    82,    83,    84,    85,    86,    87,    88,
     598,    65,   773,    66,   785,   782,   745,   744,   157,   789,
     790,   786,   793,   799,   101,   479,   805,   804,   505,   506,
     507,   508,   509,   510,   511,   513,   514,   515,   516,   517,
     518,   519,   520,   806,   807,   811,   158,   798,   162,   128,
     160,   782,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   548,
     549,   550,   551,   552,   553,   554,   555,   647,   557,   558,
     559,   560,   561,   562,   741,    75,   742,    76,   567,   568,
     501,    77,    78,   102,   788,   488,   802,   787,   608,   772,
     774,   491,   480,   361,   619,     0,   574,    79,   575,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    65,
     618,    66,   455,    90,   456,     0,     0,     0,     0,     0,
     208,   438,     0,     0,     0,   102,     0,   209,     0,   611,
     210,     0,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,     0,     0,   224,   225,   226,
     227,   228,   229,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   548,
     648,   231,     0,   232,     0,     0,     0,     0,     0,     0,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,     0,     0,   266,   267,   268,
     269,     0,   270,   171,   271,     0,     0,     0,    77,    78,
     688,     0,     0,     0,     0,     0,     0,     0,     0,   272,
     273,     0,     0,     0,    79,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    65,   274,    66,   275,
      90,     0,     0,     0,   276,     0,     0,   711,   712,   713,
     714,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   715,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,    75,   171,    76,     0,     0,     0,    77,
      78,     0,   725,     0,     0,   726,   727,   728,     0,   729,
       0,   730,   731,   732,     0,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    65,     0,    66,
       0,    90,     0,     0,     0,     0,   740,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   750,
       0,     0,     0,     0,   208,     0,     0,     0,     0,     0,
       0,   209,     0,     0,   210,     0,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,     0,
       0,   224,   225,   226,   227,   228,   229,   230,     0,     0,
       0,     0,     0,     0,     0,   792,     0,     0,     0,     0,
       0,     0,     0,   794,   795,   231,     0,   232,     0,     0,
       0,   796,     0,     0,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,     0,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,     0,
     810,   266,   267,   268,   269,     0,   270,   512,   271,     0,
       0,     0,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,   273,     0,     0,     0,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      65,   274,    66,   275,    90,   208,     0,     0,   276,     0,
       0,     0,   209,     0,     0,   210,     0,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
       0,     0,   224,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,   232,     0,
       0,     0,     0,     0,     0,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,     0,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
       0,     0,   266,   267,   268,   269,     0,   270,     0,   271,
       0,     0,     0,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,   273,   640,     0,     0,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    65,   274,    66,   275,    90,   208,     0,     0,   276,
       0,     0,     0,   209,     0,     0,   210,     0,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,     0,     0,   224,   225,   226,   227,   228,   229,   230,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,   232,
       0,     0,     0,     0,     0,     0,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,     0,   266,   267,   268,   269,     0,   270,     0,
     271,     0,     0,     0,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,   273,     0,     0,     0,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    65,   274,    66,   275,    90,   208,     0,     0,
     276,     0,     0,     0,   209,     0,     0,   210,     0,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,     0,     0,   224,   225,   226,   227,   228,   229,
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
     232,     0,     0,     0,     0,     0,     0,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,     0,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,     0,     0,   266,   267,   268,   269,     0,   270,
       0,   271,     0,     0,     0,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    65,   274,    66,   275,    90,   208,     0,
       0,     0,     0,     0,     0,   209,   777,   778,   210,     0,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
       0,   232,     0,     0,     0,     0,     0,     0,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,     0,     0,   266,   267,   268,   269,     0,
     479,   208,     0,     0,     0,     0,    77,    78,   209,     0,
       0,   210,     0,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,    65,   274,    66,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,   232,     0,     0,     0,     0,     0,
       0,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,     0,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,     0,     0,   266,   267,
     268,   269,     0,   694,   208,     0,     0,     0,     0,    77,
      78,   209,     0,     0,   210,     0,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    74,
       0,     0,     0,     0,     0,     0,     0,    65,   274,    66,
     275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,   232,     0,     0,
       0,     0,     0,     0,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    74,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,     0,
       0,   266,   267,   268,   269,     0,   479,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,     0,   503,    77,    78,     0,     0,
      65,   274,    66,   275,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    65,   167,    66,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,    76,     0,     0,
     791,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    65,
      75,    66,    76,    90,     0,     0,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    65,     0,    66,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,     0,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      65,     0,    66,     0,    90,    75,   353,    76,     0,     0,
       0,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    65,
      75,    66,    76,    90,     0,     0,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    65,     0,    66,     0,    90
};

static const yytype_int16 yycheck[] =
{
      41,    33,    78,    93,    36,    73,   328,    71,    40,    73,
      75,   114,    34,   328,    40,   398,   472,   599,    52,   141,
      52,   328,    75,   472,   149,   115,   153,     0,     0,   156,
     349,   446,    64,    17,     5,   162,   324,    49,    50,    71,
      74,    73,    74,    75,    76,     5,   114,    45,    18,    15,
     114,    13,    14,    15,    16,    17,    18,    75,    36,   186,
       4,    93,    40,   188,    17,    97,    61,   152,   100,    38,
       4,     5,    41,    51,    52,    57,     4,    61,     4,     5,
     117,    52,   114,   115,    56,    76,   117,   109,    51,    52,
      17,    18,     4,    71,     0,    73,    74,    75,    76,   124,
     125,    10,    11,   124,   125,    60,   152,    61,   173,   100,
     152,   145,   154,   145,   179,    93,   137,   149,    56,    97,
     173,   158,   100,    57,    14,    27,   179,   158,   158,    57,
       0,   152,    27,   154,    61,   122,   114,   115,   126,    66,
     122,   173,   164,   599,   152,    15,    54,   179,   122,    57,
     599,   122,   184,   141,   195,   173,   188,   152,   136,   137,
     192,   576,   122,   141,   196,   122,   198,   145,   152,    36,
     196,   149,   198,    40,   493,   463,   154,   465,   122,     4,
     468,   150,   152,   305,   154,   158,   158,   314,   122,   110,
     772,   203,   204,   205,   122,   173,   122,   152,   152,   152,
     117,   179,   119,   201,    71,   117,    73,   590,    75,   118,
     188,   157,   124,   125,   157,   124,   125,    12,   196,   121,
     198,   126,   124,   125,   159,    20,    93,   352,   137,   124,
     125,   124,   125,   122,   272,   273,   144,   145,   276,   118,
     152,   117,   154,   119,   152,   124,   125,   114,   115,   117,
     152,   119,   154,   117,   118,   152,     6,   152,   137,   154,
     124,   125,    62,   366,   157,   118,   307,    17,   309,    19,
      62,   124,   125,    62,   308,   365,   308,   367,     5,   117,
     736,   119,   149,   605,   606,   349,   117,   736,   119,   152,
     605,   606,   152,   327,   118,   327,   328,   123,   366,   606,
     124,   125,   366,   123,   326,     3,   173,   159,   330,     7,
       8,     9,   179,   335,   137,   138,   772,   349,   136,   137,
     352,   188,   123,   772,    74,    75,   117,   305,   119,   196,
     308,   198,   122,   365,   366,   367,   135,   136,   316,    73,
     124,   125,   467,   121,   143,   144,    96,   146,   147,   327,
     149,   150,     9,    10,   332,   457,   458,   123,   122,   118,
     110,   118,   112,   118,   118,   118,   442,   329,   152,   118,
     154,   349,   122,   695,   352,   118,   118,   118,   118,   701,
     695,   118,   118,   118,    68,   119,   701,   365,   366,   367,
     118,   121,   118,   118,   701,   118,   118,   375,   118,   118,
     118,   118,   690,   118,   118,   118,   140,     3,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   118,
     154,   743,   118,   118,   118,   118,   118,   495,   743,   493,
     118,   495,   118,   118,   499,   467,   743,   118,   118,   118,
     472,   118,   118,   118,   118,   118,   499,   118,   118,   118,
     118,   485,   118,   485,   118,   118,   478,   779,   118,   118,
     501,   493,   503,   495,   779,   497,   118,   499,   490,   118,
     777,   778,   779,    70,    71,   118,    17,   118,   118,   118,
     118,   118,   349,   118,   118,   352,   118,    41,   118,   467,
     123,   127,   470,   122,   570,   571,   122,   128,   365,   366,
     367,   392,   393,   394,   395,   396,   397,   485,   118,   118,
      13,   489,   159,    17,   122,   493,   158,   495,   117,   497,
      10,   499,   118,    71,   120,   119,   119,   119,   124,   125,
     119,   119,   129,   130,   131,   132,   133,   134,   119,   119,
     138,    22,    42,   119,   140,   123,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   123,   154,   117,
     156,   117,   117,   123,   117,   117,   123,   599,   119,   119,
     461,   117,   119,   605,   606,   119,   119,   118,   139,   120,
     119,   119,   123,   124,   125,   119,   119,   119,   610,   447,
     448,   449,   450,   451,   452,   453,   454,   119,   119,   140,
     467,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   119,   154,   118,   156,   120,   119,    73,   123,
     124,   125,   119,   119,   119,   119,   493,   605,   495,   117,
     119,   122,   499,   119,   119,   117,   140,   117,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   117,
     154,   117,   156,    51,    52,    53,    54,    55,   119,   117,
      58,    59,   752,   695,   119,    63,    64,    65,   117,   701,
      21,   119,   270,   119,   119,   119,   119,   119,   710,   119,
     119,   119,    73,   119,   710,   140,   708,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   119,   154,
     119,   119,    68,    13,   736,   119,   123,   122,   119,   119,
     119,   743,   119,   111,   119,   118,    22,   695,   119,   119,
     752,    50,   119,    51,    52,    53,    54,    55,   706,   119,
      58,    59,   710,   119,    17,    63,    64,    65,   117,   119,
     772,   119,   119,   119,   119,   117,   119,   779,    68,   140,
     791,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   123,   154,   145,   743,    20,    12,    61,   119,
     119,   145,   129,   119,   752,   118,   140,   119,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   119,   119,   119,    61,   775,    71,    46,
      64,   779,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   527,   426,   427,
     428,   429,   430,   431,   695,   118,   701,   120,   436,   437,
     123,   124,   125,   710,   748,   332,   779,   747,   476,   736,
     738,   335,   328,   188,   499,    -1,   443,   140,   444,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     497,   154,   294,   156,   294,    -1,    -1,    -1,    -1,    -1,
      16,   479,    -1,    -1,    -1,   752,    -1,    23,    -1,   487,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   522,   523,   524,   525,   526,   527,
     528,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,    -1,    -1,   113,   114,   115,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     588,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,    -1,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,    -1,    -1,   160,    -1,    -1,   625,   626,   627,
     628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   650,   118,   119,   120,    -1,    -1,    -1,   124,
     125,    -1,   660,    -1,    -1,   663,   664,   665,    -1,   667,
      -1,   669,   670,   671,    -1,   140,    -1,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,   154,
      -1,   156,    -1,    -1,    -1,    -1,   694,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   707,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   753,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   761,   762,    67,    -1,    69,    -1,    -1,
      -1,   769,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,    -1,
     808,   113,   114,   115,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,    -1,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    16,    -1,    -1,   160,    -1,
      -1,    -1,    23,    -1,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    -1,
      -1,    -1,   113,   114,   115,   116,    -1,   118,    -1,   120,
      -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,
      -1,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    16,    -1,    -1,   160,
      -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,    -1,    -1,   113,   114,   115,   116,    -1,   118,    -1,
     120,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,    -1,
     140,    -1,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    16,    -1,    -1,
     160,    -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,   113,   114,   115,   116,    -1,   118,
      -1,   120,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,   113,   114,   115,   116,    -1,
     118,    16,    -1,    -1,    -1,    -1,   124,   125,    23,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    -1,    -1,    -1,   113,   114,
     115,   116,    -1,   118,    16,    -1,    -1,    -1,    -1,   124,
     125,    23,    -1,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    17,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,    -1,
      -1,   113,   114,   115,   116,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,   124,   125,    -1,    -1,
     152,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    17,   154,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     118,   154,   120,   156,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,    -1,   156,   118,   119,   120,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     118,   154,   120,   156,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,    -1,   156
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    15,   162,   163,   166,   169,   170,   152,     0,    51,
      52,    53,    54,    55,    58,    59,    63,    64,    65,   111,
     164,   168,   196,   201,   202,   204,   206,   207,   211,   212,
     213,   214,   171,     4,     5,    57,   122,   194,   215,    57,
     122,   215,   152,    56,   205,   205,   205,   205,   205,   205,
     205,     3,     7,     8,     9,   165,   172,   174,   190,   191,
     193,   158,   167,    14,    18,   152,   154,   217,   218,   219,
     316,   122,   245,   122,    17,   118,   120,   124,   125,   140,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     156,   198,   199,   200,   243,   277,   278,   286,   287,   288,
     291,   293,   296,   312,   313,   314,   315,   316,   317,     5,
     194,   220,   221,   245,   122,   200,   221,    51,    52,    17,
      18,    61,    66,   195,   203,    17,   152,   195,   203,   152,
     208,    61,   152,   209,   209,   209,    10,    11,   118,   137,
     175,   176,   177,   293,   137,   192,   292,   293,   316,   122,
     215,   216,   275,   216,   110,   236,   216,   166,   169,   157,
     219,   173,   174,   246,   247,   252,   278,    17,   197,   252,
     292,   119,   286,   289,   290,   291,    27,   121,   279,   285,
     292,   157,   294,   294,   126,   141,   123,   199,   159,   279,
     281,   279,   126,   245,   197,   123,   122,    57,   122,    61,
     152,    60,   152,    62,    62,    62,   175,   175,    16,    23,
      26,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    43,    44,    45,    46,    47,    48,
      49,    67,    69,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   113,   114,   115,   116,
     118,   120,   135,   136,   153,   155,   160,   178,   181,   182,
     183,   184,   185,   188,   189,   271,   272,   293,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   316,   117,   177,   216,   117,   216,
     292,   276,   277,     5,   216,   220,   118,   259,   260,   262,
     293,   220,   152,   123,   220,   123,     6,    17,    19,    74,
      75,    96,   110,   112,   245,   248,   249,   250,   253,   254,
     255,   256,   257,   258,   263,   264,   265,   267,   268,   159,
     152,   123,   122,   119,   290,   121,   282,   284,   290,   316,
     220,   276,   316,   123,   221,   200,   122,   200,    61,   152,
     195,   210,   209,   209,   209,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   273,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   297,   304,
     304,   304,    68,   127,   128,    70,    71,   129,   130,   131,
     132,   133,   134,   135,   136,   314,   315,   137,   138,   274,
     297,   118,   177,   221,   292,   221,   123,   122,   220,   237,
     238,   293,   122,    41,   222,   226,   222,   245,   292,   118,
     269,   271,   305,   306,   316,   205,   245,   118,   259,   118,
      13,   249,   159,   251,   247,   122,   277,   158,   280,   117,
     283,   123,   197,   123,   293,   297,   297,   297,   297,   297,
     297,   297,   119,   297,   297,   297,   297,   297,   297,   297,
     297,    10,   179,   179,   179,   179,   179,   179,   179,   274,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   187,   297,   297,
     297,   297,   297,   297,   297,   297,   119,   297,   297,   297,
     297,   297,   297,   119,   119,   119,   119,   297,   297,   119,
     124,   125,   294,   295,   299,   300,    71,   273,   301,   301,
     301,   301,   301,   301,   301,   301,   302,   302,   117,   119,
     179,   222,   222,   277,   222,   119,   293,    73,   151,   242,
     243,   244,   261,   312,   316,    22,    42,   229,   236,   245,
     292,   297,   293,   245,   266,   247,   252,   123,   281,   282,
      52,   221,   123,   221,   119,   117,   117,   117,   117,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   117,
     137,   180,   297,   297,   297,   297,   297,   187,   297,   119,
     117,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     117,   119,   119,   117,   117,   117,   119,   117,   119,   117,
     117,   117,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   294,   294,   119,   273,   297,   274,
     123,   122,   244,   123,   118,   223,   225,   271,   293,   306,
     227,   228,   269,    21,   231,   245,    68,   139,    13,   123,
     122,   297,   297,   297,   297,   297,   119,   119,   119,   119,
     119,   158,   186,   119,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   158,   270,   222,   118,   239,   240,   241,
     297,   225,   227,    22,    12,    20,   230,   234,   235,   293,
     297,   245,   200,   117,   119,   119,   119,   119,   119,    50,
     119,   117,   117,   119,   119,   119,   119,   119,   119,   117,
     119,   119,   242,   123,   241,    68,   224,    24,    25,   232,
     233,   271,   293,   305,   306,   145,   145,   235,   234,   119,
     119,   123,   297,   129,   297,   297,   297,   119,   293,   119,
     305,   305,   233,   221,   119,   140,   119,   119,   117,   119,
     297,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   161,   162,   162,   163,   164,   164,   165,   165,   165,
     165,   166,   167,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   170,   170,   171,   171,
     172,   173,   174,   174,   174,   175,   175,   176,   176,   176,
     177,   177,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   180,   180,   181,   182,   183,   184,   185,   186,   186,
     187,   187,   188,   189,   190,   190,   191,   191,   192,   192,
     192,   193,   194,   194,   195,   196,   196,   196,   196,   197,
     197,   198,   199,   199,   200,   200,   201,   201,   201,   202,
     202,   202,   202,   203,   203,   203,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   208,   208,   209,   209,   210,
     210,   210,   211,   211,   212,   213,   214,   215,   215,   216,
     216,   217,   218,   219,   220,   220,   221,   221,   222,   223,
     223,   224,   224,   225,   225,   225,   225,   226,   226,   227,
     228,   228,   229,   229,   230,   230,   230,   230,   230,   231,
     231,   232,   232,   233,   233,   233,   233,   233,   233,   234,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   243,   243,   244,
     244,   244,   244,   244,   245,   245,   246,   247,   247,   248,
     248,   248,   249,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   253,   253,   253,   253,   253,   254,   255,   256,
     257,   258,   259,   259,   260,   261,   261,   262,   263,   264,
     265,   265,   266,   266,   267,   268,   269,   269,   269,   270,
     270,   271,   271,   272,   273,   274,   274,   274,   275,   276,
     276,   277,   277,   278,   278,   279,   280,   280,   281,   281,
     282,   283,   283,   284,   285,   285,   286,   286,   287,   288,
     289,   289,   290,   290,   291,   291,   292,   292,   293,   293,
     294,   295,   295,   295,   296,   296,   296,   296,   296,   296,
     297,   298,   298,   299,   299,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   301,   301,   301,   301,   301,   302,
     302,   302,   303,   303,   303,   303,   304,   304,   304,   304,
     304,   304,   305,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   308,   308,   309,   309,   309,   309,   309,   309,
     309,   309,   310,   310,   310,   310,   311,   311,   312,   312,
     312,   313,   313,   313,   314,   314,   314,   315,   315,   315,
     316,   316,   317,   317
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     1,     0,     1,     1,     1,
       1,     3,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     4,     0,
       4,     4,     3,     3,     2,     1,     1,     2,     3,     1,
       1,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     5,     5,     5,     5,     5,     4,     0,
       3,     1,     6,     5,     5,     7,     5,     5,     2,     3,
       1,     3,     2,     2,     2,     3,     5,     5,     3,     1,
       5,     5,     1,     1,     2,     1,     3,     5,     5,    11,
       7,     7,     7,     1,     1,     1,     1,     2,     3,     1,
       1,     0,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     5,     5,     5,     2,     1,     1,
       0,     1,     2,     1,     2,     1,     1,     0,     4,     2,
       1,     2,     0,     1,     1,     4,     1,     3,     0,     1,
       2,     1,     2,     0,     2,     2,     1,     1,     0,     3,
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       2,     2,     0,     1,     0,     2,     1,     1,     0,     2,
       1,     3,     2,     2,     1,     1,     2,     3,     3,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     0,     2,
       1,     0,     3,     1,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       6,     2,     1,     1,     4,     1,     0,     6,     1,     2,
       3,     1,     3,     1,     6,     2,     1,     1,     1,     1,
       0,     6,     3,     2,     3,     3,     1,     0,     3,     1,
       0,     3,     1,     2,     2,     3,     2,     0,     1,     0,
       2,     2,     0,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     1,     3,     3,     2,     2,     1,     3,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     6,     4,     4,     4,     4,
       4,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     3,     1,     1,     8,     6,     6,
       6,     4,     4,     4,     4,     1,     1,     1,     4,     6,
       8,     4,     4,     6,     6,     6,     4,     4,     6,     6,
       8,    10,     6,     8,     4,     4,     4,     4,     4,     4,
       4,     4,     3,     3,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (rq, yyscanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, rq, yyscanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rasqal_query* rq, void* yyscanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (rq);
  YYUSE (yyscanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rasqal_query* rq, void* yyscanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, rq, yyscanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, rasqal_query* rq, void* yyscanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , rq, yyscanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, rq, yyscanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, rasqal_query* rq, void* yyscanner)
{
  YYUSE (yyvaluep);
  YYUSE (rq);
  YYUSE (yyscanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 140: /* "string"  */
#line 385 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).name))
    RASQAL_FREE(char*, ((*yyvaluep).name));
}
#line 2147 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 141: /* "langtag"  */
#line 385 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).name))
    RASQAL_FREE(char*, ((*yyvaluep).name));
}
#line 2156 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 142: /* "double literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2165 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 143: /* "double positive literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2174 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 144: /* "double negative literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2183 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 145: /* "integer literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2192 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 146: /* "integer positive literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2201 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 147: /* "integer negative literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2210 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 148: /* "decimal literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2219 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 149: /* "decimal positive literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2228 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 150: /* "decimal negative literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2237 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 151: /* "boolean literal"  */
#line 364 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2246 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 152: /* "URI literal"  */
#line 374 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).uri))
    raptor_free_uri(((*yyvaluep).uri));
}
#line 2255 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 153: /* "URI literal ("  */
#line 374 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).uri))
    raptor_free_uri(((*yyvaluep).uri));
}
#line 2264 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 154: /* "QName literal"  */
#line 385 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).name))
    RASQAL_FREE(char*, ((*yyvaluep).name));
}
#line 2273 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 155: /* "QName literal ("  */
#line 385 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).name))
    RASQAL_FREE(char*, ((*yyvaluep).name));
}
#line 2282 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 156: /* "blank node literal"  */
#line 385 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).name))
    RASQAL_FREE(char*, ((*yyvaluep).name));
}
#line 2291 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 157: /* "identifier"  */
#line 385 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).name))
    RASQAL_FREE(char*, ((*yyvaluep).name));
}
#line 2300 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 172: /* SelectQuery  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2309 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 173: /* SubSelect  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2318 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 174: /* SelectClause  */
#line 490 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).projection))
    rasqal_free_projection(((*yyvaluep).projection));
}
#line 2327 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 175: /* SelectExpressionList  */
#line 490 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).projection))
    rasqal_free_projection(((*yyvaluep).projection));
}
#line 2336 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 176: /* SelectExpressionListTail  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2345 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 177: /* SelectTerm  */
#line 466 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).variable))
    rasqal_free_variable(((*yyvaluep).variable));
}
#line 2354 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 178: /* AggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2363 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 180: /* ExpressionOrStar  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2372 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 181: /* CountAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2381 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 182: /* SumAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2390 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 183: /* AvgAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2399 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 184: /* MinAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2408 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 185: /* MaxAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2417 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 186: /* SeparatorOpt  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2426 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 188: /* GroupConcatAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2435 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 189: /* SampleAggregateExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2444 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 190: /* ConstructQuery  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2453 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 191: /* DescribeQuery  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2462 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 192: /* VarOrIRIrefList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2471 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 194: /* DatasetClause  */
#line 472 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).data_graph))
    rasqal_free_data_graph(((*yyvaluep).data_graph));
}
#line 2480 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 197: /* GraphTriples  */
#line 408 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).update))
    rasqal_free_update_operation(((*yyvaluep).update));
}
#line 2489 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 198: /* GraphTemplate  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2498 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 199: /* ModifyTemplate  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2507 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 200: /* ModifyTemplateList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2516 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 203: /* GraphRefAll  */
#line 380 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).uri_applies))
    free_uri_applies(((*yyvaluep).uri_applies));
}
#line 2525 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 208: /* IriRefList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2534 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 215: /* DatasetClauseList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2543 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 216: /* DatasetClauseListOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2552 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 217: /* DefaultGraphClause  */
#line 472 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).data_graph))
    rasqal_free_data_graph(((*yyvaluep).data_graph));
}
#line 2561 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 218: /* NamedGraphClause  */
#line 472 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).data_graph))
    rasqal_free_data_graph(((*yyvaluep).data_graph));
}
#line 2570 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 219: /* SourceSelector  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2579 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 222: /* SolutionModifier  */
#line 484 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).modifier))
    rasqal_free_solution_modifier(((*yyvaluep).modifier));
}
#line 2588 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 223: /* GroupConditionList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2597 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 224: /* AsVarOpt  */
#line 466 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).variable))
    rasqal_free_variable(((*yyvaluep).variable));
}
#line 2606 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 225: /* GroupCondition  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2615 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 226: /* GroupClauseOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2624 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 227: /* HavingCondition  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2633 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 228: /* HavingConditionList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2642 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 229: /* HavingClauseOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2651 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 231: /* OrderClauseOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2660 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 232: /* OrderConditionList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2669 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 233: /* OrderCondition  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2678 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 236: /* ValuesClauseOpt  */
#line 497 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).bindings))
    rasqal_free_bindings(((*yyvaluep).bindings));
}
#line 2687 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 237: /* VarListOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2696 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 238: /* VarList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2705 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 239: /* DataBlockRowListOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2714 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 240: /* DataBlockRowList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2723 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 241: /* DataBlockRow  */
#line 478 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).row))
    rasqal_free_row(((*yyvaluep).row));
}
#line 2732 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 242: /* DataBlockValueList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2741 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 243: /* RDFLiteral  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2750 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 244: /* DataBlockValue  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 2759 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 245: /* GroupGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2768 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 246: /* GroupGraphPatternSub  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2777 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 247: /* TriplesBlockOpt  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 2786 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 248: /* GraphPatternListOpt  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2795 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 249: /* GraphPatternList  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2804 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 250: /* GraphPatternListFilter  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2813 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 252: /* TriplesBlock  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 2822 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 253: /* GraphPatternNotTriples  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2831 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 254: /* OptionalGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2840 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 255: /* GraphGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2849 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 256: /* ServiceGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2858 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 257: /* Bind  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2867 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 258: /* InlineData  */
#line 497 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).bindings))
    rasqal_free_bindings(((*yyvaluep).bindings));
}
#line 2876 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 259: /* DataBlock  */
#line 497 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).bindings))
    rasqal_free_bindings(((*yyvaluep).bindings));
}
#line 2885 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 260: /* InlineDataOneVar  */
#line 497 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).bindings))
    rasqal_free_bindings(((*yyvaluep).bindings));
}
#line 2894 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 261: /* DataBlockValueListOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2903 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 262: /* InlineDataFull  */
#line 497 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).bindings))
    rasqal_free_bindings(((*yyvaluep).bindings));
}
#line 2912 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 263: /* InlineDataGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2921 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 264: /* MinusGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2930 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 265: /* GroupOrUnionGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2939 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 266: /* GroupOrUnionGraphPatternList  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2948 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 267: /* LetGraphPattern  */
#line 425 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).graph_pattern))
    rasqal_free_graph_pattern(((*yyvaluep).graph_pattern));
}
#line 2957 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 268: /* Filter  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2966 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 269: /* Constraint  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2975 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 270: /* ParamsOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 2984 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 271: /* FunctionCall  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 2993 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 272: /* CoalesceExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3002 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 273: /* ArgList  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 3011 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 274: /* ArgListNoBraces  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 3020 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 275: /* ConstructTemplate  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 3029 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 276: /* ConstructTriplesOpt  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 3038 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 277: /* ConstructTriples  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 3047 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 278: /* TriplesSameSubject  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3056 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 279: /* PropertyListNotEmpty  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3065 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 280: /* PropertyListTailOpt  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3074 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 281: /* PropertyList  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3083 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 282: /* ObjectList  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3092 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 283: /* ObjectTail  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3101 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 284: /* Object  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3110 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 285: /* Verb  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3119 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 286: /* TriplesNode  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3128 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 287: /* BlankNodePropertyList  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3137 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 288: /* Collection  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3146 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 289: /* GraphNodeListNotEmpty  */
#line 391 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).seq))
    raptor_free_sequence(((*yyvaluep).seq));
}
#line 3155 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 290: /* GraphNode  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3164 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 291: /* VarOrTerm  */
#line 414 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).formula))
    rasqal_free_formula(((*yyvaluep).formula));
}
#line 3173 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 292: /* VarOrIRIref  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3182 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 293: /* Var  */
#line 466 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).variable))
    rasqal_free_variable(((*yyvaluep).variable));
}
#line 3191 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 294: /* VarName  */
#line 466 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).variable))
    rasqal_free_variable(((*yyvaluep).variable));
}
#line 3200 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 296: /* GraphTerm  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3209 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 297: /* Expression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3218 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 298: /* ConditionalOrExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3227 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 299: /* ConditionalAndExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3236 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 300: /* RelationalExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3245 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 301: /* AdditiveExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3254 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 302: /* MultiplicativeExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3263 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 303: /* UnaryExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3272 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 304: /* PrimaryExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3281 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 305: /* BrackettedExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3290 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 306: /* BuiltInCall  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3299 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 308: /* RegexExpression  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3308 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 309: /* DatetimeBuiltinAccessors  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3317 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 310: /* DatetimeExtensions  */
#line 438 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).expr))
    rasqal_free_expression(((*yyvaluep).expr));
}
#line 3326 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 311: /* IRIrefBrace  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3335 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 312: /* NumericLiteral  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3344 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 313: /* NumericLiteralUnsigned  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3353 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 314: /* NumericLiteralPositive  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3362 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 315: /* NumericLiteralNegative  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3371 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 316: /* IRIref  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3380 "sparql_parser.c" /* yacc.c:1257  */
        break;

    case 317: /* BlankNode  */
#line 455 "./sparql_parser.y" /* yacc.c:1257  */
      {
  if(((*yyvaluep).literal))
    rasqal_free_literal(((*yyvaluep).literal));
}
#line 3389 "sparql_parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (rasqal_query* rq, void* yyscanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, yyscanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 519 "./sparql_parser.y" /* yacc.c:1646  */
    {
  if((yyvsp[0].bindings))
    rq->bindings = (yyvsp[0].bindings);
}
#line 3660 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 528 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(sparql->experimental)
    rq->explain = 1;
  else {
    sparql_syntax_error(rq,
                        "EXPLAIN can only used with LAQRS");
    YYERROR;
  }
}
#line 3677 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 541 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* nothing to do */
}
#line 3685 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 549 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_sequence* seq;
  rasqal_graph_pattern* where_gp;

  /* Query graph pattern is first GP inside sequence of sub-GPs */
  seq = rasqal_graph_pattern_get_sub_graph_pattern_sequence((yyvsp[0].graph_pattern));
  where_gp = (rasqal_graph_pattern*)raptor_sequence_delete_at(seq, 0);

  rasqal_query_store_select_query(rq,
                                  (yyvsp[0].graph_pattern)->projection,
                                  (yyvsp[0].graph_pattern)->data_graphs,
                                  where_gp,
                                  (yyvsp[0].graph_pattern)->modifier);
  (yyvsp[0].graph_pattern)->projection = NULL;
  (yyvsp[0].graph_pattern)->data_graphs = NULL;
  (yyvsp[0].graph_pattern)->modifier = NULL;

  rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
}
#line 3709 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 569 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->constructs = (yyvsp[0].seq);
  rq->verb = RASQAL_QUERY_VERB_CONSTRUCT;
}
#line 3718 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 574 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->describes = (yyvsp[0].seq);
  rq->verb = RASQAL_QUERY_VERB_DESCRIBE;
}
#line 3727 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 579 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_ASK;
}
#line 3735 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 597 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_DELETE;
}
#line 3743 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 601 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_INSERT;
}
#line 3751 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 605 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3759 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 609 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3767 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 613 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3775 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 617 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3783 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 621 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3791 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 625 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3799 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 629 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3807 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 633 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rq->verb = RASQAL_QUERY_VERB_UPDATE;
}
#line 3815 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 641 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* nothing to do */
}
#line 3823 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 649 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_query_set_base_uri(rq, (yyvsp[0].uri));
}
#line 3831 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 653 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* nothing to do */
}
#line 3839 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 661 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_sequence *seq = rq->prefixes;
  unsigned const char* prefix_string = (yyvsp[-1].name);
  size_t prefix_length = 0;

  if(prefix_string)
    prefix_length = strlen(RASQAL_GOOD_CAST(const char*, prefix_string));
  
  if(raptor_namespaces_find_namespace(rq->namespaces,
                                      prefix_string, RASQAL_BAD_CAST(int, prefix_length))) {
    /* A prefix may be defined only once */
    sparql_syntax_warning(rq,
                          "PREFIX %s can be defined only once.",
                          prefix_string ? RASQAL_GOOD_CAST(const char*, prefix_string) : ":");
    RASQAL_FREE(char*, prefix_string);
    raptor_free_uri((yyvsp[0].uri));
  } else {
    rasqal_prefix *p;
    p = rasqal_new_prefix(rq->world, prefix_string, (yyvsp[0].uri));
    if(!p)
      YYERROR_MSG("PrefixDeclOpt: failed to create new prefix");
    if(raptor_sequence_push(seq, p))
      YYERROR_MSG("PrefixDeclOpt: cannot push prefix to seq");
    if(rasqal_query_declare_prefix(rq, p)) {
      YYERROR_MSG("PrefixDeclOpt: cannot declare prefix");
    }
  }
}
#line 3872 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 690 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* nothing to do, rq->prefixes already initialised */
}
#line 3880 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 698 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.graph_pattern) = NULL;
  if(!sparql->sparql_scda) {
    sparql_syntax_error(rq,
                        "SELECT can only be used with a SPARQL query");
    YYERROR;
  } else {
    (yyval.graph_pattern) = rasqal_new_select_graph_pattern(rq,
                                         (yyvsp[-3].projection), (yyvsp[-2].seq), (yyvsp[-1].graph_pattern), (yyvsp[0].modifier), NULL);
  }
}
#line 3899 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 716 "./sparql_parser.y" /* yacc.c:1646  */
    {
  if((yyvsp[-3].projection) && (yyvsp[-2].graph_pattern) && (yyvsp[-1].modifier)) {
    (yyval.graph_pattern) = rasqal_new_select_graph_pattern(rq,
                                         (yyvsp[-3].projection),
                                         /* data graphs */ NULL,
                                         (yyvsp[-2].graph_pattern),
                                         (yyvsp[-1].modifier),
                                         (yyvsp[0].bindings));
  } else
    (yyval.graph_pattern) = NULL;
}
#line 3915 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 731 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.projection) = (yyvsp[0].projection);
  (yyval.projection)->distinct = 1;
}
#line 3924 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 736 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.projection) = (yyvsp[0].projection);
  (yyval.projection)->distinct = 2;
}
#line 3933 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 741 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.projection) = (yyvsp[0].projection);
}
#line 3941 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 751 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.projection) = rasqal_new_projection(rq, (yyvsp[0].seq), 0, 0);
}
#line 3949 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 755 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.projection) = rasqal_new_projection(rq, NULL, /* wildcard */ 1, 0);
}
#line 3957 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 765 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].variable))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("SelectExpressionListTail 1: sequence push failed");
  }
}
#line 3970 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 774 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-2].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].variable))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("SelectExpressionListTail 2: sequence push failed");
  }
}
#line 3983 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 783 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_variable,
                           (raptor_data_print_handler)rasqal_variable_print);
  if(!(yyval.seq))
    YYERROR_MSG("SelectExpressionListTail 3: failed to create sequence");
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].variable))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("SelectExpressionListTail 3: sequence push failed");
  }
}
#line 3999 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 801 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
}
#line 4007 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 805 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.variable) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "SELECT ( expression ) AS Variable can only be used with SPARQL 1.1");
    YYERROR;
  } else if((yyvsp[-3].expr) && (yyvsp[-1].variable)) {
    if(rasqal_expression_mentions_variable((yyvsp[-3].expr), (yyvsp[-1].variable))) {
      sparql_query_error_full(rq,
                              "Expression in SELECT ( expression ) AS %s contains the variable name '%s'",
                              (yyvsp[-1].variable)->name, (yyvsp[-1].variable)->name);
      YYERROR;
    } else {
      (yyval.variable) = (yyvsp[-1].variable);
      (yyval.variable)->expression = (yyvsp[-3].expr);
    }

  }
}
#line 4034 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 847 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4042 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 851 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4050 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 855 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4058 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 859 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4066 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 863 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4074 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 867 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4082 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 871 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4090 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 878 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "functions with DISTINCT can only be used with SPARQL 1.1");
    YYERROR;
  }
  
  (yyval.uinteger) = RASQAL_EXPR_FLAG_DISTINCT;
}
#line 4107 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 891 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uinteger) = 0;
}
#line 4115 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 898 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4123 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 902 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_0op_expression(rq->world,
                                 RASQAL_EXPR_VARSTAR);
}
#line 4132 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 910 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "COUNT() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    (yyval.expr) = rasqal_new_aggregate_function_expression(rq->world,
                                                  RASQAL_EXPR_COUNT, (yyvsp[-1].expr),
                                                  NULL /* params */, (yyvsp[-2].uinteger));
    if(!(yyval.expr))
      YYERROR_MSG("CountAggregateExpression: cannot create expr");
  }
}
#line 4154 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 931 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "SUM() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    (yyval.expr) = rasqal_new_aggregate_function_expression(rq->world,
                                                  RASQAL_EXPR_SUM, (yyvsp[-1].expr),
                                                  NULL /* params */, (yyvsp[-2].uinteger));
    if(!(yyval.expr))
      YYERROR_MSG("SumAggregateExpression: cannot create expr");
  }
}
#line 4176 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 952 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "AVG() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    (yyval.expr) = rasqal_new_aggregate_function_expression(rq->world,
                                                  RASQAL_EXPR_AVG, (yyvsp[-1].expr),
                                                  NULL /* params */, (yyvsp[-2].uinteger));
    if(!(yyval.expr))
      YYERROR_MSG("AvgAggregateExpression: cannot create expr");
  }
}
#line 4198 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 973 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "MIN() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    (yyval.expr) = rasqal_new_aggregate_function_expression(rq->world,
                                                  RASQAL_EXPR_MIN, (yyvsp[-1].expr),
                                                  NULL /* params */, (yyvsp[-2].uinteger));
    if(!(yyval.expr))
      YYERROR_MSG("MinAggregateExpression: cannot create expr");
  }
}
#line 4220 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 994 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "MAX() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    (yyval.expr) = rasqal_new_aggregate_function_expression(rq->world,
                                                  RASQAL_EXPR_MAX, (yyvsp[-1].expr),
                                                  NULL /* params */, (yyvsp[-2].uinteger));
    if(!(yyval.expr))
      YYERROR_MSG("MaxAggregateExpression: cannot create expr");
  }
}
#line 4242 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1015 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_string_literal(rq->world, (yyvsp[0].name), 
	                         NULL /* language */,
                                 NULL /* dt uri */, NULL /* dt_qname */);
}
#line 4252 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1021 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = NULL;
}
#line 4260 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1031 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-2].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("ExpressionList 1: sequence push failed");
  }
}
#line 4273 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1040 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                           (raptor_data_print_handler)rasqal_expression_print);
  if(!(yyval.seq))
    YYERROR_MSG("ExpressionList 2: failed to create sequence");

  if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("ExpressionList 2: sequence push failed");
  }
}
#line 4290 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1056 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "GROUP_CONCAT() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    int flags = 0;
    
    if((yyvsp[-3].uinteger))
      flags |= RASQAL_EXPR_FLAG_DISTINCT;

    (yyval.expr) = rasqal_new_group_concat_expression(rq->world,
                                            flags /* flags */,
                                            (yyvsp[-2].seq) /* args */,
                                            (yyvsp[-1].literal) /* separator */);
    if(!(yyval.expr))
      YYERROR_MSG("GroupConcatAggregateExpression: cannot create expr");
  }
}
#line 4319 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1084 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "SAMPLE() can only be used with SPARQL 1.1");
    YYERROR;
  } else {
    (yyval.expr) = rasqal_new_aggregate_function_expression(rq->world,
                                                  RASQAL_EXPR_SAMPLE, (yyvsp[-1].expr),
                                                  NULL /* params */, (yyvsp[-2].uinteger));
    if(!(yyval.expr))
      YYERROR_MSG("SampleAggregateExpression: cannot create expr");
  }
}
#line 4341 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1107 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.seq) = NULL;
  if(!sparql->sparql_scda) {
    sparql_syntax_error(rq,
                        "CONSTRUCT can only be used with a SPARQL query");
    YYERROR;
  }
  
  (yyval.seq) = (yyvsp[-3].seq);

  if((yyvsp[-2].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-2].seq));
  rq->query_graph_pattern = (yyvsp[-1].graph_pattern);

  if((yyvsp[0].modifier))
    rq->modifier = (yyvsp[0].modifier);
}
#line 4367 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1129 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_graph_pattern* where_gp;
  raptor_sequence* seq = NULL;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql_scda) {
    sparql_syntax_error(rq,
                        "CONSTRUCT can only be used with a SPARQL query");
    YYERROR;
  }

  if((yyvsp[-2].seq)) {
    int i;
    int size = raptor_sequence_size((yyvsp[-2].seq));
    
    seq = raptor_new_sequence((raptor_data_free_handler)rasqal_free_triple,
                              (raptor_data_print_handler)rasqal_triple_print);
    for(i = 0; i < size; i++) {
      rasqal_triple* t = (rasqal_triple*)raptor_sequence_get_at((yyvsp[-2].seq), i);
      t = rasqal_new_triple_from_triple(t);
      raptor_sequence_push(seq, t);
    }
  }
  
  where_gp = rasqal_new_basic_graph_pattern_from_triples(rq, seq);
  seq = NULL;
  if(!where_gp)
    YYERROR_MSG("ConstructQuery: cannot create graph pattern");

  (yyval.seq) = (yyvsp[-2].seq);

  if((yyvsp[-5].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-5].seq));
  rq->query_graph_pattern = where_gp;

  if((yyvsp[0].modifier))
    rq->modifier = (yyvsp[0].modifier);
}
#line 4412 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1175 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.seq) = NULL;
  if(!sparql->sparql_scda) {
    sparql_syntax_error(rq,
                        "DESCRIBE can only be used with a SPARQL query");
    YYERROR;
  }
  
  (yyval.seq) = (yyvsp[-3].seq);

  if((yyvsp[-2].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-2].seq));

  rq->query_graph_pattern = (yyvsp[-1].graph_pattern);

  if((yyvsp[0].modifier))
    rq->modifier = (yyvsp[0].modifier);
}
#line 4439 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1199 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;

  if((yyvsp[-2].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-2].seq));

  rq->query_graph_pattern = (yyvsp[-1].graph_pattern);

  if((yyvsp[0].modifier))
    rq->modifier = (yyvsp[0].modifier);
}
#line 4455 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1215 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].literal))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("VarOrIRIrefList 1: sequence push failed");
  }
}
#line 4468 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1224 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-2].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].literal))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("VarOrIRIrefList 2: sequence push failed");
  }
}
#line 4481 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1233 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_literal,
                           (raptor_data_print_handler)rasqal_literal_print);
  if(!(yyval.seq))
    YYERROR_MSG("VarOrIRIrefList 3: cannot create seq");
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].literal))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("VarOrIRIrefList 3: sequence push failed");
  }
}
#line 4497 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1250 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql_scda) {
    sparql_syntax_error(rq,
                        "ASK can only be used with a SPARQL query");
    YYERROR;
  }
  
  if((yyvsp[-1].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-1].seq));

  rq->query_graph_pattern = (yyvsp[0].graph_pattern);
}
#line 4517 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1270 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.data_graph) = (yyvsp[0].data_graph);
}
#line 4525 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1274 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.data_graph) = (yyvsp[0].data_graph);
}
#line 4533 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1282 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri) = (yyvsp[0].uri);
}
#line 4541 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1290 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "DELETE can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }
  
  /* LAQRS: experimental syntax */
  sparql_syntax_warning(rq,
                        "DELETE FROM <uri> ... WHERE ... is deprecated LAQRS syntax.");

  if((yyvsp[-1].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-1].seq));

  rq->query_graph_pattern = (yyvsp[0].graph_pattern);
}
#line 4565 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1310 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "DELETE can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  /* SPARQL 1.1 (Draft) update:
   * deleting via template + query - not inline atomic triples 
   */

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UPDATE,
                                       NULL /* graph_uri */,
                                       NULL /* document_uri */,
                                       NULL /* insert templates */,
                                       (yyvsp[-2].seq) /* delete templates */,
                                       (yyvsp[0].graph_pattern) /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("DeleteQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("DeleteQuery: rasqal_query_add_update_operation failed");
  }
}
#line 4601 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1342 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "DELETE can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }
  
  /* SPARQL 1.1 (Draft) update:
   * deleting inline triples - not inserting from graph URIs 
   */
  (yyvsp[-1].update)->type = RASQAL_UPDATE_TYPE_UPDATE;
  (yyvsp[-1].update)->delete_templates = (yyvsp[-1].update)->insert_templates; (yyvsp[-1].update)->insert_templates = NULL;
  (yyvsp[-1].update)->flags |= RASQAL_UPDATE_FLAGS_DATA;
  
  rasqal_query_add_update_operation(rq, (yyvsp[-1].update));
}
#line 4625 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1362 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;
  raptor_sequence* delete_templates = NULL;
  
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "DELETE WHERE { } can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  /* SPARQL 1.1 (Draft) update:
   * deleting via template - not inline atomic triples 
   */

  /* Turn GP into flattened triples */
  if((yyvsp[0].graph_pattern)) {
    delete_templates = rasqal_graph_pattern_get_flattened_triples(rq, (yyvsp[0].graph_pattern));
    rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
    (yyvsp[0].graph_pattern) = NULL;
  }

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UPDATE,
                                       NULL /* graph_uri */,
                                       NULL /* document_uri */,
                                       NULL /* insert templates */,
                                       delete_templates /* delete templates */,
                                       NULL /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("DeleteQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("DeleteQuery: rasqal_query_add_update_operation failed");
  }
}
#line 4669 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1406 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.update) = NULL;
 
  if((yyvsp[0].formula)) {
    (yyval.update) = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UNKNOWN,
                                     NULL /* graph_uri */,
                                     NULL /* document_uri */,
                                     (yyvsp[0].formula)->triples /* insert templates */, 
                                     NULL /* delete templates */,
                                     NULL /* where */,
                                     0 /* flags */,
                                     RASQAL_UPDATE_GRAPH_ONE /* applies */);
    (yyvsp[0].formula)->triples = NULL;
    rasqal_free_formula((yyvsp[0].formula));
  }
}
#line 4690 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1423 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.update) = NULL;

  if((yyvsp[-1].formula)) {
    raptor_sequence* seq;
    seq = (yyvsp[-1].formula)->triples;

    if((yyvsp[-3].uri)) {
      rasqal_literal* origin_literal;
      
      origin_literal = rasqal_new_uri_literal(rq->world, (yyvsp[-3].uri));
      (yyvsp[-3].uri) = NULL;

      rasqal_triples_sequence_set_origin(/* dest */ NULL, seq, origin_literal);
      rasqal_free_literal(origin_literal);
    }
    (yyval.update) = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UNKNOWN,
                                     NULL /* graph uri */,
                                     NULL /* document uri */,
                                     seq /* insert templates */,
                                     NULL /* delete templates */,
                                     NULL /* where */,
                                     0 /* flags */,
                                     RASQAL_UPDATE_GRAPH_ONE /* applies */);
    (yyvsp[-1].formula)->triples = NULL;
    rasqal_free_formula((yyvsp[-1].formula));
  }
}
#line 4723 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1456 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);

  if((yyvsp[-3].literal)) {
    rasqal_triples_sequence_set_origin(NULL, (yyval.seq), (yyvsp[-3].literal));
    rasqal_free_literal((yyvsp[-3].literal));
    (yyvsp[-3].literal) = NULL;
  }
}
#line 4737 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1471 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 4745 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1475 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 4753 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1483 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);

  if((yyvsp[0].seq)) {
    if(raptor_sequence_join((yyval.seq), (yyvsp[0].seq))) {
      raptor_free_sequence((yyvsp[0].seq));
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("ModifyTemplateList: sequence join failed");
    }
    raptor_free_sequence((yyvsp[0].seq));
  }

}
#line 4772 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1498 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 4780 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1507 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql  = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "INSERT can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  /* LAQRS: experimental syntax */
  sparql_syntax_warning(rq,
                        "INSERT FROM <uri> ... WHERE ... is deprecated LAQRS syntax.");

  if((yyvsp[-1].seq))
    rasqal_query_add_data_graphs(rq, (yyvsp[-1].seq));

  rq->query_graph_pattern = (yyvsp[0].graph_pattern);
}
#line 4804 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1527 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "INSERT can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }
  
  /* inserting via template + query - not inline atomic triples */

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UPDATE,
                                       NULL /* graph_uri */,
                                       NULL /* document_uri */,
                                       (yyvsp[-2].seq) /* insert templates */,
                                       NULL /* delete templates */,
                                       (yyvsp[0].graph_pattern) /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("InsertQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("InsertQuery: rasqal_query_add_update_operation failed");
  }
}
#line 4838 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1557 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "INSERT DATA can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }
  
  /* inserting inline atomic triples (no variables) - not via template */
  (yyvsp[-1].update)->type = RASQAL_UPDATE_TYPE_UPDATE;
  (yyvsp[-1].update)->flags |= RASQAL_UPDATE_FLAGS_DATA;

  rasqal_query_add_update_operation(rq, (yyvsp[-1].update));
}
#line 4859 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1580 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "WITH can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }
  
  if((yyvsp[-9].uri)) {
    rasqal_literal* origin_literal;

    origin_literal = rasqal_new_uri_literal(rq->world, (yyvsp[-9].uri));
    (yyvsp[-9].uri) = NULL;

    rasqal_triples_sequence_set_origin(/* dest */ NULL, (yyvsp[-2].seq), origin_literal);
    rasqal_triples_sequence_set_origin(/* dest */ NULL, (yyvsp[-6].seq), origin_literal);

    rasqal_free_literal(origin_literal);
  }

  /* after this $5, $9 and $12 are owned by update */
  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UPDATE,
                                       NULL /* graph uri */, 
                                       NULL /* document uri */,
                                       (yyvsp[-2].seq) /* insert templates */,
                                       (yyvsp[-6].seq) /* delete templates */,
                                       (yyvsp[0].graph_pattern) /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("UpdateQuery 1: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("UpdateQuery 1: rasqal_query_add_update_operation failed");
  }
}
#line 4904 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1623 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "WITH can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }
  
  if((yyvsp[-5].uri)) {
    rasqal_literal* origin_literal;
    
    origin_literal = rasqal_new_uri_literal(rq->world, (yyvsp[-5].uri));
    (yyvsp[-5].uri) = NULL;

    rasqal_triples_sequence_set_origin(/* dest */ NULL, (yyvsp[-2].seq), origin_literal);

    rasqal_free_literal(origin_literal);
  }
  
  /* after this $5 and $7 are owned by update */
  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UPDATE,
                                       NULL /* graph uri */, 
                                       NULL /* document uri */,
                                       NULL /* insert templates */,
                                       (yyvsp[-2].seq) /* delete templates */,
                                       (yyvsp[0].graph_pattern) /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("UpdateQuery 2: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("UpdateQuery 2: rasqal_query_add_update_operation failed");
  }
}
#line 4948 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1665 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "WITH can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  if((yyvsp[-5].uri)) {
    rasqal_literal* origin_literal;
    
    origin_literal = rasqal_new_uri_literal(rq->world, (yyvsp[-5].uri));
    (yyvsp[-5].uri) = NULL;

    rasqal_triples_sequence_set_origin(/* dest */ NULL, (yyvsp[-2].seq), origin_literal);

    rasqal_free_literal(origin_literal);
  }

  /* after this $5 and $7 are owned by update */
  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_UPDATE,
                                       NULL /* graph uri */, 
                                       NULL /* document uri */,
                                       (yyvsp[-2].seq) /* insert templates */,
                                       NULL /* delete templates */,
                                       (yyvsp[0].graph_pattern) /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("UpdateQuery 3: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("UpdateQuery 3: rasqal_query_add_update_operation failed");
  }
}
#line 4992 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1706 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "WITH can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  /* inserting inline atomic triples (no variables) - not via template */
  (yyvsp[-1].update)->graph_uri = (yyvsp[-5].uri); /* graph uri */
  (yyvsp[-1].update)->type = RASQAL_UPDATE_TYPE_UPDATE;
  (yyvsp[-1].update)->flags |= RASQAL_UPDATE_FLAGS_DATA;

  rasqal_query_add_update_operation(rq, (yyvsp[-1].update));
}
#line 5015 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1729 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri_applies) = new_uri_applies((yyvsp[0].uri), RASQAL_UPDATE_GRAPH_ONE);
}
#line 5023 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1733 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri_applies) = new_uri_applies(NULL, RASQAL_UPDATE_GRAPH_DEFAULT);
}
#line 5031 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1737 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri_applies) = new_uri_applies(NULL, RASQAL_UPDATE_GRAPH_NAMED);
}
#line 5039 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1741 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri_applies) = new_uri_applies(NULL, RASQAL_UPDATE_GRAPH_ALL);
}
#line 5047 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1745 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* Early draft syntax - deprecated */
  sparql_syntax_warning(rq,
                        "CLEAR GRAPH DEFAULT is replaced by CLEAR DEFAULT in later SPARQL 1.1 drafts");


  (yyval.uri_applies) = new_uri_applies(NULL, RASQAL_UPDATE_GRAPH_DEFAULT);
}
#line 5060 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1758 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "CLEAR (SILENT) DEFAULT | NAMED | ALL can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  if((yyvsp[0].uri_applies)) {
    update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_CLEAR,
                                         (yyvsp[0].uri_applies)->uri ? raptor_uri_copy((yyvsp[0].uri_applies)->uri) : NULL /* graph uri or NULL */,
                                         NULL /* document uri */,
                                         NULL, NULL,
                                         NULL /*where */,
                                         (yyvsp[-1].integer) /* flags */,
                                         (yyvsp[0].uri_applies)->applies /* applies */);
    free_uri_applies((yyvsp[0].uri_applies));
    (yyvsp[0].uri_applies) = NULL;

    if(!update) {
      YYERROR_MSG("ClearQuery: rasqal_new_update_operation failed");
    } else {
      if(rasqal_query_add_update_operation(rq, update))
        YYERROR_MSG("ClearQuery: rasqal_query_add_update_operation failed");
    }
  }
}
#line 5096 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1790 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "CLEAR can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  /* Early draft syntax - deprecated */
  sparql_syntax_warning(rq,
                        "CLEAR is replaced by CLEAR DEFAULT in later SPARQL 1.1 drafts");

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_CLEAR,
                                       NULL /* graph uri */, 
                                       NULL /* document uri */,
                                       NULL, NULL,
                                       NULL /* where */,
                                       0 /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("ClearQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("ClearQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5131 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1825 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.integer) = RASQAL_UPDATE_FLAGS_SILENT;
}
#line 5139 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1829 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.integer) = 0;
}
#line 5147 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1837 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "CREATE (SILENT) <uri> can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_CREATE,
                                       (yyvsp[0].uri) /* graph uri */, 
                                       NULL /* document uri */,
                                       NULL, NULL,
                                       NULL /*where */,
                                       (yyvsp[-1].integer) /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("CreateQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("CreateQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5178 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1864 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "CREATE (SILENT) GRAPH <uri> can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  /* Early draft syntax - deprecated */
  sparql_syntax_warning(rq,
                        "CREATE (SILENT) GRAPH <uri> is replaced by CREATE (SILENT) <uri> in later SPARQL 1.1 drafts");

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_CREATE,
                                       (yyvsp[0].uri) /* graph uri */, 
                                       NULL /* document uri */,
                                       NULL, NULL,
                                       NULL /*where */,
                                       RASQAL_UPDATE_FLAGS_SILENT /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("CreateQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("CreateQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5213 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1899 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;
  
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "DROP (SILENT) DEFAULT | NAMED | ALL can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  if((yyvsp[0].uri_applies)) {
    update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_DROP,
                                         (yyvsp[0].uri_applies)->uri ? raptor_uri_copy((yyvsp[0].uri_applies)->uri) : NULL /* graph uri or NULL */,
                                         NULL /* document uri */,
                                         NULL, NULL,
                                         NULL /*where */,
                                         (yyvsp[-1].integer) /* flags */,
                                         (yyvsp[0].uri_applies)->applies /* applies */);
    free_uri_applies((yyvsp[0].uri_applies));
    (yyvsp[0].uri_applies) = NULL;

    if(!update) {
      YYERROR_MSG("DropQuery: rasqal_new_update_operation failed");
    } else {
      if(rasqal_query_add_update_operation(rq, update))
        YYERROR_MSG("DropQuery: rasqal_query_add_update_operation failed");
    }
  }
}
#line 5249 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1935 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].uri))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("IriRefList 1: sequence push failed");
  }
}
#line 5262 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1944 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)raptor_free_uri,
                           (raptor_data_print_handler)raptor_uri_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].uri))
      raptor_free_uri((yyvsp[0].uri));
    YYERROR_MSG("IriRefList 2: cannot create sequence");
  }
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].uri))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("IriRefList 2: sequence push failed");
  }
}
#line 5281 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1963 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri) = NULL;
}
#line 5289 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1967 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri) = (yyvsp[0].uri);
}
#line 5297 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1974 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.uri) = (yyvsp[0].uri);
}
#line 5305 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1978 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* Early draft syntax allowed a list of URIs - deprecated */
  sparql_syntax_warning(rq,
                        "LOAD <document uri list> INTO <graph uri> is replaced by LOAD <document uri> INTO GRAPH <graph uri> in later SPARQL 1.1 drafts");

  (yyval.uri) = (yyvsp[0].uri);
}
#line 5317 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1986 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* Early draft syntax allowed a list of URIs - deprecated */
  sparql_syntax_warning(rq,
                        "LOAD <document uri list> INTO DEFAULT is replaced by LOAD <document uri> in later SPARQL 1.1 drafts");

  (yyval.uri) = NULL;
}
#line 5329 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1998 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;
  
  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "LOAD <uri> can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_LOAD,
                                       NULL /* graph uri */, 
                                       (yyvsp[0].uri) /* document uri */,
                                       NULL, NULL,
                                       NULL /* where */,
                                       (yyvsp[-1].integer) /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("LoadQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("LoadQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5360 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 2025 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  int i;
  raptor_uri* doc_uri;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "LOAD <document uri> INTO GRAPH <graph URI> / DEFAULT can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  for(i = 0; (doc_uri = (raptor_uri*)raptor_sequence_get_at((yyvsp[-2].seq), i)); i++) {
    rasqal_update_operation* update;
    update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_LOAD,
                                         (yyvsp[0].uri) ? raptor_uri_copy((yyvsp[0].uri)) : NULL /* graph uri */,
                                         raptor_uri_copy(doc_uri) /* document uri */,
                                         NULL, NULL,
                                         NULL /*where */,
                                         (yyvsp[-3].integer) /* flags */,
                                         RASQAL_UPDATE_GRAPH_ONE /* applies */);
    if(!update) {
      YYERROR_MSG("LoadQuery: rasqal_new_update_operation failed");
    } else {
      if(rasqal_query_add_update_operation(rq, update))
        YYERROR_MSG("LoadQuery: rasqal_query_add_update_operation failed");
    }

    if(i == 1)
      /* Early draft syntax allowed a list of URIs - deprecated */
      sparql_syntax_warning(rq,
                            "LOAD <document uri list> INTO <graph uri> / DEFAULT is replaced by LOAD <document uri> INTO GRAPH <graph uri> or LOAD <document uri> in later SPARQL 1.1 drafts");
    

  }

  raptor_free_sequence((yyvsp[-2].seq));
  if((yyvsp[0].uri))
    raptor_free_uri((yyvsp[0].uri));
}
#line 5406 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 2071 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "ADD (SILENT) <uri> TO <uri> can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_ADD,
                                       (yyvsp[-2].uri) /* graph uri or NULL */, 
                                       (yyvsp[0].uri) /* document uri */,
                                       NULL, NULL,
                                       NULL /*where */,
                                       (yyvsp[-3].integer) /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("AddQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("AddQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5437 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 2102 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "MOVE (SILENT) <uri> TO <uri> can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_MOVE,
                                       (yyvsp[-2].uri) /* graph uri or NULL */, 
                                       (yyvsp[0].uri) /* document uri */,
                                       NULL, NULL,
                                       NULL /*where */,
                                       (yyvsp[-3].integer) /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("MoveQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("MoveQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5468 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 2133 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  rasqal_update_operation* update;

  sparql = (rasqal_sparql_query_language*)(rq->context);

  if(!sparql->sparql11_update) {
    sparql_syntax_error(rq,
                        "COPY (SILENT) <uri> TO <uri> can only be used with a SPARQL 1.1 Update");
    YYERROR;
  }

  update = rasqal_new_update_operation(RASQAL_UPDATE_TYPE_COPY,
                                       (yyvsp[-2].uri) /* graph uri or NULL */, 
                                       (yyvsp[0].uri) /* document uri */,
                                       NULL, NULL,
                                       NULL /*where */,
                                       (yyvsp[-3].integer) /* flags */,
                                       RASQAL_UPDATE_GRAPH_ONE /* applies */);
  if(!update) {
    YYERROR_MSG("CopyQuery: rasqal_new_update_operation failed");
  } else {
    if(rasqal_query_add_update_operation(rq, update))
      YYERROR_MSG("CopyQuery: rasqal_query_add_update_operation failed");
  }
}
#line 5499 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2164 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if((yyvsp[-1].seq) && (yyvsp[0].data_graph))
    raptor_sequence_push((yyvsp[-1].seq), (yyvsp[0].data_graph));
}
#line 5509 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2170 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_data_graph, (raptor_data_print_handler)rasqal_data_graph_print);
  if((yyval.seq) && (yyvsp[0].data_graph))
    raptor_sequence_push((yyval.seq), (yyvsp[0].data_graph));
}
#line 5519 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2179 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 5527 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2183 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 5535 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2191 "./sparql_parser.y" /* yacc.c:1646  */
    {
  if((yyvsp[0].literal)) {
    raptor_uri* uri = rasqal_literal_as_uri((yyvsp[0].literal));
    rasqal_data_graph* dg;

    dg = rasqal_new_data_graph_from_uri(rq->world, uri,
                                        NULL, RASQAL_DATA_GRAPH_BACKGROUND,
                                        NULL, NULL, NULL);

    if(!dg) {
      rasqal_free_literal((yyvsp[0].literal));
      YYERROR_MSG("DefaultGraphClause: rasqal_query_new_data_graph_from_uri() failed");
    }
    rasqal_free_literal((yyvsp[0].literal));

    (yyval.data_graph) = dg;
  } else
    (yyval.data_graph) = NULL;
}
#line 5559 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2215 "./sparql_parser.y" /* yacc.c:1646  */
    {
  if((yyvsp[0].literal)) {
    raptor_uri* uri = rasqal_literal_as_uri((yyvsp[0].literal));
    rasqal_data_graph* dg;

    dg = rasqal_new_data_graph_from_uri(rq->world, uri,
                                        uri, RASQAL_DATA_GRAPH_NAMED,
                                        NULL, NULL, NULL);
    
    if(!dg) {
      rasqal_free_literal((yyvsp[0].literal));
      YYERROR_MSG("NamedGraphClause: rasqal_query_new_data_graph_from_uri() failed");
    }
    rasqal_free_literal((yyvsp[0].literal));
    (yyval.data_graph) = dg;
  } else
    (yyval.data_graph) = NULL;
}
#line 5582 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2238 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 5590 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2246 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 5598 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2250 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 5606 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2258 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 5614 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2262 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = NULL;
}
#line 5622 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2270 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.modifier) = rasqal_new_solution_modifier(rq,
                                    /* order_conditions */ (yyvsp[-1].seq),
                                    /* group_conditions */ (yyvsp[-3].seq),
                                    /* having_conditions */ (yyvsp[-2].seq),
                                    /* limit */ (yyvsp[0].limit_offset)[0],
                                    /* offset */ (yyvsp[0].limit_offset)[1]);
  
}
#line 5636 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2284 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("GroupConditionList 1: sequence push failed");
    }
}
#line 5650 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2294 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                           (raptor_data_print_handler)rasqal_expression_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].expr))
      rasqal_free_expression((yyvsp[0].expr));
    YYERROR_MSG("GroupConditionList 2: cannot create sequence");
  }
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("GroupConditionList 2: sequence push failed");
    }
}
#line 5670 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2314 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
}
#line 5678 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2318 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = NULL;
}
#line 5686 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2326 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 5694 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2330 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 5702 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2334 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_literal* l;

  (yyval.expr) = (yyvsp[-2].expr);
  if((yyvsp[-1].variable)) {
    if(rasqal_expression_mentions_variable((yyval.expr), (yyvsp[-1].variable))) {
      sparql_query_error_full(rq,
                              "Expression in GROUP BY ( expression ) AS %s contains the variable name '%s'",
                              (yyvsp[-1].variable)->name, (yyvsp[-1].variable)->name);
    } else {
      /* Expression AS Variable */
      (yyvsp[-1].variable)->expression = (yyval.expr);
      (yyval.expr) = NULL;
      
      l = rasqal_new_variable_literal(rq->world, (yyvsp[-1].variable));
      if(!l)
        YYERROR_MSG("GroupCondition 4: cannot create variable literal");
      (yyvsp[-1].variable) = NULL;

      (yyval.expr) = rasqal_new_literal_expression(rq->world, l);
      if(!(yyval.expr))
        YYERROR_MSG("GroupCondition 4: cannot create variable literal expression");
    }
  }
  
}
#line 5733 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2361 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_literal* l;
  l = rasqal_new_variable_literal(rq->world, (yyvsp[0].variable));
  if(!l)
    YYERROR_MSG("GroupCondition 5: cannot create lit");
  (yyval.expr) = rasqal_new_literal_expression(rq->world, l);
  if(!(yyval.expr))
    YYERROR_MSG("GroupCondition 5: cannot create lit expr");
}
#line 5747 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2375 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.seq) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "GROUP BY can only be used with SPARQL 1.1");
    YYERROR;
  } else
    (yyval.seq) = (yyvsp[0].seq);
}
#line 5764 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2388 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 5772 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2396 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 5780 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2403 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("HavingConditionList 1: sequence push failed");
    }
}
#line 5794 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2413 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                           (raptor_data_print_handler)rasqal_expression_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].expr))
      rasqal_free_expression((yyvsp[0].expr));
    YYERROR_MSG("HavingConditionList 2: cannot create sequence");
  }
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("HavingConditionList 2: sequence push failed");
    }
}
#line 5814 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2433 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.seq) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "HAVING can only be used with SPARQL 1.1");
    YYERROR;
  } else 
    (yyval.seq) = (yyvsp[0].seq);
}
#line 5831 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2446 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 5839 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2454 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.limit_offset)[0] = (yyvsp[-1].integer);
  (yyval.limit_offset)[1] = (yyvsp[0].integer);
}
#line 5848 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2459 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.limit_offset)[0] = (yyvsp[0].integer);
  (yyval.limit_offset)[1] = (yyvsp[-1].integer);
}
#line 5857 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2464 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.limit_offset)[0] = (yyvsp[0].integer);
  (yyval.limit_offset)[1] = -1;
}
#line 5866 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2469 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.limit_offset)[0] = -1;
  (yyval.limit_offset)[1] = (yyvsp[0].integer);
}
#line 5875 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2474 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.limit_offset)[0] = -1;
  (yyval.limit_offset)[1] = -1;
}
#line 5884 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2483 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 5892 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2487 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 5900 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2495 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("OrderConditionList 1: sequence push failed");
    }
}
#line 5914 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2505 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                           (raptor_data_print_handler)rasqal_expression_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].expr))
      rasqal_free_expression((yyvsp[0].expr));
    YYERROR_MSG("OrderConditionList 2: cannot create sequence");
  }
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("OrderConditionList 2: sequence push failed");
    }
}
#line 5934 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2525 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ORDER_COND_ASC, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("OrderCondition 1: cannot create expr");
}
#line 5945 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2532 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ORDER_COND_DESC, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("OrderCondition 2: cannot create expr");
}
#line 5956 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2539 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* The direction of ordering is ascending by default */
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ORDER_COND_ASC, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("OrderCondition 3: cannot create expr");
}
#line 5968 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2547 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_literal* l;
  rasqal_expression *e;
  l = rasqal_new_variable_literal(rq->world, (yyvsp[0].variable));
  if(!l)
    YYERROR_MSG("OrderCondition 4: cannot create lit");
  e = rasqal_new_literal_expression(rq->world, l);
  if(!e)
    YYERROR_MSG("OrderCondition 4: cannot create lit expr");

  /* The direction of ordering is ascending by default */
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ORDER_COND_ASC, e);
  if(!(yyval.expr))
    YYERROR_MSG("OrderCondition 1: cannot create expr");
}
#line 5989 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2564 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* The direction of ordering is ascending by default */
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ORDER_COND_ASC, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("OrderCondition 5: cannot create expr");
}
#line 6001 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2572 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* The direction of ordering is ascending by default */
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ORDER_COND_ASC, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("OrderCondition 6: cannot create expr");
}
#line 6013 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2584 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.integer) = -1;

  if((yyvsp[0].literal) != NULL) {
    (yyval.integer) = (yyvsp[0].literal)->value.integer;
    rasqal_free_literal((yyvsp[0].literal));
  }
  
}
#line 6027 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2598 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.integer) = -1;

  if((yyvsp[0].literal) != NULL) {
    (yyval.integer) = (yyvsp[0].literal)->value.integer;
    rasqal_free_literal((yyvsp[0].literal));
  }
}
#line 6040 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2611 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.bindings) = (yyvsp[0].bindings);
}
#line 6048 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2615 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.bindings) = NULL;
}
#line 6056 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2623 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 6064 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2627 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 6072 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2634 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].variable))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("VarList 1: sequence push failed");
  }
}
#line 6085 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2643 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_variable,
                           (raptor_data_print_handler)rasqal_variable_print);
  if(!(yyval.seq))
    YYERROR_MSG("VarList 2: cannot create seq");

  if(raptor_sequence_push((yyval.seq), (yyvsp[0].variable))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("VarList 3: sequence push failed");
  }
}
#line 6102 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2662 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 6110 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2666 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 6118 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2676 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].row))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("DataBlockRowList 1: sequence push failed");
  } else {
    int size = raptor_sequence_size((yyval.seq));
    (yyvsp[0].row)->offset = size-1;
  }
}
#line 6134 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2688 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_row,
                           (raptor_data_print_handler)rasqal_row_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].row))
      rasqal_free_row((yyvsp[0].row));

    YYERROR_MSG("DataBlockRowList 2: cannot create sequence");
  }
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].row))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("DataBlockRowList 2: sequence push failed");
  }
}
#line 6154 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2710 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.row) = NULL;
  if((yyvsp[-1].seq)) {
    int size;
    rasqal_row* row;
    int i;
    
    size = raptor_sequence_size((yyvsp[-1].seq));

    row = rasqal_new_row_for_size(rq->world, size);
    if(!row) {
      YYERROR_MSG("DataBlockRow: cannot create row");
    } else {
      for(i = 0; i < size; i++) {
        rasqal_literal* value = (rasqal_literal*)raptor_sequence_get_at((yyvsp[-1].seq), i);
        rasqal_row_set_value_at(row, i, value);
      }
    }
    raptor_free_sequence((yyvsp[-1].seq));
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    RASQAL_DEBUG1("DataBlockRow returned: ");
    rasqal_row_print(row, stderr);
    fputc('\n', stderr);
#endif
    (yyval.row) = row;
  }
}
#line 6186 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2738 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.row) = NULL;
}
#line 6194 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2745 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  RASQAL_DEBUG1("DataBlockValue 1 value: ");
  rasqal_literal_print((yyvsp[0].literal), stderr);
  fputc('\n', stderr);
#endif
  (yyval.seq) = (yyvsp[-1].seq);
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].literal))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("IriRefList 1: sequence push failed");
  }
}
#line 6212 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2759 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  RASQAL_DEBUG1("DataBlockValue 2 value: ");
  rasqal_literal_print((yyvsp[0].literal), stderr);
  fputc('\n', stderr);
#endif
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_literal,
                           (raptor_data_print_handler)rasqal_literal_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].literal))
      rasqal_free_literal((yyvsp[0].literal));
    YYERROR_MSG("IriRefList 2: cannot create sequence");
  }
  if(raptor_sequence_push((yyval.seq), (yyvsp[0].literal))) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
    YYERROR_MSG("IriRefList 2: sequence push failed");
  }
}
#line 6236 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2782 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_string_literal(rq->world, (yyvsp[0].name), 
	                         NULL /* language */,
                                 NULL /* dt uri */, NULL /* dt_qname */);
}
#line 6246 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2788 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_string_literal(rq->world, (yyvsp[-1].name), 
	                         RASQAL_GOOD_CAST(const char*, (yyvsp[0].name)),
                                 NULL /* dt uri */, NULL /* dt_qname */);
}
#line 6256 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2794 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_uri* dt_uri = raptor_uri_copy(rasqal_literal_as_uri((yyvsp[0].literal)));
  (yyval.literal) = rasqal_new_string_literal(rq->world, (yyvsp[-2].name), 
	                         NULL /* language */,
                                 dt_uri, NULL /* dt_qname */);
  rasqal_free_literal((yyvsp[0].literal));
}
#line 6268 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2802 "./sparql_parser.y" /* yacc.c:1646  */
    {
  if((yyvsp[-2].literal)) {
    raptor_uri* dt_uri = raptor_uri_copy(rasqal_literal_as_uri((yyvsp[0].literal)));
    const unsigned char *str = (yyvsp[-2].literal)->string;
    (yyvsp[-2].literal)->string = NULL;

    (yyval.literal) = rasqal_new_string_literal(rq->world, str,
                                   NULL /* language */,
                                   dt_uri, NULL /* dt_qname */);
  }
  rasqal_free_literal((yyvsp[0].literal));
  rasqal_free_literal((yyvsp[-2].literal));
}
#line 6286 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2820 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 6294 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2824 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 6302 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2828 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 6310 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 2832 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 6318 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2836 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = NULL;
}
#line 6326 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2848 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[-1].graph_pattern);
}
#line 6334 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2852 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[-1].graph_pattern);
}
#line 6342 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2863 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_graph_pattern *formula_gp = NULL;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GroupGraphPattern\n  TriplesBlockOpt=");
  if((yyvsp[0].graph_pattern))
    rasqal_formula_print((yyvsp[-1].formula), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, ", GraphpatternListOpt=");
  if((yyvsp[0].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[0].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n", DEBUG_FH);
#endif


  if(!(yyvsp[-1].formula) && !(yyvsp[0].graph_pattern)) {
    (yyval.graph_pattern) = rasqal_new_2_group_graph_pattern(rq, NULL, NULL);
    if(!(yyval.graph_pattern))
      YYERROR_MSG("GroupGraphPattern: cannot create group gp");
  } else {
    if((yyvsp[-1].formula)) {
      formula_gp = rasqal_new_basic_graph_pattern_from_formula(rq,
                                                               (yyvsp[-1].formula));
      if(!formula_gp) {
        if((yyvsp[0].graph_pattern))
          rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
        YYERROR_MSG("GroupGraphPattern: cannot create formula_gp");
      }
    }

    if((yyvsp[0].graph_pattern)) {
      (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
      if(formula_gp && raptor_sequence_shift((yyval.graph_pattern)->graph_patterns, formula_gp)) {
        rasqal_free_graph_pattern((yyval.graph_pattern));
        (yyval.graph_pattern) = NULL;
        YYERROR_MSG("GroupGraphPattern: sequence push failed");
      }
    } else
      (yyval.graph_pattern) = formula_gp;
  }
  
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after graph pattern=");
  if((yyval.graph_pattern))
    rasqal_graph_pattern_print((yyval.graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 6400 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 2921 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "TriplesBlockOpt 1\n  TriplesBlock=");
  if((yyvsp[0].formula))
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n\n", DEBUG_FH);
#endif

  (yyval.formula) = (yyvsp[0].formula);
}
#line 6417 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 2934 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = NULL;
}
#line 6425 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 2947 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphPatternListOpt\n  GraphPatternListOpt=");
  if((yyvsp[-1].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[-1].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, ", GraphPatternList=");
  if((yyvsp[0].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[0].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n", DEBUG_FH);
#endif

  (yyval.graph_pattern) =  ((yyvsp[-1].graph_pattern) ? (yyvsp[-1].graph_pattern) : (yyvsp[0].graph_pattern));
  if((yyvsp[-1].graph_pattern) && (yyvsp[0].graph_pattern)) {
    (yyval.graph_pattern) = (yyvsp[-1].graph_pattern);
    if(rasqal_graph_patterns_join((yyval.graph_pattern), (yyvsp[0].graph_pattern))) {
      rasqal_free_graph_pattern((yyval.graph_pattern));
      rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
      (yyval.graph_pattern) = NULL;
      YYERROR_MSG("GraphPatternListOpt: sequence join failed");
    }
    rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
  }
  
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after grouping graph pattern=");
  if((yyval.graph_pattern))
    rasqal_graph_pattern_print((yyval.graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 6466 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 2984 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6474 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 2988 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = NULL;
}
#line 6482 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 3001 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_graph_pattern *formula_gp = NULL;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphPatternList\n  GraphPatternListFilter=");
  if((yyvsp[-2].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[-2].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, ", TriplesBlockOpt=");
  if((yyvsp[0].formula))
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n", DEBUG_FH);
#endif

  if((yyvsp[0].formula)) {
    formula_gp = rasqal_new_basic_graph_pattern_from_formula(rq,
                                                             (yyvsp[0].formula));
    if(!formula_gp) {
      if((yyvsp[-2].graph_pattern))
        rasqal_free_graph_pattern((yyvsp[-2].graph_pattern));
      YYERROR_MSG("GraphPatternList: cannot create formula_gp");
    }
  }
  (yyval.graph_pattern) = rasqal_new_2_group_graph_pattern(rq, (yyvsp[-2].graph_pattern), formula_gp);
  if(!(yyval.graph_pattern))
    YYERROR_MSG("GraphPatternList: cannot create sequence");

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after graph pattern=");
  if((yyval.graph_pattern))
    rasqal_graph_pattern_print((yyval.graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 6526 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 3049 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphPatternListFilter 1\n  GraphPatternNotTriples=");
  if((yyvsp[0].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[0].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n\n", DEBUG_FH);
#endif

  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6543 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 3062 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphPatternListFilter 2\n  Filter=");
  if((yyvsp[0].expr))
    rasqal_expression_print((yyvsp[0].expr), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n", DEBUG_FH);
#endif

  (yyval.graph_pattern) = rasqal_new_filter_graph_pattern(rq, (yyvsp[0].expr));
  if(!(yyval.graph_pattern))
    YYERROR_MSG("GraphPatternListFilter 2: cannot create graph pattern");

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after graph pattern=");
  if((yyval.graph_pattern))
    rasqal_graph_pattern_print((yyval.graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 6571 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 3096 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "TriplesBlock\n  TriplesSameSubject=");
  if((yyvsp[-2].formula))
    rasqal_formula_print((yyvsp[-2].formula), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, ", TriplesBlockOpt=");
  if((yyvsp[0].formula))
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n", DEBUG_FH);
#endif


  (yyval.formula) =  ((yyvsp[-2].formula) ? (yyvsp[-2].formula) : (yyvsp[0].formula));
  if((yyvsp[-2].formula) && (yyvsp[0].formula)) {
    /* $1 and $3 are freed as necessary */
    (yyval.formula) = rasqal_formula_join((yyvsp[-2].formula), (yyvsp[0].formula));
    if(!(yyvsp[-2].formula))
      YYERROR_MSG("TriplesBlock: formula join failed");
  }

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after joining formula=");
  rasqal_formula_print((yyval.formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 6606 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 3127 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 6614 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 3135 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6622 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 3139 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6630 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 3143 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6638 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 3147 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6646 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 3151 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6654 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 3155 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6662 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 3159 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6670 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 3163 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6678 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 3171 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "PatternElementForms 4\n  graphpattern=");
  if((yyvsp[0].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[0].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n\n", DEBUG_FH);
#endif

  (yyval.graph_pattern) = NULL;

  if((yyvsp[0].graph_pattern)) {
    raptor_sequence *seq;

    seq = raptor_new_sequence((raptor_data_free_handler)rasqal_free_graph_pattern,
                              (raptor_data_print_handler)rasqal_graph_pattern_print);
    if(!seq) {
      rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
      YYERROR_MSG("OptionalGraphPattern 1: cannot create sequence");
    } else {
      if(raptor_sequence_push(seq, (yyvsp[0].graph_pattern))) {
        raptor_free_sequence(seq);
        YYERROR_MSG("OptionalGraphPattern 2: sequence push failed");
      } else {
        (yyval.graph_pattern) = rasqal_new_graph_pattern_from_sequence(rq,
                                                    seq,
                                                    RASQAL_GRAPH_PATTERN_OPERATOR_OPTIONAL);
        if(!(yyval.graph_pattern))
          YYERROR_MSG("OptionalGraphPattern: cannot create graph pattern");
      }
    }
  }
}
#line 6717 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 3210 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphGraphPattern 2\n  varoruri=");
  rasqal_literal_print((yyvsp[-1].literal), DEBUG_FH);
  fprintf(DEBUG_FH, ", graphpattern=");
  if((yyvsp[0].graph_pattern))
    rasqal_graph_pattern_print((yyvsp[0].graph_pattern), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fputs("\n\n", DEBUG_FH);
#endif

  if((yyvsp[0].graph_pattern)) {
    raptor_sequence *seq;

    seq = raptor_new_sequence((raptor_data_free_handler)rasqal_free_graph_pattern,
                              (raptor_data_print_handler)rasqal_graph_pattern_print);
    if(!seq) {
      rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
      YYERROR_MSG("GraphGraphPattern 1: cannot create sequence");
    } else {
      if(raptor_sequence_push(seq, (yyvsp[0].graph_pattern))) {
        raptor_free_sequence(seq);
        YYERROR_MSG("GraphGraphPattern 2: sequence push failed");
      } else {
        (yyval.graph_pattern) = rasqal_new_graph_pattern_from_sequence(rq,
                                                    seq,
                                                    RASQAL_GRAPH_PATTERN_OPERATOR_GRAPH);
        if(!(yyval.graph_pattern))
          YYERROR_MSG("GraphGraphPattern: cannot create graph pattern");
        else
          rasqal_graph_pattern_set_origin((yyval.graph_pattern), (yyvsp[-1].literal));
      }
    }
  }


#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphGraphPattern\n  graphpattern=");
  rasqal_graph_pattern_print((yyval.graph_pattern), DEBUG_FH);
  fputs("\n\n", DEBUG_FH);
#endif

  rasqal_free_literal((yyvsp[-1].literal));
}
#line 6767 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 3260 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = rasqal_new_single_graph_pattern(rq,
                                       RASQAL_GRAPH_PATTERN_OPERATOR_SERVICE,
                                       (yyvsp[0].graph_pattern));
  if((yyval.graph_pattern)) {
    (yyval.graph_pattern)->silent = ((yyvsp[-2].integer) & RASQAL_UPDATE_FLAGS_SILENT) ? 1 : 0;

    (yyval.graph_pattern)->origin = (yyvsp[-1].literal);
    (yyvsp[-1].literal) = NULL;
  } else if((yyvsp[-1].literal))
    rasqal_free_literal((yyvsp[-1].literal));
}
#line 6784 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 3277 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.graph_pattern) = NULL;
  if((yyvsp[-3].expr) && (yyvsp[-1].variable)) {
    if(!sparql->sparql11_query) {
      sparql_syntax_error(rq,
                          "BIND can only be used with SPARQL 1.1");
      YYERROR;
    } else {
      (yyval.graph_pattern) = rasqal_new_let_graph_pattern(rq, (yyvsp[-1].variable), (yyvsp[-3].expr));
    }
  } else
    (yyval.graph_pattern) = NULL;
}
#line 6805 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 3298 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.bindings) = (yyvsp[0].bindings);
}
#line 6813 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 3305 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.bindings) = (yyvsp[0].bindings);
}
#line 6821 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 3309 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.bindings) = (yyvsp[0].bindings);
}
#line 6829 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 3317 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.bindings) = rasqal_new_bindings_from_var_values(rq, (yyvsp[-3].variable), (yyvsp[-1].seq));
}
#line 6837 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 3326 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 6845 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 3330 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 6853 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 3346 "./sparql_parser.y" /* yacc.c:1646  */
    {
  if((yyvsp[-4].seq)) {
    (yyval.bindings) = rasqal_new_bindings(rq, (yyvsp[-4].seq), (yyvsp[-1].seq));
    if(!(yyval.bindings))
      YYERROR_MSG("InlineDataFull: cannot create bindings");
  } else {
    if((yyvsp[-1].seq))
      raptor_free_sequence((yyvsp[-1].seq));

    (yyval.bindings) = NULL;
  }
}
#line 6870 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 3362 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = rasqal_new_values_graph_pattern(rq, (yyvsp[0].bindings));
  if(!(yyval.graph_pattern))
    YYERROR_MSG("InlineDataGraphPattern: cannot create gp");
}
#line 6880 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 3372 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = rasqal_new_single_graph_pattern(rq,
                                       RASQAL_GRAPH_PATTERN_OPERATOR_MINUS,
                                       (yyvsp[0].graph_pattern));
}
#line 6890 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 3382 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
  if(raptor_sequence_shift((yyval.graph_pattern)->graph_patterns, (yyvsp[-2].graph_pattern))) {
    rasqal_free_graph_pattern((yyval.graph_pattern));
    (yyval.graph_pattern) = NULL;
    YYERROR_MSG("GroupOrUnionGraphPattern: sequence push failed");
  }

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "UnionGraphPattern\n  graphpattern=");
  rasqal_graph_pattern_print((yyval.graph_pattern), DEBUG_FH);
  fputs("\n\n", DEBUG_FH);
#endif
}
#line 6909 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 3397 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[0].graph_pattern);
}
#line 6917 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 3404 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.graph_pattern) = (yyvsp[-2].graph_pattern);
  if((yyvsp[0].graph_pattern))
    if(raptor_sequence_push((yyval.graph_pattern)->graph_patterns, (yyvsp[0].graph_pattern))) {
      rasqal_free_graph_pattern((yyval.graph_pattern));
      (yyval.graph_pattern) = NULL;
      YYERROR_MSG("GroupOrUnionGraphPatternList 1: sequence push failed");
    }
}
#line 6931 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 3414 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_sequence *seq;
  seq = raptor_new_sequence((raptor_data_free_handler)rasqal_free_graph_pattern,
                            (raptor_data_print_handler)rasqal_graph_pattern_print);
  if(!seq) {
    if((yyvsp[0].graph_pattern))
      rasqal_free_graph_pattern((yyvsp[0].graph_pattern));
    YYERROR_MSG("GroupOrUnionGraphPatternList 2: cannot create sequence");
  }
  if((yyvsp[0].graph_pattern))
    if(raptor_sequence_push(seq, (yyvsp[0].graph_pattern))) {
      raptor_free_sequence(seq);
      YYERROR_MSG("GroupOrUnionGraphPatternList 2: sequence push failed");
    }
  (yyval.graph_pattern) = rasqal_new_graph_pattern_from_sequence(rq,
                                              seq,
                                              RASQAL_GRAPH_PATTERN_OPERATOR_UNION);
  if(!(yyval.graph_pattern))
    YYERROR_MSG("GroupOrUnionGraphPatternList 1: cannot create gp");
}
#line 6956 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 3439 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.graph_pattern) = NULL;
  if((yyvsp[-3].variable) && (yyvsp[-1].expr)) {
    if(sparql->experimental)
      (yyval.graph_pattern) = rasqal_new_let_graph_pattern(rq, (yyvsp[-3].variable), (yyvsp[-1].expr));
    else {
      sparql_syntax_error(rq,
                          "LET can only be used with LAQRS");
      YYERROR;
    }
  } else
    (yyval.graph_pattern) = NULL;
}
#line 6977 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 3460 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 6985 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 3468 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 6993 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 3472 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 7001 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 3476 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 7009 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 3483 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 7017 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 3487 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
}
#line 7025 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 3495 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_uri* uri = rasqal_literal_as_uri((yyvsp[-5].literal));
  
  if(!(yyvsp[-2].seq)) {
    (yyvsp[-2].seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                             (raptor_data_print_handler)rasqal_expression_print);
    if(!(yyvsp[-2].seq)) {
      rasqal_free_literal((yyvsp[-5].literal));
      YYERROR_MSG("FunctionCall: cannot create sequence");
    }
  }

  uri = raptor_uri_copy(uri);

  if(raptor_sequence_size((yyvsp[-2].seq)) == 1 &&
     rasqal_xsd_is_datatype_uri(rq->world, uri)) {
    rasqal_expression* e = (rasqal_expression*)raptor_sequence_pop((yyvsp[-2].seq));
    (yyval.expr) = rasqal_new_cast_expression(rq->world, uri, e);
    if((yyval.expr))
      (yyval.expr)->flags |= (yyvsp[-3].uinteger);
    raptor_free_sequence((yyvsp[-2].seq));
  } else {
    unsigned int flags = 0;
    if((yyvsp[-3].uinteger))
      flags |= 1;
    
    (yyval.expr) = rasqal_new_function_expression(rq->world, 
                                        uri, (yyvsp[-2].seq), (yyvsp[-1].seq) /* params */,
                                        flags);
    if((yyval.expr))
      (yyval.expr)->flags |= (yyvsp[-3].uinteger);
  }
  rasqal_free_literal((yyvsp[-5].literal));

  if(!(yyval.expr))
    YYERROR_MSG("FunctionCall: cannot create expr");
}
#line 7067 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 3534 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_uri* uri = rasqal_literal_as_uri((yyvsp[-2].literal));
  
  if(!(yyvsp[-1].seq)) {
    (yyvsp[-1].seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                             (raptor_data_print_handler)rasqal_expression_print);
    if(!(yyvsp[-1].seq)) {
      rasqal_free_literal((yyvsp[-2].literal));
      YYERROR_MSG("FunctionCall: cannot create sequence");
    }
  }

  uri = raptor_uri_copy(uri);

  if(raptor_sequence_size((yyvsp[-1].seq)) == 1 &&
     rasqal_xsd_is_datatype_uri(rq->world, uri)) {
    rasqal_expression* e = (rasqal_expression*)raptor_sequence_pop((yyvsp[-1].seq));
    (yyval.expr) = rasqal_new_cast_expression(rq->world, uri, e);
    raptor_free_sequence((yyvsp[-1].seq));
  } else {
    (yyval.expr) = rasqal_new_function_expression(rq->world,
                                        uri, (yyvsp[-1].seq), NULL /* params */,
                                        0 /* flags */);
  }
  rasqal_free_literal((yyvsp[-2].literal));

  if(!(yyval.expr))
    YYERROR_MSG("FunctionCall: cannot create expr");
}
#line 7101 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 3568 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "COALESCE can only be used with SPARQL 1.1");
    YYERROR;
  }
  
  if(!(yyvsp[0].seq)) {
    (yyvsp[0].seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                             (raptor_data_print_handler)rasqal_expression_print);
    if(!(yyvsp[0].seq))
      YYERROR_MSG("FunctionCall: cannot create sequence");
  }

  (yyval.expr) = rasqal_new_expr_seq_expression(rq->world, 
                                      RASQAL_EXPR_COALESCE, (yyvsp[0].seq));
  if(!(yyval.expr))
    YYERROR_MSG("Coalesce: cannot create expr");
}
#line 7129 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 3596 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
}
#line 7137 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 3603 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-2].seq);
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("ArgListNoBraces 1: sequence push failed");
    }
}
#line 7151 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 3613 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                           (raptor_data_print_handler)rasqal_expression_print);
  if(!(yyval.seq)) {
    if((yyvsp[0].expr))
      rasqal_free_expression((yyvsp[0].expr));
    YYERROR_MSG("ArgListNoBraces 2: cannot create sequence");
  }
  if((yyvsp[0].expr))
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].expr))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("ArgListNoBraces 2: sequence push failed");
    }
}
#line 7171 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 3629 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_expression,
                           (raptor_data_print_handler)rasqal_expression_print);
}
#line 7180 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 3638 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[-1].seq);
}
#line 7188 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 3646 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = (yyvsp[0].seq);
}
#line 7196 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 3650 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_triple,
                           (raptor_data_print_handler)rasqal_triple_print);
  if(!(yyval.seq)) {
    YYERROR_MSG("ConstructTriplesOpt: cannot create sequence");
  }
}
#line 7208 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 3662 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
 
  if((yyvsp[-2].formula)) {
    (yyval.seq) = (yyvsp[-2].formula)->triples;
    (yyvsp[-2].formula)->triples = NULL;
    rasqal_free_formula((yyvsp[-2].formula));
  }
  
  if((yyvsp[0].seq)) {
    if(!(yyval.seq)) {
      (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_triple,
                               (raptor_data_print_handler)rasqal_triple_print);
      if(!(yyval.seq)) {
        raptor_free_sequence((yyvsp[0].seq));
        YYERROR_MSG("ConstructTriples: cannot create sequence");
      }
    }

    if(raptor_sequence_join((yyval.seq), (yyvsp[0].seq))) {
      raptor_free_sequence((yyvsp[0].seq));
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("ConstructTriples: sequence join failed");
    }
    raptor_free_sequence((yyvsp[0].seq));
  }

 }
#line 7242 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 3692 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.seq) = NULL;
  
  if((yyvsp[0].formula)) {
    (yyval.seq) = (yyvsp[0].formula)->triples;
    (yyvsp[0].formula)->triples = NULL;
    rasqal_free_formula((yyvsp[0].formula));
  }
  
}
#line 7257 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 3707 "./sparql_parser.y" /* yacc.c:1646  */
    {
  int i;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "TriplesSameSubject 1\n  subject=");
  rasqal_formula_print((yyvsp[-1].formula), DEBUG_FH);
  if((yyvsp[0].formula)) {
    fprintf(DEBUG_FH, "\n  propertyList=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
  } else     
    fprintf(DEBUG_FH, "\n  and empty propertyList\n");
#endif

  if((yyvsp[0].formula)) {
    raptor_sequence *seq = (yyvsp[0].formula)->triples;
    rasqal_literal *subject = (yyvsp[-1].formula)->value;
    int size = raptor_sequence_size(seq);
    
    /* non-empty property list, handle it  */
    for(i = 0; i < size; i++) {
      rasqal_triple* t2 = (rasqal_triple*)raptor_sequence_get_at(seq, i);
      if(t2->subject)
        continue;
      t2->subject = rasqal_new_literal_from_literal(subject);
    }
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "  after substitution propertyList=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
#endif
  }

  (yyval.formula) = rasqal_formula_join((yyvsp[-1].formula), (yyvsp[0].formula));
  if(!(yyval.formula))
    YYERROR_MSG("TriplesSameSubject 1: formula join failed");

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after joining formula=");
  rasqal_formula_print((yyval.formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 7305 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 3751 "./sparql_parser.y" /* yacc.c:1646  */
    {
  int i;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "TriplesSameSubject 2\n  TriplesNode=");
  rasqal_formula_print((yyvsp[-1].formula), DEBUG_FH);
  if((yyvsp[0].formula)) {
    fprintf(DEBUG_FH, "\n  propertyList=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
  } else     
    fprintf(DEBUG_FH, "\n  and empty propertyList\n");
#endif

  if((yyvsp[0].formula)) {
    raptor_sequence *seq = (yyvsp[0].formula)->triples;
    rasqal_literal *subject = (yyvsp[-1].formula)->value;
    int size = raptor_sequence_size(seq);
    
    /* non-empty property list, handle it  */
    for(i = 0; i < size; i++) {
      rasqal_triple* t2 = (rasqal_triple*)raptor_sequence_get_at(seq, i);
      if(t2->subject)
        continue;
      t2->subject = rasqal_new_literal_from_literal(subject);
    }
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "  after substitution propertyList=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
#endif
  }

  (yyval.formula) = rasqal_formula_join((yyvsp[-1].formula), (yyvsp[0].formula));
  if(!(yyval.formula))
    YYERROR_MSG("TriplesSameSubject 2: formula join failed");

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  after joining formula=");
  rasqal_formula_print((yyval.formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 7353 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 3799 "./sparql_parser.y" /* yacc.c:1646  */
    {
  int i;
  
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "PropertyList 1\n  Verb=");
  rasqal_formula_print((yyvsp[-2].formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n  ObjectList=");
  rasqal_formula_print((yyvsp[-1].formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n  PropertyListTail=");
  if((yyvsp[0].formula) != NULL)
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, "\n");
#endif
  
  if((yyvsp[-1].formula) == NULL) {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, " empty ObjectList not processed\n");
#endif
  } else if((yyvsp[-2].formula) && (yyvsp[-1].formula)) {
    raptor_sequence *seq = (yyvsp[-1].formula)->triples;
    rasqal_literal *predicate = (yyvsp[-2].formula)->value;
    rasqal_formula *formula;
    rasqal_triple *t2;
    int size;
    
    formula = rasqal_new_formula(rq->world);
    if(!formula) {
      rasqal_free_formula((yyvsp[-2].formula));
      rasqal_free_formula((yyvsp[-1].formula));
      if((yyvsp[0].formula))
        rasqal_free_formula((yyvsp[0].formula));
      YYERROR_MSG("PropertyList 1: cannot create formula");
    }
    formula->triples = raptor_new_sequence((raptor_data_free_handler)rasqal_free_triple,
                                           (raptor_data_print_handler)rasqal_triple_print);
    if(!formula->triples) {
      rasqal_free_formula(formula);
      rasqal_free_formula((yyvsp[-2].formula));
      rasqal_free_formula((yyvsp[-1].formula));
      if((yyvsp[0].formula))
        rasqal_free_formula((yyvsp[0].formula));
      YYERROR_MSG("PropertyList 1: cannot create sequence");
    }

    /* non-empty property list, handle it  */
    size = raptor_sequence_size(seq);
    for(i = 0; i < size; i++) {
      t2 = (rasqal_triple*)raptor_sequence_get_at(seq, i);
      if(!t2->predicate)
        t2->predicate = (rasqal_literal*)rasqal_new_literal_from_literal(predicate);
    }
  
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "  after substitution ObjectList=");
    raptor_sequence_print(seq, DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
#endif

    while(raptor_sequence_size(seq)) {
      t2 = (rasqal_triple*)raptor_sequence_unshift(seq);
      if(raptor_sequence_push(formula->triples, t2)) {
        rasqal_free_formula(formula);
        rasqal_free_formula((yyvsp[-2].formula));
        rasqal_free_formula((yyvsp[-1].formula));
        if((yyvsp[0].formula))
          rasqal_free_formula((yyvsp[0].formula));
        YYERROR_MSG("PropertyList 1: sequence push failed");
      }
    }

    (yyvsp[0].formula) = rasqal_formula_join(formula, (yyvsp[0].formula));
    if(!(yyvsp[0].formula)) {
      rasqal_free_formula((yyvsp[-2].formula));
      rasqal_free_formula((yyvsp[-1].formula));
      YYERROR_MSG("PropertyList 1: formula join failed");
    }

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "  after appending ObjectList=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n\n");
#endif

    rasqal_free_formula((yyvsp[-1].formula));
  }

  if((yyvsp[-2].formula))
    rasqal_free_formula((yyvsp[-2].formula));

  (yyval.formula) = (yyvsp[0].formula);
}
#line 7451 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 3897 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7459 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 3901 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = NULL;
}
#line 7467 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 3909 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7475 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 3913 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = NULL;
}
#line 7483 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 3921 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_formula *formula;
  rasqal_triple *triple;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "ObjectList 1\n");
  fprintf(DEBUG_FH, "  Object=\n");
  rasqal_formula_print((yyvsp[-1].formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n");
  if((yyvsp[0].formula)) {
    fprintf(DEBUG_FH, "  ObjectTail=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
  } else
    fprintf(DEBUG_FH, "  and empty ObjectTail\n");
#endif

  formula = rasqal_new_formula(rq->world);
  if(!formula) {
    rasqal_free_formula((yyvsp[-1].formula));
    if((yyvsp[0].formula))
      rasqal_free_formula((yyvsp[0].formula));
    YYERROR_MSG("ObjectList: cannot create formula");
  }
  
  formula->triples = raptor_new_sequence((raptor_data_free_handler)rasqal_free_triple,
                                         (raptor_data_print_handler)rasqal_triple_print);
  if(!formula->triples) {
    rasqal_free_formula(formula);
    rasqal_free_formula((yyvsp[-1].formula));
    if((yyvsp[0].formula))
      rasqal_free_formula((yyvsp[0].formula));
    YYERROR_MSG("ObjectList: cannot create sequence");
  }

  triple = rasqal_new_triple(NULL, NULL, (yyvsp[-1].formula)->value);
  (yyvsp[-1].formula)->value = NULL; /* value now owned by triple */
  if(!triple) {
    rasqal_free_formula(formula);
    rasqal_free_formula((yyvsp[-1].formula));
    if((yyvsp[0].formula))
      rasqal_free_formula((yyvsp[0].formula));
    YYERROR_MSG("ObjectList: cannot create triple");
  }

  if(raptor_sequence_push(formula->triples, triple)) {
    rasqal_free_formula(formula);
    rasqal_free_formula((yyvsp[-1].formula));
    if((yyvsp[0].formula))
      rasqal_free_formula((yyvsp[0].formula));
    YYERROR_MSG("ObjectList: sequence push failed");
  }

  (yyval.formula) = rasqal_formula_join(formula, (yyvsp[-1].formula));
  if(!(yyval.formula)) {
    if((yyvsp[0].formula))
      rasqal_free_formula((yyvsp[0].formula));
    YYERROR_MSG("ObjectList: formula join $1 failed");
  }

  (yyval.formula) = rasqal_formula_join((yyval.formula), (yyvsp[0].formula));
  if(!(yyval.formula))
    YYERROR_MSG("ObjectList: formula join $2 failed");

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  objectList is now ");
  if((yyval.formula))
    raptor_sequence_print((yyval.formula)->triples, DEBUG_FH);
  else
    fputs("NULL", DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 7561 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3999 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7569 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 4003 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = NULL;
}
#line 7577 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 4011 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7585 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 4019 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = rasqal_new_formula(rq->world);
  if(!(yyval.formula)) {
    if((yyvsp[0].literal))
      rasqal_free_literal((yyvsp[0].literal));
    YYERROR_MSG("Verb 1: cannot create formula");
  }
  (yyval.formula)->value = (yyvsp[0].literal);
}
#line 7599 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 4029 "./sparql_parser.y" /* yacc.c:1646  */
    {
  raptor_uri *uri;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "verb Verb=rdf:type (a)\n");
#endif

  uri = raptor_new_uri_for_rdf_concept(rq->world->raptor_world_ptr,
                                       RASQAL_GOOD_CAST(const unsigned char*, "type"));
  if(!uri)
    YYERROR_MSG("Verb 2: uri for rdf concept type failed");
  (yyval.formula) = rasqal_new_formula(rq->world);
  if(!(yyval.formula)) {
    raptor_free_uri(uri);
    YYERROR_MSG("Verb 2: cannot create formula");
  }
  (yyval.formula)->value = rasqal_new_uri_literal(rq->world, uri);
  if(!(yyval.formula)->value) {
    rasqal_free_formula((yyval.formula));
    (yyval.formula) = NULL;
    YYERROR_MSG("Verb 2: cannot create uri literal");
  }
}
#line 7627 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 4057 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7635 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 4061 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7643 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 4069 "./sparql_parser.y" /* yacc.c:1646  */
    {
  int i;
  const unsigned char *id;

  if((yyvsp[-1].formula) == NULL) {
    (yyval.formula) = rasqal_new_formula(rq->world);
    if(!(yyval.formula))
      YYERROR_MSG("BlankNodePropertyList: cannot create formula");
  } else {
    (yyval.formula) = (yyvsp[-1].formula);
    if((yyval.formula)->value) {
      rasqal_free_literal((yyval.formula)->value);
      (yyval.formula)->value = NULL;
    }
  }
  
  id = rasqal_query_generate_bnodeid(rq, NULL);
  if(!id) {
    rasqal_free_formula((yyval.formula));
    (yyval.formula) = NULL;
    YYERROR_MSG("BlankNodeProperyList: cannot create bnodeid");
  }

  (yyval.formula)->value = rasqal_new_simple_literal(rq->world,
                                        RASQAL_LITERAL_BLANK, id);
  if(!(yyval.formula)->value) {
    rasqal_free_formula((yyval.formula));
    (yyval.formula) = NULL;
    YYERROR_MSG("BlankNodePropertyList: cannot create literal");
  }

  if((yyvsp[-1].formula) == NULL) {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "TriplesNode\n  PropertyList=");
    rasqal_formula_print((yyval.formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
#endif
  } else {
    raptor_sequence *seq = (yyvsp[-1].formula)->triples;

    /* non-empty property list, handle it  */
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "TriplesNode\n  PropertyList=");
    raptor_sequence_print(seq, DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
#endif

    for(i = 0; i<raptor_sequence_size(seq); i++) {
      rasqal_triple* t2 = (rasqal_triple*)raptor_sequence_get_at(seq, i);
      if(t2->subject)
        continue;
      
      t2->subject = (rasqal_literal*)rasqal_new_literal_from_literal((yyval.formula)->value);
    }

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1
    fprintf(DEBUG_FH, "  after substitution formula=");
    rasqal_formula_print((yyval.formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n\n");
#endif
  }
}
#line 7710 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 4136 "./sparql_parser.y" /* yacc.c:1646  */
    {
  int i;
  rasqal_literal* first_identifier = NULL;
  rasqal_literal* rest_identifier = NULL;
  rasqal_literal* object = NULL;
  rasqal_literal* blank = NULL;

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1
  char const *errmsg;
  #define YYERR_MSG_GOTO(label,msg) do { errmsg = msg; goto label; } while(0)
#else
  #define YYERR_MSG_GOTO(label,ignore) goto label
#endif

#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "Collection\n  GraphNodeListNotEmpty=");
  raptor_sequence_print((yyvsp[-1].seq), DEBUG_FH);
  fprintf(DEBUG_FH, "\n");
#endif

  (yyval.formula) = rasqal_new_formula(rq->world);
  if(!(yyval.formula))
    YYERR_MSG_GOTO(err_Collection, "Collection: cannot create formula");

  (yyval.formula)->triples = raptor_new_sequence((raptor_data_free_handler)rasqal_free_triple,
                                    (raptor_data_print_handler)rasqal_triple_print);
  if(!(yyval.formula)->triples)
    YYERR_MSG_GOTO(err_Collection, "Collection: cannot create sequence");

  first_identifier = rasqal_new_uri_literal(rq->world,
                                            raptor_uri_copy(rq->world->rdf_first_uri));
  if(!first_identifier)
    YYERR_MSG_GOTO(err_Collection, "Collection: cannot first_identifier");
  
  rest_identifier = rasqal_new_uri_literal(rq->world,
                                           raptor_uri_copy(rq->world->rdf_rest_uri));
  if(!rest_identifier)
    YYERR_MSG_GOTO(err_Collection, "Collection: cannot create rest_identifier");
  
  object = rasqal_new_uri_literal(rq->world,
                                  raptor_uri_copy(rq->world->rdf_nil_uri));
  if(!object)
    YYERR_MSG_GOTO(err_Collection, "Collection: cannot create nil object");

  for(i = raptor_sequence_size((yyvsp[-1].seq))-1; i >= 0; i--) {
    rasqal_formula* f = (rasqal_formula*)raptor_sequence_get_at((yyvsp[-1].seq), i);
    rasqal_triple *t2;
    const unsigned char *blank_id = NULL;

    blank_id = rasqal_query_generate_bnodeid(rq, NULL);
    if(!blank_id)
      YYERR_MSG_GOTO(err_Collection, "Collection: cannot create bnodeid");

    blank = rasqal_new_simple_literal(rq->world, RASQAL_LITERAL_BLANK, blank_id);
    if(!blank)
      YYERR_MSG_GOTO(err_Collection, "Collection: cannot create bnode");

    /* Move existing formula triples */
    if(f->triples)
      if(raptor_sequence_join((yyval.formula)->triples, f->triples))
        YYERR_MSG_GOTO(err_Collection, "Collection: sequence join failed");

    /* add new triples we needed */
    t2 = rasqal_new_triple(rasqal_new_literal_from_literal(blank),
                           rasqal_new_literal_from_literal(first_identifier),
                           rasqal_new_literal_from_literal(f->value));
    if(!t2)
      YYERR_MSG_GOTO(err_Collection, "Collection: cannot create triple");

    if(raptor_sequence_push((yyval.formula)->triples, t2))
      YYERR_MSG_GOTO(err_Collection, "Collection: cannot create triple");

    t2 = rasqal_new_triple(rasqal_new_literal_from_literal(blank),
                           rasqal_new_literal_from_literal(rest_identifier),
                           rasqal_new_literal_from_literal(object));
    if(!t2)
      YYERR_MSG_GOTO(err_Collection, "Collection: cannot create triple 2");

    if(raptor_sequence_push((yyval.formula)->triples, t2))
      YYERR_MSG_GOTO(err_Collection, "Collection: sequence push 2 failed");

    rasqal_free_literal(object);
    object=blank;
    blank = NULL;
  }

  /* free sequence of formulas just processed */
  raptor_free_sequence((yyvsp[-1].seq));
  
  (yyval.formula)->value=object;
  
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1
  fprintf(DEBUG_FH, "  after substitution collection=");
  rasqal_formula_print((yyval.formula), DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif

  rasqal_free_literal(first_identifier);
  rasqal_free_literal(rest_identifier);

  break; /* success */

  err_Collection:
  
  if(blank)
    rasqal_free_literal(blank);
  if(object)
    rasqal_free_literal(object);
  if(rest_identifier)
    rasqal_free_literal(rest_identifier);
  if(first_identifier)
    rasqal_free_literal(first_identifier);
  if((yyvsp[-1].seq))
    raptor_free_sequence((yyvsp[-1].seq));
  if((yyval.formula)) {
    rasqal_free_formula((yyval.formula));
    (yyval.formula) = NULL;
  }
  YYERROR_MSG(errmsg);
}
#line 7835 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 4262 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  char const *errmsg;

  fprintf(DEBUG_FH, "GraphNodeListNotEmpty 1\n");
  if((yyvsp[0].formula)) {
    fprintf(DEBUG_FH, "  GraphNode=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
  } else  
    fprintf(DEBUG_FH, "  and empty GraphNode\n");
  if((yyvsp[-1].seq)) {
    fprintf(DEBUG_FH, "  GraphNodeListNotEmpty=");
    raptor_sequence_print((yyvsp[-1].seq), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
  } else
    fprintf(DEBUG_FH, "  and empty GraphNodeListNotEmpty\n");
#endif

  (yyval.seq) = (yyvsp[-1].seq);
  if(!(yyval.seq)) {
    (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_formula,
                             (raptor_data_print_handler)rasqal_formula_print);
    if(!(yyval.seq))
      YYERR_MSG_GOTO(err_GraphNodeListNotEmpty,
                     "GraphNodeListNotEmpty: cannot create formula");
  }
  
  if((yyvsp[0].formula)) {
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].formula))) {
      YYERR_MSG_GOTO(err_GraphNodeListNotEmpty,
                     "GraphNodeListNotEmpty 1: sequence push failed");
    }
    (yyvsp[0].formula) = NULL;
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
    fprintf(DEBUG_FH, "  itemList is now ");
    raptor_sequence_print((yyval.seq), DEBUG_FH);
    fprintf(DEBUG_FH, "\n\n");
#endif
  }

  break; /* success */

  err_GraphNodeListNotEmpty:
  if((yyvsp[0].formula))
    rasqal_free_formula((yyvsp[0].formula));
  if((yyval.seq)) {
    raptor_free_sequence((yyval.seq));
    (yyval.seq) = NULL;
  }
  YYERROR_MSG(errmsg);
}
#line 7892 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 4315 "./sparql_parser.y" /* yacc.c:1646  */
    {
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "GraphNodeListNotEmpty 2\n");
  if((yyvsp[0].formula)) {
    fprintf(DEBUG_FH, "  GraphNode=");
    rasqal_formula_print((yyvsp[0].formula), DEBUG_FH);
    fprintf(DEBUG_FH, "\n");
  } else  
    fprintf(DEBUG_FH, "  and empty GraphNode\n");
#endif

  if(!(yyvsp[0].formula))
    (yyval.seq) = NULL;
  else {
    (yyval.seq) = raptor_new_sequence((raptor_data_free_handler)rasqal_free_formula,
                             (raptor_data_print_handler)rasqal_formula_print);
    if(!(yyval.seq)) {
      rasqal_free_formula((yyvsp[0].formula));
      YYERROR_MSG("GraphNodeListNotEmpty 2: cannot create sequence");
    }
    if(raptor_sequence_push((yyval.seq), (yyvsp[0].formula))) {
      raptor_free_sequence((yyval.seq));
      (yyval.seq) = NULL;
      YYERROR_MSG("GraphNodeListNotEmpty 2: sequence push failed");
    }
  }
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 1  
  fprintf(DEBUG_FH, "  GraphNodeListNotEmpty is now ");
  raptor_sequence_print((yyval.seq), DEBUG_FH);
  fprintf(DEBUG_FH, "\n\n");
#endif
}
#line 7929 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 4352 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7937 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 4356 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = (yyvsp[0].formula);
}
#line 7945 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 4364 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = rasqal_new_formula(rq->world);
  if(!(yyval.formula))
    YYERROR_MSG("VarOrTerm 1: cannot create formula");
  (yyval.formula)->value = rasqal_new_variable_literal(rq->world, (yyvsp[0].variable));
  if(!(yyval.formula)->value) {
    rasqal_free_formula((yyval.formula));
    (yyval.formula) = NULL;
    YYERROR_MSG("VarOrTerm 1: cannot create literal");
  }
}
#line 7961 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 4376 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.formula) = rasqal_new_formula(rq->world);
  if(!(yyval.formula)) {
    if((yyvsp[0].literal))
      rasqal_free_literal((yyvsp[0].literal));
    YYERROR_MSG("VarOrTerm 2: cannot create formula");
  }
  (yyval.formula)->value = (yyvsp[0].literal);
}
#line 7975 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 4389 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_variable_literal(rq->world, (yyvsp[0].variable));
  if(!(yyval.literal))
    YYERROR_MSG("VarOrIRIref: cannot create literal");
}
#line 7985 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 4395 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 7993 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 4403 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
}
#line 8001 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 4407 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
}
#line 8009 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 4414 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = rasqal_variables_table_add(rq->vars_table,
                                  RASQAL_VARIABLE_TYPE_NORMAL, (yyvsp[0].name), NULL);
  if(!(yyval.variable))
    YYERROR_MSG("VarName: cannot create var");
}
#line 8020 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 4425 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
}
#line 8028 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 4429 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
}
#line 8036 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 4433 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.variable) = (yyvsp[0].variable);
  sparql_syntax_warning(rq,
                        "... AS varname is deprecated LAQRS syntax, use ... AS ?varname");
}
#line 8046 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 4443 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 8054 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 4447 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 8062 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 4451 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 8070 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 4455 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 8078 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 4459 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 8086 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 4463 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_uri_literal(rq->world, 
                              raptor_uri_copy(rq->world->rdf_nil_uri));
  if(!(yyval.literal))
    YYERROR_MSG("GraphTerm: cannot create literal");
}
#line 8097 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 4473 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8105 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 4481 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("ConditionalOrExpression: cannot create expr");
}
#line 8116 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 4488 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8124 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 4496 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_AND, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("ConditionalAndExpression: cannot create expr");
;
}
#line 8136 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 4504 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8144 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 4513 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_EQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RelationalExpression 1: cannot create expr");
}
#line 8155 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 4520 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RelationalExpression 2: cannot create expr");
}
#line 8166 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 4527 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RelationalExpression 3: cannot create expr");
}
#line 8177 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 4534 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RelationalExpression 4: cannot create expr");
}
#line 8188 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 4541 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RelationalExpression 5: cannot create expr");
}
#line 8199 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 4548 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RelationalExpression 6: cannot create expr");
}
#line 8210 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 4555 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_set_expression(rq->world,
                                 RASQAL_EXPR_IN, (yyvsp[-2].expr), (yyvsp[0].seq));
}
#line 8219 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 4560 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_set_expression(rq->world,
                                 RASQAL_EXPR_NOT_IN, (yyvsp[-3].expr), (yyvsp[0].seq));
}
#line 8228 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 4565 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8236 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 4574 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_PLUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("AdditiveExpression 1: cannot create expr");
}
#line 8247 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 4581 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_MINUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("AdditiveExpression 2: cannot create expr");
}
#line 8258 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 4588 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_expression *e;
  e = rasqal_new_literal_expression(rq->world, (yyvsp[0].literal));
  if(!e) {
    rasqal_free_expression((yyvsp[-1].expr));
    YYERROR_MSG("AdditiveExpression 3: cannot create expr");
  }
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_PLUS, (yyvsp[-1].expr), e);
  if(!(yyval.expr))
    YYERROR_MSG("AdditiveExpression 4: cannot create expr");
}
#line 8275 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 4601 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_expression *e;
  e = rasqal_new_literal_expression(rq->world, (yyvsp[0].literal));
  if(!e) {
    rasqal_free_expression((yyvsp[-1].expr));
    YYERROR_MSG("AdditiveExpression 5: cannot create expr");
  }
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_PLUS, (yyvsp[-1].expr), e);
  if(!(yyval.expr))
    YYERROR_MSG("AdditiveExpression 6: cannot create expr");
}
#line 8292 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 4614 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8300 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 4621 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STAR, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("MultiplicativeExpression 1: cannot create expr");
}
#line 8311 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 4628 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_SLASH, (yyvsp[-2].expr), (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("MultiplicativeExpression 2: cannot create expr");
}
#line 8322 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 4635 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8330 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 4643 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_BANG, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("UnaryExpression 1: cannot create expr");
}
#line 8341 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 4650 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8349 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 4654 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_UMINUS, (yyvsp[0].expr));
  if(!(yyval.expr))
    YYERROR_MSG("UnaryExpression 3: cannot create expr");
}
#line 8360 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 4661 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8368 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 4675 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8376 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 4679 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8384 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 308:
#line 4683 "./sparql_parser.y" /* yacc.c:1646  */
    {
  /* Grammar has IRIrefOrFunction here which is "IRIref ArgList?"
   * and essentially shorthand for FunctionCall | IRIref.  The Rasqal
   * SPARQL lexer distinguishes these for us with IRIrefBrace.
   * IRIref is covered below by GraphTerm.
   */
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8397 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 309:
#line 4692 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_literal_expression(rq->world, (yyvsp[0].literal));
  if(!(yyval.expr))
    YYERROR_MSG("PrimaryExpression 4: cannot create expr");
}
#line 8407 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 310:
#line 4698 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_literal *l;
  l = rasqal_new_variable_literal(rq->world, (yyvsp[0].variable));
  if(!l)
    YYERROR_MSG("PrimaryExpression 5: cannot create literal");
  (yyval.expr) = rasqal_new_literal_expression(rq->world, l);
  if(!(yyval.expr))
    YYERROR_MSG("PrimaryExpression 5: cannot create expr");
}
#line 8421 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 4708 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8429 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 4716 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
}
#line 8437 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 4724 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_STR, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 1: cannot create expr");
}
#line 8448 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 4731 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_LANG, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 2: cannot create expr");
}
#line 8459 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 4738 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_LANGMATCHES, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 3: cannot create expr");
}
#line 8470 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 4745 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_DATATYPE, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 4: cannot create expr");
}
#line 8481 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 4752 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_literal *l;
  rasqal_expression *e;
  l = rasqal_new_variable_literal(rq->world, (yyvsp[-1].variable));
  if(!l)
    YYERROR_MSG("BuiltInCall 5: cannot create literal");
  e = rasqal_new_literal_expression(rq->world, l);
  if(!e)
    YYERROR_MSG("BuiltInCall 6: cannot create literal expr");
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_BOUND, e);
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7: cannot create expr");
}
#line 8500 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 4767 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_IRI, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7a: cannot create expr");
}
#line 8511 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 4774 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_IRI, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7b: cannot create expr");
}
#line 8522 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 4781 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_BNODE, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7c: cannot create expr");
}
#line 8533 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 4788 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_BNODE, NULL);
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7d: cannot create expr");
}
#line 8544 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 4795 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_0op_expression(rq->world, 
                                 RASQAL_EXPR_RAND);
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7e: cannot create expr");
}
#line 8555 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 4802 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_ABS, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7f: cannot create expr");
}
#line 8566 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 4809 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_CEIL, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7g: cannot create expr");
}
#line 8577 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 4816 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_FLOOR, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7h: cannot create expr");
}
#line 8588 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 4823 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_ROUND, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7i: cannot create expr");
}
#line 8599 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 4830 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_MD5, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7j: cannot create expr");
}
#line 8610 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 4837 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_SHA1, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7k: cannot create expr");
}
#line 8621 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 4844 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_SHA224, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7l: cannot create expr");
}
#line 8632 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 4851 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_SHA256, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7m: cannot create expr");
}
#line 8643 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 4858 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_SHA384, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7n: cannot create expr");
}
#line 8654 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 4865 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world, 
                                 RASQAL_EXPR_SHA512, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7o: cannot create expr");
}
#line 8665 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 4872 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_0op_expression(rq->world, 
                                 RASQAL_EXPR_UUID);
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7p: cannot create expr");
}
#line 8676 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 4879 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_0op_expression(rq->world, 
                                 RASQAL_EXPR_STRUUID);
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7q: cannot create expr");
}
#line 8687 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 4886 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8695 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 4890 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8703 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 4894 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_3op_expression(rq->world,
                                 RASQAL_EXPR_IF, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7e: cannot create expr");
}
#line 8714 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 4901 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STRLANG, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7f: cannot create expr");
}
#line 8725 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 4908 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STRDT, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 7g: cannot create expr");
}
#line 8736 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 4915 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_SAMETERM, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 8: cannot create expr");
}
#line 8747 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 4922 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ISURI, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 9: cannot create expr");
}
#line 8758 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 4929 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ISBLANK, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 10: cannot create expr");
}
#line 8769 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 4936 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ISLITERAL, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 11: cannot create expr");
}
#line 8780 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 4943 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ISNUMERIC, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("BuiltInCall 12: cannot create expr");
}
#line 8791 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 4950 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8799 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 4954 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8807 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 4958 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[0].expr);
}
#line 8815 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 4965 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_STRLEN, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create STRLEN() expr");
}
#line 8826 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 4972 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_3op_expression(rq->world,
                                 RASQAL_EXPR_SUBSTR, (yyvsp[-3].expr), (yyvsp[-1].expr), NULL);
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create SUBSTR() expr");
}
#line 8837 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 4979 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_3op_expression(rq->world,
                                 RASQAL_EXPR_SUBSTR, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create SUBSTR() expr");
}
#line 8848 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 4986 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_UCASE, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create UCASE() expr");
}
#line 8859 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 4993 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_LCASE, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create LCASE() expr");
}
#line 8870 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 5000 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STRSTARTS, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create STRSTARTS() expr");
}
#line 8881 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 5007 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STRENDS, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create STRENDS() expr");
}
#line 8892 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 5014 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_CONTAINS, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create YEAR expr");
}
#line 8903 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 5021 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_ENCODE_FOR_URI, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create ENCODE_FOR_URI() expr");
}
#line 8914 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 5028 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_expr_seq_expression(rq->world, 
                                      RASQAL_EXPR_CONCAT, (yyvsp[-1].seq));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create CONCAT() expr");
}
#line 8925 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 5035 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STRBEFORE, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create STRBEFORE() expr");
}
#line 8936 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 5042 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_2op_expression(rq->world,
                                 RASQAL_EXPR_STRAFTER, (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create STRAFTER() expr");
}
#line 8947 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 5049 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_3op_expression(rq->world,
                                 RASQAL_EXPR_REPLACE, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create REPLACE() expr");
}
#line 8958 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 5056 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_4op_expression(rq->world,
                                 RASQAL_EXPR_REPLACE, (yyvsp[-7].expr), (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("StringExpression: cannot create REPLACE() expr");
}
#line 8969 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 5067 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_3op_expression(rq->world,
                                 RASQAL_EXPR_REGEX, (yyvsp[-3].expr), (yyvsp[-1].expr), NULL);
  if(!(yyval.expr))
    YYERROR_MSG("RegexExpression 1: cannot create expr");
}
#line 8980 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 5074 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_3op_expression(rq->world,
                                 RASQAL_EXPR_REGEX, (yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("RegexExpression 2: cannot create expr");
}
#line 8991 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 5085 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_YEAR, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create YEAR expr");
}
#line 9002 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 5092 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_MONTH, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create MONTH expr");
}
#line 9013 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 5099 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_DAY, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create DAY expr");
}
#line 9024 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 5106 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_HOURS, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create HOURS expr");
}
#line 9035 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 5113 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_MINUTES, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create MINUTES expr");
}
#line 9046 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 5120 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_SECONDS, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create SECONDS expr");
}
#line 9057 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 5127 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_TIMEZONE, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create TIMEZONE expr");
}
#line 9068 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 5134 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                 RASQAL_EXPR_TZ, (yyvsp[-1].expr));
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeBuiltinAccessors: cannot create TZ expr");
}
#line 9079 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 5145 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(sparql->experimental) {
    (yyval.expr) = rasqal_new_0op_expression(rq->world,
                                   RASQAL_EXPR_CURRENT_DATETIME);
    if(!(yyval.expr))
      YYERROR_MSG("DatetimeExtensions: cannot create CURRENT_DATETIME() expr");
  } else {
    sparql_syntax_error(rq,
                        "CURRENT_DATETIME() can only used with LAQRS");
    YYERROR;
  }
}
#line 9100 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 5162 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);
  
  (yyval.expr) = NULL;
  if(!sparql->sparql11_query) {
    sparql_syntax_error(rq,
                        "NOW() can only be used with SPARQL 1.1");
    YYERROR;
  }
  
  (yyval.expr) = rasqal_new_0op_expression(rq->world,
                                   RASQAL_EXPR_NOW);
  if(!(yyval.expr))
    YYERROR_MSG("DatetimeExtensions: cannot create NOW()");

}
#line 9122 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 5180 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(sparql->experimental) {
    (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                   RASQAL_EXPR_FROM_UNIXTIME, (yyvsp[-1].expr));
    if(!(yyval.expr))
      YYERROR_MSG("DatetimeExtensions: cannot create FROM_UNIXTIME() expr");
  } else {
    sparql_syntax_error(rq,
                        "FROM_UNIXTIME() can only used with LAQRS");
    YYERROR;
  }
  
}
#line 9144 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 5198 "./sparql_parser.y" /* yacc.c:1646  */
    {
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)(rq->context);

  (yyval.expr) = NULL;
  if(sparql->experimental) {
    (yyval.expr) = rasqal_new_1op_expression(rq->world,
                                   RASQAL_EXPR_TO_UNIXTIME, (yyvsp[-1].expr));
    if(!(yyval.expr))
      YYERROR_MSG("DatetimeExtensions: cannot create TO_UNIXTIME() expr");
  } else {
    sparql_syntax_error(rq,
                        "TO_UNIXTIME() can only used with LAQRS");
    YYERROR;
  }
  
}
#line 9166 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 5223 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_uri_literal(rq->world, (yyvsp[0].uri));
  if(!(yyval.literal))
    YYERROR_MSG("IRIrefBrace 1: cannot create literal");
}
#line 9176 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 5229 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_simple_literal(rq->world,
                                 RASQAL_LITERAL_QNAME, (yyvsp[0].name));
  if(!(yyval.literal))
    YYERROR_MSG("IRIrefBrace 2: cannot create literal");
  if(rasqal_literal_expand_qname(rq, (yyval.literal))) {
    sparql_query_error_full(rq,
                            "QName %s cannot be expanded", (yyvsp[0].name));
    rasqal_free_literal((yyval.literal));
    (yyval.literal) = NULL;
    YYERROR_MSG("IRIrefBrace 2: cannot expand qname");
  }
}
#line 9194 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 5249 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9202 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 5253 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9210 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 5257 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9218 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 5264 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9226 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 5268 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9234 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 5272 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9242 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 5280 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9250 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 5284 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9258 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 5288 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9266 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 5296 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9274 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 5300 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9282 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 5304 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = (yyvsp[0].literal);
}
#line 9290 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 5316 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_uri_literal(rq->world, (yyvsp[0].uri));
  if(!(yyval.literal))
    YYERROR_MSG("IRIref 1: cannot create literal");
}
#line 9300 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 5322 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_simple_literal(rq->world,
                                 RASQAL_LITERAL_QNAME, (yyvsp[0].name));
  if(!(yyval.literal))
    YYERROR_MSG("IRIref 2: cannot create literal");
  if(rasqal_literal_expand_qname(rq, (yyval.literal))) {
    sparql_query_error_full(rq,
                            "QName %s cannot be expanded", (yyvsp[0].name));
    rasqal_free_literal((yyval.literal));
    (yyval.literal) = NULL;
    YYERROR_MSG("IRIrefBrace 2: cannot expand qname");
  }
}
#line 9318 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 5342 "./sparql_parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = rasqal_new_simple_literal(rq->world,
                                 RASQAL_LITERAL_BLANK, (yyvsp[0].name));
  if(!(yyval.literal))
    YYERROR_MSG("BlankNode 1: cannot create literal");
}
#line 9329 "sparql_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 5348 "./sparql_parser.y" /* yacc.c:1646  */
    {
  const unsigned char *id;
  id = rasqal_query_generate_bnodeid(rq, NULL);
  if(!id)
    YYERROR_MSG("BlankNode 2: cannot create bnodeid");
  (yyval.literal) = rasqal_new_simple_literal(rq->world,
                                 RASQAL_LITERAL_BLANK, id);
  if(!(yyval.literal))
    YYERROR_MSG("BlankNode 2: cannot create literal");
}
#line 9344 "sparql_parser.c" /* yacc.c:1646  */
    break;


#line 9348 "sparql_parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (rq, yyscanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (rq, yyscanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, rq, yyscanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, rq, yyscanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (rq, yyscanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, rq, yyscanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, rq, yyscanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 5367 "./sparql_parser.y" /* yacc.c:1906  */



/* Support functions */


/* This is declared in sparql_lexer.h but never used, so we always get
 * a warning unless this dummy code is here.  Used once below in an error case.
 */
static int yy_init_globals (yyscan_t yyscanner ) { return 0; }


/*
 * rasqal_sparql_query_language_init:
 * @rdf_query: query
 * @name: language name (or NULL)
 *
 * Internal: Initialise the SPARQL query language parser
 *
 * Return value: non 0 on failure
 **/
static int
rasqal_sparql_query_language_init(rasqal_query* rdf_query, const char *name)
{
  rasqal_sparql_query_language* rqe;

  rqe = (rasqal_sparql_query_language*)rdf_query->context;

  rdf_query->compare_flags = RASQAL_COMPARE_XQUERY;

  /* All the sparql query families support this */
  rqe->sparql_scda = 1; /* SELECT CONSTRUCT DESCRIBE ASK */

  /* SPARQL 1.1 Query + Update is the default */
  rqe->sparql_scda = 1; /* SELECT CONSTRUCT DESCRIBE ASK */
  rqe->sparql11_query = 1;
  rqe->sparql11_property_paths = 1;
  rqe->sparql11_update = 1;

  if(name) {
    /* SPARQL 1.0 disables SPARQL 1.1 features */
    if(!strncmp(name, "sparql10", 8)) {
      rqe->sparql11_query = 0;
      rqe->sparql11_property_paths = 0;
      rqe->sparql11_update = 0;
    }

    if(!strcmp(name, "sparql11-query")) {
      /* No update if SPARQL 1.1 query */
      rqe->sparql11_update = 0;
    }

    if(!strcmp(name, "sparql11-update")) {
      /* No query (SELECT, CONSTRUCT, DESCRIBE, ASK) if SPARQL 1.1 update */
      rqe->sparql_scda = 0;
    }

    /* LAQRS for experiments */
    if(!strcmp(name, "laqrs"))
      rqe->experimental = 1;
  }

  return 0;
}


/**
 * rasqal_sparql_query_language_terminate - Free the SPARQL query language parser
 *
 * Return value: non 0 on failure
 **/
static void
rasqal_sparql_query_language_terminate(rasqal_query* rdf_query)
{
  rasqal_sparql_query_language* sparql;
  sparql = (rasqal_sparql_query_language*)rdf_query->context;

  if(sparql && sparql->scanner_set) {
    sparql_lexer_lex_destroy(sparql->scanner);
    sparql->scanner_set = 0;
  }

}


static int
rasqal_sparql_query_language_prepare(rasqal_query* rdf_query)
{
  /* rasqal_sparql_query_language* sparql = (rasqal_sparql_query_language*)rdf_query->context; */
  int rc;
  
  if(!rdf_query->query_string)
    return 1;

  rc = rasqal_query_reset_select_query(rdf_query);
  if(rc)
    return 1;

  rc = sparql_parse(rdf_query);
  if(rc)
    return rc;

  /* FIXME - should check remaining query parts  */
  if(rasqal_sequence_has_qname(rdf_query->triples) ||
     rasqal_sequence_has_qname(rdf_query->constructs) ||
     rasqal_query_constraints_has_qname(rdf_query)) {
    sparql_query_error(rdf_query, "SPARQL query has unexpanded QNames");
    return 1;
  }

  /* SPARQL: Turn [] into anonymous variables */
  if(rasqal_query_build_anonymous_variables(rdf_query))
    return 1;
  
  /* SPARQL: Expand 'SELECT *' */
  if(rasqal_query_expand_wildcards(rdf_query,
                                   rasqal_query_get_projection(rdf_query)))
    return 1;
  
  return 0;
}


static int
sparql_parse(rasqal_query* rq)
{
  rasqal_sparql_query_language* rqe;
  raptor_locator *locator=&rq->locator;

  rqe = (rasqal_sparql_query_language*)rq->context;

  if(!rq->query_string)
    return yy_init_globals(NULL); /* 0 but a way to use yy_init_globals */

  locator->line = 1;
  locator->column = -1; /* No column info */
  locator->byte = -1; /* No bytes info */

  rqe->lineno = 1;

  if(sparql_lexer_lex_init(&rqe->scanner))
    return 1;
  rqe->scanner_set = 1;

 #if defined(YYDEBUG) && YYDEBUG > 0
   sparql_lexer_set_debug(1 ,&sparql_parser->scanner);
   sparql_parser_debug = 1;
 #endif

  sparql_lexer_set_extra(rq, rqe->scanner);

  (void)sparql_lexer__scan_buffer(RASQAL_GOOD_CAST(char*, rq->query_string),
                                  rq->query_string_length, rqe->scanner);

  rqe->error_count = 0;

  sparql_parser_parse(rq, rqe->scanner);

  sparql_lexer_lex_destroy(rqe->scanner);
  rqe->scanner_set = 0;

  /* Parsing failed */
  if(rq->failed)
    return 1;
  
  return 0;
}


static void
sparql_query_error(rasqal_query *rq, const char *msg)
{
  rasqal_sparql_query_language* rqe;

  rqe = (rasqal_sparql_query_language*)rq->context;

  if(rqe->error_count++)
    return;

  rq->locator.line = rqe->lineno;
#ifdef RASQAL_SPARQL_USE_ERROR_COLUMNS
  /*  rq->locator.column = sparql_lexer_get_column(yyscanner);*/
#endif

  rq->failed = 1;
  rasqal_log_error_simple(((rasqal_query*)rq)->world, RAPTOR_LOG_LEVEL_ERROR,
                          &rq->locator, "%s", msg);
}


static void
sparql_query_error_full(rasqal_query *rq, const char *message, ...)
{
  va_list arguments;
  rasqal_sparql_query_language* rqe;

  rqe = (rasqal_sparql_query_language*)rq->context;

  if(rqe->error_count++)
    return;

  rq->locator.line = rqe->lineno;
#ifdef RASQAL_SPARQL_USE_ERROR_COLUMNS
  /*  rq->locator.column = sparql_lexer_get_column(yyscanner);*/
#endif

  va_start(arguments, message);

  rq->failed = 1;
  rasqal_log_error_varargs(((rasqal_query*)rq)->world, RAPTOR_LOG_LEVEL_ERROR,
                           &rq->locator, message, arguments);

  va_end(arguments);
}


int
sparql_syntax_error(rasqal_query *rq, const char *message, ...)
{
  rasqal_sparql_query_language *rqe;
  va_list arguments;

  rqe = (rasqal_sparql_query_language*)rq->context;

  if(rqe->error_count++)
    return 0;

  rq->locator.line=rqe->lineno;
#ifdef RASQAL_SPARQL_USE_ERROR_COLUMNS
  /*  rp->locator.column=sparql_lexer_get_column(yyscanner);*/
#endif

  va_start(arguments, message);
  rq->failed = 1;
  rasqal_log_error_varargs(((rasqal_query*)rq)->world, RAPTOR_LOG_LEVEL_ERROR,
                           &rq->locator, message, arguments);
  va_end(arguments);

  return 0;
}


int
sparql_syntax_warning(rasqal_query *rq, const char *message, ...)
{
  rasqal_sparql_query_language *rqe;
  va_list arguments;

  if(RASQAL_WARNING_LEVEL_QUERY_SYNTAX < rq->world->warning_level)
    return 0;
  
  rqe = (rasqal_sparql_query_language*)rq->context;

  rq->locator.line = rqe->lineno;
#ifdef RASQAL_SPARQL_USE_ERROR_COLUMNS
  /*  rq->locator.column=sparql_lexer_get_column(yyscanner);*/
#endif

  va_start(arguments, message);
  rasqal_log_error_varargs(((rasqal_query*)rq)->world, RAPTOR_LOG_LEVEL_WARN,
                           &rq->locator, message, arguments);
  va_end(arguments);

  return 0;
}


static int
rasqal_sparql_query_language_iostream_write_escaped_counted_string(rasqal_query* query,
                                                                   raptor_iostream* iostr,
                                                                   const unsigned char* string,
                                                                   size_t len)
{
  const char delim = '"';
  
  raptor_iostream_write_byte(delim, iostr);
  if(raptor_string_ntriples_write(string, len, delim, iostr))
    return 1;
  
  raptor_iostream_write_byte(delim, iostr);

  return 0;
}


static const char* const sparql_names[] = { "sparql10", NULL};

static const raptor_type_q sparql_types[] = {
  { NULL, 0, 0}
};


static int
rasqal_sparql_query_language_register_factory(rasqal_query_language_factory *factory)
{
  int rc = 0;

  factory->desc.names = sparql_names;

  factory->desc.mime_types = sparql_types;

  factory->desc.label = "SPARQL 1.0 W3C RDF Query Language";

  factory->desc.uri_strings = NULL;

  factory->context_length = sizeof(rasqal_sparql_query_language);

  factory->init      = rasqal_sparql_query_language_init;
  factory->terminate = rasqal_sparql_query_language_terminate;
  factory->prepare   = rasqal_sparql_query_language_prepare;
  factory->iostream_write_escaped_counted_string = rasqal_sparql_query_language_iostream_write_escaped_counted_string;

  return rc;
}


int
rasqal_init_query_language_sparql(rasqal_world* world)
{
  return !rasqal_query_language_register_factory(world,
                                                 &rasqal_sparql_query_language_register_factory);
}


static const char* const sparql11_names[] = { "sparql", "sparql11", NULL };


static const char* const sparql11_uri_strings[] = {
  "http://www.w3.org/TR/rdf-sparql-query/",
  NULL
};

static const raptor_type_q sparql11_types[] = {
  { "application/sparql", 18, 10}, 
  { NULL, 0, 0}
};


static int
rasqal_sparql11_language_register_factory(rasqal_query_language_factory *factory)
{
  int rc = 0;

  factory->desc.names = sparql11_names;

  factory->desc.mime_types = sparql11_types;

  factory->desc.label = "SPARQL 1.1 (DRAFT) Query and Update Languages";

  /* What URI describes Query and Update languages? */
  factory->desc.uri_strings = sparql11_uri_strings;

  factory->context_length = sizeof(rasqal_sparql_query_language);

  factory->init      = rasqal_sparql_query_language_init;
  factory->terminate = rasqal_sparql_query_language_terminate;
  factory->prepare   = rasqal_sparql_query_language_prepare;
  factory->iostream_write_escaped_counted_string = rasqal_sparql_query_language_iostream_write_escaped_counted_string;

  return rc;
}


static const char* const sparql11_query_names[] = { "sparql11-query", NULL };

static const char* const sparql11_query_uri_strings[] = {
  "http://www.w3.org/TR/2010/WD-sparql11-query-20101014/",
  NULL
};

static const raptor_type_q sparql11_query_types[] = {
  { NULL, 0, 0}
};


static int
rasqal_sparql11_query_language_register_factory(rasqal_query_language_factory *factory)
{
  int rc = 0;

  factory->desc.names = sparql11_query_names;

  factory->desc.mime_types = sparql11_query_types;

  factory->desc.label = "SPARQL 1.1 (DRAFT) Query Language";

  factory->desc.uri_strings = sparql11_query_uri_strings;

  factory->context_length = sizeof(rasqal_sparql_query_language);

  factory->init      = rasqal_sparql_query_language_init;
  factory->terminate = rasqal_sparql_query_language_terminate;
  factory->prepare   = rasqal_sparql_query_language_prepare;
  factory->iostream_write_escaped_counted_string = rasqal_sparql_query_language_iostream_write_escaped_counted_string;

  return rc;
}


static const char* const sparql11_update_names[] = { "sparql11-update", NULL };

static const char* const sparql11_update_uri_strings[] = {
  "http://www.w3.org/TR/2010/WD-sparql11-update-20101014/",
  NULL
};

static const raptor_type_q sparql11_update_types[] = {
  { NULL, 0, 0}
};


static int
rasqal_sparql11_update_language_register_factory(rasqal_query_language_factory *factory)
{
  int rc = 0;

  factory->desc.names = sparql11_update_names;

  factory->desc.mime_types = sparql11_update_types;

  factory->desc.label = "SPARQL 1.1 (DRAFT) Update Language";

  factory->desc.uri_strings = sparql11_update_uri_strings;

  factory->context_length = sizeof(rasqal_sparql_query_language);

  factory->init      = rasqal_sparql_query_language_init;
  factory->terminate = rasqal_sparql_query_language_terminate;
  factory->prepare   = rasqal_sparql_query_language_prepare;
  factory->iostream_write_escaped_counted_string = rasqal_sparql_query_language_iostream_write_escaped_counted_string;

  return rc;
}


int
rasqal_init_query_language_sparql11(rasqal_world* world)
{
  if(!rasqal_query_language_register_factory(world,
                                             &rasqal_sparql11_language_register_factory))
    return 1;
  
  if(!rasqal_query_language_register_factory(world,
                                             &rasqal_sparql11_query_language_register_factory))
    return 1;
  
  if(!rasqal_query_language_register_factory(world,
                                             &rasqal_sparql11_update_language_register_factory))
    return 1;
  
  return 0;
}


static const char* const laqrs_names[] = { "laqrs", NULL};

static const raptor_type_q laqrs_types[] = {
  { NULL, 0, 0}
};


static int
rasqal_laqrs_query_language_register_factory(rasqal_query_language_factory *factory)
{
  int rc = 0;

  factory->desc.names = laqrs_names;

  factory->desc.mime_types = laqrs_types;

  factory->desc.label = "LAQRS adds to Querying RDF in SPARQL";

  factory->desc.uri_strings = NULL;

  factory->context_length = sizeof(rasqal_sparql_query_language);

  factory->init      = rasqal_sparql_query_language_init;
  factory->terminate = rasqal_sparql_query_language_terminate;
  factory->prepare   = rasqal_sparql_query_language_prepare;
  factory->iostream_write_escaped_counted_string = rasqal_sparql_query_language_iostream_write_escaped_counted_string;

  return rc;
}


int
rasqal_init_query_language_laqrs(rasqal_world* world)
{
  return !rasqal_query_language_register_factory(world,
                                                 &rasqal_laqrs_query_language_register_factory);
}


#ifdef STANDALONE
#include <stdio.h>
#include <locale.h>
#ifdef HAVE_GETOPT_H
#include <getopt.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifndef HAVE_GETOPT
#include <rasqal_getopt.h>
#endif

#ifdef NEED_OPTIND_DECLARATION
extern int optind;
extern char *optarg;
#endif

#define GETOPT_STRING "di:"

#define SPARQL_FILE_BUF_SIZE 4096

static char query_string[SPARQL_FILE_BUF_SIZE];

int
main(int argc, char *argv[]) 
{
  const char *program = rasqal_basename(argv[0]);
  rasqal_query *query = NULL;
  FILE *fh;
  int rc;
  const char *filename = NULL;
  raptor_uri* base_uri = NULL;
  unsigned char *uri_string = NULL;
  const char* query_language = "sparql";
  int usage = 0;
  rasqal_world *world;
  size_t read_len;

  world = rasqal_new_world();
  if(!world || rasqal_world_open(world))
    exit(1);

  filename = getenv("SPARQL_QUERY_FILE");
    
  while(!usage) {
    int c = getopt (argc, argv, GETOPT_STRING);

    if (c == -1)
      break;

    switch (c) {
      case 0:
      case '?': /* getopt() - unknown option */
        usage = 1;
        break;
        
      case 'd':
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 2
        sparql_parser_debug = 1;
#endif
        break;
  
      case 'i':
        if(optarg) {
          if(rasqal_language_name_check(world, optarg)) {
            query_language = optarg;
          } else {
            fprintf(stderr, "%s: Unknown query language '%s'\n",
                    program, optarg);
            usage = 1;
          }
        }
        break;
    }
  }

  if(!filename) {
    if((argc-optind) != 1) {
      fprintf(stderr, "%s: Too many arguments.\n", program);
      usage = 1;
    } else
      filename = argv[optind];
  }
  
  if(usage) {
    fprintf(stderr, "SPARQL/LAQRS parser test for Rasqal %s\n", 
            rasqal_version_string);
    fprintf(stderr, "USAGE: %s [OPTIONS] SPARQL-QUERY-FILE\n", program);
    fprintf(stderr, "OPTIONS:\n");
#if defined(RASQAL_DEBUG) && RASQAL_DEBUG > 2
    fprintf(stderr, " -d           Bison parser debugging\n");
#endif
    fprintf(stderr, " -i LANGUAGE  Set query language\n");
    rc = 1;
    goto tidy;
  }


 fh = fopen(filename, "r");
 if(!fh) {
   fprintf(stderr, "%s: Cannot open file %s - %s\n", program, filename,
           strerror(errno));
   rc = 1;
   goto tidy;
 }
 
  memset(query_string, 0, SPARQL_FILE_BUF_SIZE);
  read_len = fread(query_string, SPARQL_FILE_BUF_SIZE, 1, fh);
  if(read_len < SPARQL_FILE_BUF_SIZE) {
    if(ferror(fh)) {
      fprintf(stderr, "%s: file '%s' read failed - %s\n",
              program, filename, strerror(errno));
      fclose(fh);
      rc = 1;
      goto tidy;
    }
  }
  
  fclose(fh);

  query = rasqal_new_query(world, query_language, NULL);
  rc = 1;
  if(query) {
    uri_string = raptor_uri_filename_to_uri_string(filename);

    if(uri_string) {
      base_uri = raptor_new_uri(world->raptor_world_ptr, uri_string);

      if(base_uri) {
        rc = rasqal_query_prepare(query,
                                  RASQAL_GOOD_CAST(const unsigned char*, query_string),
                                  base_uri);

        if(!rc)
          rasqal_query_print(query, stdout);
      }
    }
  }

  tidy:
  if(query)
    rasqal_free_query(query);

  if(base_uri)
    raptor_free_uri(base_uri);

  if(uri_string)
    raptor_free_memory(uri_string);

  if(world)
    rasqal_free_world(world);

  return rc;
}

#endif /* STANDALONE */
