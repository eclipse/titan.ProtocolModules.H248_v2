/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         H248_SDP_parse_parse
#define yylex           H248_SDP_parse_lex
#define yyerror         H248_SDP_parse_error
#define yylval          H248_SDP_parse_lval
#define yychar          H248_SDP_parse_char
#define yydebug         H248_SDP_parse_debug
#define yynerrs         H248_SDP_parse_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "H248_SDP_parser.y"

/******************************************************************************
* Copyright (c) 2005, 2015  Ericsson AB
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/epl-v10.html
*
* Contributors:
* Csaba Koppany
* Eduard Czimbalmos
* Gabor Szalai
* Janos Zoltan Szabo
* Timea Moder
******************************************************************************/
//
//  File:               H248_SDP_parser.y
//  Rev:                R6B
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T SDP
/*C declarations*/

#include "H248_SDP_parse_parser.h"
#include <stdarg.h>
#define YYDEBUG 1
using namespace H248__SDP__Types;

extern int SDP_parse_lex();
extern int SDP_parse_error(char *s);

H248__SDP__Message__list* H248_SDP_parse_parsed_message;

H248__SDP__Message__list* H248_SDP_parse_get_parsed_message() {
	return H248_SDP_parse_parsed_message;
}

void H248_SDP_parse_set_parsed_message(H248__SDP__Message__list* pdu) {
	H248_SDP_parse_parsed_message=pdu;
}




/* Line 268 of yacc.c  */
#line 121 "H248_SDP_parse_.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ZERO = 258,
     _ONE = 259,
     _TWO = 260,
     _THREE = 261,
     _FOUR = 262,
     _FIVE = 263,
     _SIX = 264,
     _SEVEN = 265,
     _EIGHT = 266,
     _NINE = 267,
     CRLF = 268,
     ALPHA = 269,
     SPACE = 270,
     UNDERSCORE = 271,
     PERIOD = 272,
     ANYBYTE = 273,
     LBRACE = 274,
     RBRACE = 275,
     LT = 276,
     GT = 277,
     PLUS = 278,
     HYPHEN = 279,
     SLASH = 280,
     COLON = 281,
     EMAIL = 282,
     TOKEN = 283,
     INTTOKEN = 284,
     VEQ = 285,
     OEQ = 286,
     SEQ = 287,
     IEQ = 288,
     UEQ = 289,
     EEQ = 290,
     PEQ = 291,
     CEQ = 292,
     BEQ = 293,
     BW_CT = 294,
     BW_AS = 295,
     TEQ = 296,
     ZEQ = 297,
     REQ = 298,
     KEQ = 299,
     AEQ = 300,
     MEQ = 301,
     A_CAT = 302,
     A_KEYWDS = 303,
     A_TOOL = 304,
     A_PTIME = 305,
     A_RECVONLY = 306,
     A_SENDRECV = 307,
     A_SENDONLY = 308,
     A_ORIENT = 309,
     A_TYPE = 310,
     A_CHARSET = 311,
     A_SDLANG = 312,
     A_LANG = 313,
     A_FRAMERATE = 314,
     A_QUALITY = 315,
     A_FMTP = 316,
     A_CURR = 317,
     A_DES = 318,
     A_CONF = 319,
     A_RTMAP = 320,
     A_RTCP = 321,
     A_MAX_SIZE = 322,
     A_PATH = 323,
     A_ACCEPT_TYPES = 324,
     A_ACCEPT_WRAPPED_TYPES = 325,
     A_MAXPRATE = 326,
     A_MID = 327,
     A_GROUP = 328,
     A_FILE_SELECTOR = 329,
     A_FILE_TRANSFER_ID = 330,
     A_INACTIVE = 331,
     A_SETUP = 332,
     A_CONNECTION = 333,
     A_CRYPTO = 334,
     A_CONTENT = 335,
     A_LABEL = 336,
     A_FLOORCTRL = 337,
     A_CONFID = 338,
     A_USERID = 339,
     A_FLOORID = 340,
     A_FINGERPRINT = 341
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 44 "H248_SDP_parser.y"

	int number;
	CHARSTRING* intnum;
	char byte;
	CHARSTRING* t_charstring;
	H248__SDP__Types::H248__SDP__Message__list* t_sdp_message_list;
	H248__SDP__Types::H248__SDP__Message* t_sdp_message;
	H248__SDP__Types::H248__SDP__Origin* t_sdp_origin;
	H248__SDP__Types::H248__SDP__contact* t_sdp_contact;
	H248__SDP__Types::H248__SDP__email__list* t_sdp_email_list;
	H248__SDP__Types::H248__SDP__phone__list* t_sdp_phone_list;
	H248__SDP__Types::H248__SDP__connection* t_sdp_connection;
	H248__SDP__Types::H248__SDP__connection__list* t_sdp_connection_list;
	H248__SDP__Types::H248__SDP__conn__addr* t_sdp_conn_addr;
	H248__SDP__Types::H248__SDP__bandwidth* t_sdp_bandwidth;
	H248__SDP__Types::H248__SDP__time__list* t_sdp_time_list;
	H248__SDP__Types::H248__SDP__time* t_sdp_time;
	H248__SDP__Types::H248__SDP__time__field* t_sdp_time_field;
	H248__SDP__Types::H248__SDP__repeat* t_sdp_repeat;
	H248__SDP__Types::H248__SDP__repeat__list* t_sdp_repeat_list;
	H248__SDP__Types::H248__SDP__timezone__list* t_sdp_timezone_list;
	H248__SDP__Types::H248__SDP__timezone* t_sdp_timezone;
	H248__SDP__Types::H248__SDP__typed__time* t_sdp_typed_time;
	H248__SDP__Types::H248__SDP__typed__time__list* t_sdp_typed_time_list;
	H248__SDP__Types::H248__SDP__key* t_sdp_key;
	H248__SDP__Types::H248__SDP__attribute* t_sdp_attribute;
	H248__SDP__Types::H248__SDP__attribute__list* t_sdp_attribute_list;
	H248__SDP__Types::H248__SDP__media__desc* t_sdp_media_desc;
	H248__SDP__Types::H248__SDP__media__desc__list* t_sdp_media_desc_list;
	H248__SDP__Types::H248__SDP__media__field* t_sdp_media_field;
	H248__SDP__Types::H248__SDP__fmt__list* t_sdp_fmt_list;
	H248__SDP__Types::H248__SDP__bandwidth__list* t_bandwidth_list;
	H248__SDP__Types::H248__SDP__url__list* t_url_list;
	H248__SDP__Types::H248__SDP__media__type__list* t_type_list;
	H248__SDP__Types::H248__SDP__id__tag__list* t_id_list;



/* Line 293 of yacc.c  */
#line 282 "H248_SDP_parse_.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 294 "H248_SDP_parse_.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNRULES -- Number of states.  */
#define YYNSTATES  287

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    25,    26,    29,    36,
      48,    58,    60,    64,    66,    70,    71,    74,    78,    81,
      84,    87,    90,    92,    94,    96,    99,   102,   105,   108,
     111,   114,   117,   120,   123,   126,   129,   132,   135,   138,
     141,   144,   147,   150,   155,   158,   161,   166,   169,   172,
     174,   177,   180,   183,   186,   189,   192,   195,   198,   201,
     204,   208,   210,   214,   216,   220,   222,   226,   227,   231,
     233,   237,   238,   240,   242,   245,   248,   249,   252,   260,
     262,   266,   267,   271,   273,   277,   281,   283,   286,   292,
     293,   296,   302,   303,   306,   307,   315,   323,   325,   329,
     335,   336,   339,   343,   345,   350,   355,   357,   358,   361,
     365,   367,   373,   379,   383,   384,   388,   389,   393,   394,
     398,   402,   403,   417,   419,   422,   424,   426,   428,   430,
     432,   434,   436,   438,   440,   442,   444,   446,   448,   450,
     452,   454,   456,   458,   460,   462,   464
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      88,     0,    -1,    89,    -1,    90,    -1,    89,    90,    -1,
     131,   132,   130,   129,   128,   125,   121,   118,   115,   104,
     110,   102,    96,    91,    -1,    -1,    91,    92,    -1,    93,
     129,   117,   115,   102,    96,    -1,    46,    28,    15,    28,
      25,    28,    15,    94,    15,    95,    13,    -1,    46,    28,
      15,    28,    15,    94,    15,    95,    13,    -1,    28,    -1,
      28,    25,    28,    -1,    28,    -1,    95,    15,    28,    -1,
      -1,    96,    97,    -1,    45,    98,    13,    -1,    47,    28,
      -1,    48,    28,    -1,    49,    28,    -1,    50,    28,    -1,
      51,    -1,    52,    -1,    53,    -1,    54,    28,    -1,    55,
      28,    -1,    56,    28,    -1,    57,    28,    -1,    58,    28,
      -1,    59,    28,    -1,    60,    28,    -1,    61,    28,    -1,
      62,    28,    -1,    63,    28,    -1,    64,    28,    -1,    65,
      28,    -1,    66,    28,    -1,    67,    28,    -1,    68,    99,
      -1,    69,   101,    -1,    70,   101,    -1,    71,    28,    -1,
      71,    28,    17,    28,    -1,    72,    28,    -1,    73,    28,
      -1,    73,    28,    15,   100,    -1,    74,    28,    -1,    75,
      28,    -1,    76,    -1,    77,    28,    -1,    78,    28,    -1,
      79,    28,    -1,    80,    28,    -1,    81,    28,    -1,    82,
      28,    -1,    83,    28,    -1,    84,    28,    -1,    85,    28,
      -1,    86,    28,    -1,    28,    26,    28,    -1,    28,    -1,
      99,    15,    28,    -1,    28,    -1,   100,    15,    28,    -1,
      28,    -1,   101,    15,    28,    -1,    -1,    44,   103,    13,
      -1,    28,    -1,    28,    26,    28,    -1,    -1,   105,    -1,
     106,    -1,   105,   106,    -1,   114,   107,    -1,    -1,   107,
     108,    -1,    43,   113,    15,   113,    15,   109,    13,    -1,
     113,    -1,   109,    15,   113,    -1,    -1,    42,   111,    13,
      -1,   112,    -1,   111,    15,   112,    -1,    29,    15,   113,
      -1,    29,    -1,    29,    14,    -1,    41,    28,    15,    28,
      13,    -1,    -1,   115,   116,    -1,    38,    28,    26,    28,
      13,    -1,    -1,   117,   119,    -1,    -1,    37,    28,    15,
      28,    15,   120,    13,    -1,    37,    28,    15,    28,    15,
     120,    13,    -1,    28,    -1,    28,    25,    28,    -1,    28,
      25,    28,    25,    28,    -1,    -1,   121,   122,    -1,    36,
     123,    13,    -1,   124,    -1,   124,    19,   133,    20,    -1,
     124,    21,   124,    22,    -1,   133,    -1,    -1,   125,   126,
      -1,    35,   127,    13,    -1,    27,    -1,    27,    15,    19,
     133,    20,    -1,   133,    15,    21,    27,    22,    -1,    21,
      27,    22,    -1,    -1,    34,    28,    13,    -1,    -1,    33,
      28,    13,    -1,    -1,    32,    28,    13,    -1,    30,    29,
      13,    -1,    -1,    31,    28,    15,    28,    15,    28,    15,
      28,    15,    28,    15,    28,    13,    -1,   137,    -1,   133,
     137,    -1,    14,    -1,   135,    -1,     3,    -1,   136,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    12,    -1,   134,    -1,
      16,    -1,    17,    -1,    24,    -1,    23,    -1,    25,    -1,
      26,    -1,    18,    -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   157,   161,   169,   272,   273,   285,   322,
     336,   350,   351,   359,   364,   371,   374,   387,   391,   396,
     401,   406,   411,   415,   419,   423,   428,   433,   438,   443,
     448,   453,   458,   463,   468,   473,   478,   483,   488,   493,
     498,   503,   508,   514,   521,   526,   532,   539,   544,   549,
     553,   558,   563,   568,   573,   578,   583,   588,   593,   598,
     603,   611,   616,   623,   628,   635,   640,   648,   649,   654,
     660,   668,   669,   671,   676,   683,   694,   695,   709,   720,
     725,   731,   732,   736,   741,   748,   756,   762,   769,   777,
     778,   792,   801,   802,   816,   817,   828,   837,   844,   852,
     863,   864,   876,   880,   886,   894,   903,   920,   921,   934,
     938,   945,   952,   959,   969,   970,   975,   976,   980,   981,
     986,   988,   989,  1011,  1012,  1021,  1022,  1025,  1026,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ZERO", "_ONE", "_TWO", "_THREE",
  "_FOUR", "_FIVE", "_SIX", "_SEVEN", "_EIGHT", "_NINE", "CRLF", "ALPHA",
  "SPACE", "UNDERSCORE", "PERIOD", "ANYBYTE", "LBRACE", "RBRACE", "LT",
  "GT", "PLUS", "HYPHEN", "SLASH", "COLON", "EMAIL", "TOKEN", "INTTOKEN",
  "VEQ", "OEQ", "SEQ", "IEQ", "UEQ", "EEQ", "PEQ", "CEQ", "BEQ", "BW_CT",
  "BW_AS", "TEQ", "ZEQ", "REQ", "KEQ", "AEQ", "MEQ", "A_CAT", "A_KEYWDS",
  "A_TOOL", "A_PTIME", "A_RECVONLY", "A_SENDRECV", "A_SENDONLY",
  "A_ORIENT", "A_TYPE", "A_CHARSET", "A_SDLANG", "A_LANG", "A_FRAMERATE",
  "A_QUALITY", "A_FMTP", "A_CURR", "A_DES", "A_CONF", "A_RTMAP", "A_RTCP",
  "A_MAX_SIZE", "A_PATH", "A_ACCEPT_TYPES", "A_ACCEPT_WRAPPED_TYPES",
  "A_MAXPRATE", "A_MID", "A_GROUP", "A_FILE_SELECTOR",
  "A_FILE_TRANSFER_ID", "A_INACTIVE", "A_SETUP", "A_CONNECTION",
  "A_CRYPTO", "A_CONTENT", "A_LABEL", "A_FLOORCTRL", "A_CONFID",
  "A_USERID", "A_FLOORID", "A_FINGERPRINT", "$accept", "announcements",
  "announcementlist", "announcement", "media_descriptions",
  "media_description", "media_field", "transport", "fmt_list",
  "attribute_fields", "attribute_field", "attribute", "url_list",
  "id_list", "type_list", "key_field", "key_type", "time_list2",
  "time_list", "time", "repeat_list", "repeat", "offsets",
  "timezones_field", "timezone_list", "timezone", "typed_time",
  "time_field", "bandwidth_list", "bandwidth_field", "connection_fields",
  "connection_field_lonely", "connection_field", "conn_address",
  "phone_fields", "phone_field", "phone_number", "phone", "email_fields",
  "email_field", "email_address", "uri_field", "information_field",
  "session_name_field", "proto_version", "origin_field", "email_text",
  "alpha_numeric", "digit", "pos_digit", "email_byte", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    91,    91,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   113,   114,   115,
     115,   116,   117,   117,   118,   118,   119,   120,   120,   120,
     121,   121,   122,   123,   123,   123,   124,   125,   125,   126,
     127,   127,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   137,   137,   137,   137,   137
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,    14,     0,     2,     6,    11,
       9,     1,     3,     1,     3,     0,     2,     3,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     2,     2,     4,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     1,     3,     1,     3,     1,     3,     0,     3,     1,
       3,     0,     1,     1,     2,     2,     0,     2,     7,     1,
       3,     0,     3,     1,     3,     3,     1,     2,     5,     0,
       2,     5,     0,     2,     0,     7,     7,     1,     3,     5,
       0,     2,     3,     1,     4,     4,     1,     0,     2,     3,
       1,     5,     5,     3,     0,     3,     0,     3,     0,     3,
       3,     0,    13,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,   121,     0,     1,     4,     0,
     118,   120,     0,     0,   116,     0,     0,     0,   114,     0,
     119,     0,     0,   107,     0,   117,     0,   100,     0,   115,
       0,    94,   108,     0,   127,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   125,   146,   139,   140,   145,     0,
     142,   141,   143,   144,   110,     0,     0,   138,   126,   128,
     123,     0,     0,    89,   101,     0,     0,     0,   109,   146,
     124,     0,   103,   106,     0,    71,     0,   113,     0,     0,
     102,     0,     0,     0,     0,     0,    81,    72,    73,    76,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    74,    75,     0,   111,   112,   104,   105,     0,     0,
       0,     0,     0,    83,     0,    15,     0,    77,     0,    97,
       0,     0,     0,     0,    82,     0,    69,     0,     6,    86,
       0,   122,     0,    95,    91,    88,    85,    84,     0,    68,
       0,     5,    16,    87,     0,    98,    70,     0,     0,     0,
       0,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,   116,     0,     0,     0,    18,    19,    20,    21,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    61,    39,    65,    40,    41,    42,    44,
      45,    47,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    17,     0,    92,     0,    99,    60,     0,
       0,     0,     0,     0,    89,     0,    79,    62,    66,    43,
      63,    46,     0,     0,    67,    93,    78,     0,     0,     0,
       0,     0,    15,    80,    64,    11,     0,     0,     0,     8,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    10,
       0,     0,     0,    14,     0,    96,     9
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,   141,   190,   191,   266,   276,   128,
     142,   188,   214,   251,   216,   115,   127,    86,    87,    88,
     102,   117,   245,   100,   112,   113,   130,    89,    75,    90,
     244,    63,   255,   120,    31,    64,    71,    72,    27,    32,
      55,    23,    18,    14,     5,    10,    73,    57,    58,    59,
      60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
     -21,    38,    20,   -21,  -124,    37,    56,  -124,  -124,    58,
      55,  -124,    74,    68,    62,    69,    85,    72,    87,   104,
    -124,    89,    94,  -124,    99,  -124,   115,    95,   114,  -124,
      67,   -31,  -124,   103,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   105,
    -124,  -124,  -124,  -124,   118,   138,   156,  -124,  -124,  -124,
    -124,   180,   117,  -124,  -124,   139,   131,   150,  -124,   154,
    -124,   163,    -9,   180,   162,   -34,   165,  -124,   180,   151,
    -124,   180,   180,   171,   172,   173,   160,   166,  -124,  -124,
    -124,   193,   100,   187,   132,   188,   196,   186,   198,   185,
     174,  -124,   176,   189,  -124,  -124,  -124,  -124,   192,   194,
     195,   200,     0,  -124,   197,  -124,   199,  -124,   203,   201,
     208,   211,   214,   199,  -124,   185,   204,   216,   190,   217,
     218,  -124,   206,  -124,  -124,  -124,  -124,  -124,   209,  -124,
     -25,   202,  -124,  -124,   199,   207,  -124,   210,   212,   213,
     215,   219,  -124,  -124,  -124,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   236,   237,   238,   239,   240,   241,  -124,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   267,   253,
    -124,    62,   268,   254,   256,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,   270,  -124,   271,   271,   272,  -124,
     273,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,   275,  -124,   199,  -124,  -124,   259,
     263,   264,   265,   266,   205,     3,  -124,  -124,  -124,  -124,
    -124,   280,   -14,   269,   -36,  -124,  -124,   199,   274,   276,
     277,   281,  -124,  -124,  -124,   220,   283,   284,   278,   190,
     279,   282,   276,   285,  -124,  -124,     4,   286,   192,  -124,
     287,   282,   290,  -124,    51,  -124,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,   305,  -124,  -124,  -124,   -33,   -43,   -18,
    -124,  -124,  -124,  -124,    75,    57,  -124,  -124,  -124,   252,
    -124,  -124,  -124,  -124,  -124,   184,  -123,  -124,    70,  -124,
    -124,  -124,  -124,    34,  -124,  -124,  -124,   255,  -124,  -124,
    -124,  -124,   122,  -124,  -124,  -124,   -16,  -124,  -124,  -124,
       7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     136,   259,    84,   147,    84,    61,    62,    85,   114,     1,
      81,   260,    82,   124,    56,   125,   256,   279,   257,   280,
       7,   192,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    92,    70,   286,    94,   280,     6,     9,    11,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      70,    44,    45,    46,    47,    48,    12,    13,    49,    15,
      50,    51,    52,    53,    54,    17,    16,    19,    20,    70,
      21,    70,    25,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,   246,    44,    45,    46,    47,    48,    24,
     104,    22,    26,    50,    51,    52,    53,    28,    29,    33,
      30,    65,    66,    67,   263,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    74,    44,    45,    46,    47,
      48,    68,   106,    77,    76,    50,    51,    52,    53,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    78,
      44,    69,    46,    47,    48,    79,    80,    83,    93,    50,
      51,    52,    53,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    91,    44,    45,    46,    47,    48,    96,
      97,    98,    99,    50,    51,    52,    53,    85,   103,   105,
     107,   108,   109,   110,   111,   123,   131,   118,   114,   116,
     119,   133,   121,   122,   134,   126,   132,   135,   129,   139,
     138,   143,   193,   144,   145,   140,   194,   146,   284,   277,
     195,   196,   253,   197,   269,   270,   217,   198,   189,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   215,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   237,   236,   238,   239,   240,   247,   242,   241,
     243,   248,   249,   250,   252,   258,   268,   261,   271,   272,
     278,   281,   264,   285,   265,   267,   273,   274,     8,   137,
     275,   262,   282,   235,   254,   283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,   101
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-124))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     123,    15,    38,    28,    38,    36,    37,    41,    44,    30,
      19,    25,    21,    13,    30,    15,    13,    13,    15,    15,
       0,   144,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    78,    56,    13,    81,    15,    29,    31,    13,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      73,    14,    15,    16,    17,    18,    28,    32,    21,    15,
      23,    24,    25,    26,    27,    33,    28,    28,    13,    92,
      28,    94,    13,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   236,    14,    15,    16,    17,    18,    15,
      20,    34,    28,    23,    24,    25,    26,    28,    13,    15,
      35,    28,    27,    15,   257,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    28,    14,    15,    16,    17,
      18,    13,    20,    22,    15,    23,    24,    25,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    19,
      14,    15,    16,    17,    18,    21,    13,    15,    27,    23,
      24,    25,    26,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    28,    14,    15,    16,    17,    18,    28,
      28,    28,    42,    23,    24,    25,    26,    41,    15,    22,
      22,    15,    26,    15,    29,    15,    13,    28,    44,    43,
      28,    13,    28,    28,    13,    28,    25,    13,    29,    13,
      26,    14,    25,    15,    28,    45,    26,    28,   281,   272,
      28,    28,    37,    28,   262,    25,   171,    28,    46,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      13,    28,    28,    15,    28,    15,    15,    28,    15,    17,
      15,    28,    28,    28,    28,    15,    15,    28,    15,    15,
      15,    15,    28,    13,    28,    28,    28,    28,     3,   125,
      28,   254,   278,   191,   244,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    88,    89,    90,   131,    29,     0,    90,    31,
     132,    13,    28,    32,   130,    15,    28,    33,   129,    28,
      13,    28,    34,   128,    15,    13,    28,   125,    28,    13,
      35,   121,   126,    15,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    15,    16,    17,    18,    21,
      23,    24,    25,    26,    27,   127,   133,   134,   135,   136,
     137,    36,    37,   118,   122,    28,    27,    15,    13,    15,
     137,   123,   124,   133,    28,   115,    15,    22,    19,    21,
      13,    19,    21,    15,    38,    41,   104,   105,   106,   114,
     116,    28,   133,    27,   133,   124,    28,    28,    28,    42,
     110,   106,   107,    15,    20,    22,    20,    22,    15,    26,
      15,    29,   111,   112,    44,   102,    43,   108,    28,    28,
     120,    28,    28,    15,    13,    15,    28,   103,    96,    29,
     113,    13,    25,    13,    13,    13,   113,   112,    26,    13,
      45,    91,    97,    14,    15,    28,    28,    28,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    98,    46,
      92,    93,   113,    25,    26,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    99,    28,   101,   101,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    13,    28,   129,    15,    28,    28,    15,
      15,    17,    15,    15,   117,   109,   113,    28,    28,    28,
      28,   100,    28,    37,   115,   119,    13,    15,    15,    15,
      25,    28,   102,   113,    28,    28,    94,    28,    15,    96,
      25,    15,    15,    28,    28,    28,    95,    94,    15,    13,
      15,    15,   120,    28,    95,    13,    13
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 152 "H248_SDP_parser.y"
    {
				YYACCEPT;
				}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 157 "H248_SDP_parser.y"
    {
					(*H248_SDP_parse_parsed_message)[0] = *(yyvsp[(1) - (1)].t_sdp_message);
					delete (yyvsp[(1) - (1)].t_sdp_message);
       }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 161 "H248_SDP_parser.y"
    {
					int anounce_num = (*H248_SDP_parse_parsed_message).size_of();
					(*H248_SDP_parse_parsed_message)[anounce_num] = *(yyvsp[(2) - (2)].t_sdp_message);
					delete (yyvsp[(2) - (2)].t_sdp_message);
       }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 183 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_message) = new H248__SDP__Message;
				if ((yyvsp[(1) - (14)].t_charstring) != NULL) {
								(*(yyval.t_sdp_message)).protocol__version() = *(yyvsp[(1) - (14)].t_charstring);
				         delete (yyvsp[(1) - (14)].t_charstring);
				} else
					(*(yyval.t_sdp_message)).protocol__version() = OMIT_VALUE;

				if ((yyvsp[(2) - (14)].t_sdp_origin) != NULL) {
				(*(yyval.t_sdp_message)).origin() = *(yyvsp[(2) - (14)].t_sdp_origin);
				delete (yyvsp[(2) - (14)].t_sdp_origin);
				} else
					(*(yyval.t_sdp_message)).origin() = OMIT_VALUE;

				if ((yyvsp[(3) - (14)].t_charstring) != NULL) {
				(*(yyval.t_sdp_message)).session__name() = *(yyvsp[(3) - (14)].t_charstring);
				delete (yyvsp[(3) - (14)].t_charstring);
				} else
					(*(yyval.t_sdp_message)).session__name() = OMIT_VALUE;

				if ((yyvsp[(4) - (14)].t_charstring) != NULL) { // information field present
					(*(yyval.t_sdp_message)).information() = *(yyvsp[(4) - (14)].t_charstring);
					delete (yyvsp[(4) - (14)].t_charstring);
				} else
					(*(yyval.t_sdp_message)).information() = OMIT_VALUE;

				if ((yyvsp[(5) - (14)].t_charstring) != NULL) { // uri field present
					(*(yyval.t_sdp_message)).uri() = *(yyvsp[(5) - (14)].t_charstring);
					delete (yyvsp[(5) - (14)].t_charstring);
				} else
					(*(yyval.t_sdp_message)).uri() = OMIT_VALUE;
				if ((yyvsp[(6) - (14)].t_sdp_email_list) != NULL) { //email fields present
					(*(yyval.t_sdp_message)).emails() = *(yyvsp[(6) - (14)].t_sdp_email_list);
					delete (yyvsp[(6) - (14)].t_sdp_email_list);
				} else
					(*(yyval.t_sdp_message)).emails() = OMIT_VALUE;
				if ((yyvsp[(7) - (14)].t_sdp_phone_list) != NULL) { // phone fields present
					(*(yyval.t_sdp_message)).phone__numbers() = *(yyvsp[(7) - (14)].t_sdp_phone_list);
					delete (yyvsp[(7) - (14)].t_sdp_phone_list);
				} else
					(*(yyval.t_sdp_message)).phone__numbers() = OMIT_VALUE;
				
				
				if ((yyvsp[(8) - (14)].t_sdp_connection) != NULL) { // connection fields present
				(*(yyval.t_sdp_message)).connection() = (*(yyvsp[(8) - (14)].t_sdp_connection));
				delete (yyvsp[(8) - (14)].t_sdp_connection);
				} else 
				  (*(yyval.t_sdp_message)).connection() = OMIT_VALUE;
				  
				if ((yyvsp[(9) - (14)].t_bandwidth_list) != NULL) {
					(*(yyval.t_sdp_message)).bandwidth() = *(yyvsp[(9) - (14)].t_bandwidth_list);
					delete (yyvsp[(9) - (14)].t_bandwidth_list);
				} else
					(*(yyval.t_sdp_message)).bandwidth() = OMIT_VALUE;

				if ((yyvsp[(10) - (14)].t_sdp_time_list) != NULL) {
				(*(yyval.t_sdp_message)).times() = *(yyvsp[(10) - (14)].t_sdp_time_list);
					delete (yyvsp[(10) - (14)].t_sdp_time_list);
				} else
					(*(yyval.t_sdp_message)).times() = OMIT_VALUE;

				if ((yyvsp[(11) - (14)].t_sdp_timezone_list) != NULL) {
					(*(yyval.t_sdp_message)).timezone__adjustments() = *(yyvsp[(11) - (14)].t_sdp_timezone_list);
					delete (yyvsp[(11) - (14)].t_sdp_timezone_list);
				} else
					(*(yyval.t_sdp_message)).timezone__adjustments() = OMIT_VALUE;

				
				if ((yyvsp[(12) - (14)].t_sdp_key) != NULL) {
					(*(yyval.t_sdp_message)).key () = *(yyvsp[(12) - (14)].t_sdp_key);
					delete (yyvsp[(12) - (14)].t_sdp_key);
				} else {
					(*(yyval.t_sdp_message)).key() = OMIT_VALUE;
				}
				
				if ((yyvsp[(13) - (14)].t_sdp_attribute_list) != NULL) {
					(*(yyval.t_sdp_message)).attributes() = *(yyvsp[(13) - (14)].t_sdp_attribute_list);
					delete (yyvsp[(13) - (14)].t_sdp_attribute_list);
				} else {
					(*(yyval.t_sdp_message)).attributes() = OMIT_VALUE;
				}
				if ((yyvsp[(14) - (14)].t_sdp_media_desc_list) != NULL) {
					(*(yyval.t_sdp_message)).media__list() = *(yyvsp[(14) - (14)].t_sdp_media_desc_list);
					delete (yyvsp[(14) - (14)].t_sdp_media_desc_list);
				} else 
					(*(yyval.t_sdp_message)).media__list() = OMIT_VALUE;
				
			  }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 272 "H248_SDP_parser.y"
    {(yyval.t_sdp_media_desc_list) = NULL;}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 273 "H248_SDP_parser.y"
    {
						if ((yyvsp[(1) - (2)].t_sdp_media_desc_list) != NULL) {
							int media_num = (*(yyvsp[(1) - (2)].t_sdp_media_desc_list)).size_of();
							(*(yyvsp[(1) - (2)].t_sdp_media_desc_list))[media_num] = *(yyvsp[(2) - (2)].t_sdp_media_desc);
							delete (yyvsp[(2) - (2)].t_sdp_media_desc);
						} else {
							(yyval.t_sdp_media_desc_list) = new H248__SDP__media__desc__list();
							(*(yyval.t_sdp_media_desc_list))[0] = *(yyvsp[(2) - (2)].t_sdp_media_desc);
							delete (yyvsp[(2) - (2)].t_sdp_media_desc);
						}
					}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 291 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_media_desc) = new H248__SDP__media__desc();
						(*(yyval.t_sdp_media_desc)).media__field() = *(yyvsp[(1) - (6)].t_sdp_media_field);
						delete (yyvsp[(1) - (6)].t_sdp_media_field);
						if ((yyvsp[(2) - (6)].t_charstring) != NULL) {
							(*(yyval.t_sdp_media_desc)).information() = *(yyvsp[(2) - (6)].t_charstring);
							delete (yyvsp[(2) - (6)].t_charstring);
						} else
							(*(yyval.t_sdp_media_desc)).information() = OMIT_VALUE;
						if ((yyvsp[(3) - (6)].t_sdp_connection_list) != NULL) {
							(*(yyval.t_sdp_media_desc)).connections() = *(yyvsp[(3) - (6)].t_sdp_connection_list);
							delete (yyvsp[(3) - (6)].t_sdp_connection_list);
						} else 
							(*(yyval.t_sdp_media_desc)).connections() = OMIT_VALUE;
						if ((yyvsp[(4) - (6)].t_bandwidth_list) != NULL) {
							(*(yyval.t_sdp_media_desc)).bandwidth() = *(yyvsp[(4) - (6)].t_bandwidth_list);
							delete (yyvsp[(4) - (6)].t_bandwidth_list);
						} else
							(*(yyval.t_sdp_media_desc)).bandwidth() = OMIT_VALUE;
						if ((yyvsp[(5) - (6)].t_sdp_key) != NULL) {
							(*(yyval.t_sdp_media_desc)).key() = *(yyvsp[(5) - (6)].t_sdp_key);
							delete (yyvsp[(5) - (6)].t_sdp_key);
						} else
							(*(yyval.t_sdp_media_desc)).key() = OMIT_VALUE;
						if ((yyvsp[(6) - (6)].t_sdp_attribute_list) != NULL) {
							(*(yyval.t_sdp_media_desc)).attributes() = *(yyvsp[(6) - (6)].t_sdp_attribute_list);
							delete (yyvsp[(6) - (6)].t_sdp_attribute_list);
						} else
							(*(yyval.t_sdp_media_desc)).attributes()=  OMIT_VALUE;
					}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 323 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_media_field) = new H248__SDP__media__field();
						(*(yyval.t_sdp_media_field)).media() = *(yyvsp[(2) - (11)].t_charstring);
						delete (yyvsp[(2) - (11)].t_charstring);
						(*(yyval.t_sdp_media_field)).ports().port__number() = *(yyvsp[(4) - (11)].t_charstring);
						delete (yyvsp[(4) - (11)].t_charstring);
						(*(yyval.t_sdp_media_field)).ports().num__of__ports() = *(yyvsp[(6) - (11)].t_charstring);
						delete (yyvsp[(6) - (11)].t_charstring);
						(*(yyval.t_sdp_media_field)).transport() = *(yyvsp[(8) - (11)].t_charstring);
						delete (yyvsp[(8) - (11)].t_charstring);
						(*(yyval.t_sdp_media_field)).fmts() = *(yyvsp[(10) - (11)].t_sdp_fmt_list);
						delete (yyvsp[(10) - (11)].t_sdp_fmt_list);
					}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 337 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_media_field) = new H248__SDP__media__field();
						(*(yyval.t_sdp_media_field)).media() = *(yyvsp[(2) - (9)].t_charstring);
						delete (yyvsp[(2) - (9)].t_charstring);
						(*(yyval.t_sdp_media_field)).ports().port__number() = *(yyvsp[(4) - (9)].t_charstring);
						delete (yyvsp[(4) - (9)].t_charstring);
						(*(yyval.t_sdp_media_field)).ports().num__of__ports() = OMIT_VALUE;
						(*(yyval.t_sdp_media_field)).transport() = *(yyvsp[(6) - (9)].t_charstring);
						delete (yyvsp[(6) - (9)].t_charstring);
						(*(yyval.t_sdp_media_field)).fmts() = *(yyvsp[(8) - (9)].t_sdp_fmt_list);
						delete (yyvsp[(8) - (9)].t_sdp_fmt_list);
					}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 350 "H248_SDP_parser.y"
    { (yyval.t_charstring)=(yyvsp[(1) - (1)].t_charstring);}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 351 "H248_SDP_parser.y"
    {
         const CHARSTRING& str = *(yyvsp[(1) - (3)].t_charstring)+CHARSTRING(1,"/")+*(yyvsp[(3) - (3)].t_charstring);
         delete (yyvsp[(1) - (3)].t_charstring);
         delete (yyvsp[(3) - (3)].t_charstring);
         (yyval.t_charstring) = new CHARSTRING(str);
         
       }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 359 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_fmt_list) = new H248__SDP__fmt__list();
				(*(yyval.t_sdp_fmt_list))[0] = *(yyvsp[(1) - (1)].t_charstring);
				delete (yyvsp[(1) - (1)].t_charstring);
			}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 364 "H248_SDP_parser.y"
    {
				int fmt_num = (*(yyvsp[(1) - (3)].t_sdp_fmt_list)).size_of();
				(*(yyvsp[(1) - (3)].t_sdp_fmt_list))[fmt_num] = *(yyvsp[(3) - (3)].t_charstring);
				delete (yyvsp[(3) - (3)].t_charstring);
				(yyval.t_sdp_fmt_list) = (yyvsp[(1) - (3)].t_sdp_fmt_list);
			}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 371 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_attribute_list) = NULL;
					}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 374 "H248_SDP_parser.y"
    {
						if ((yyvsp[(1) - (2)].t_sdp_attribute_list) != NULL) {
							int att_num = (*(yyvsp[(1) - (2)].t_sdp_attribute_list)).size_of();
							(*(yyvsp[(1) - (2)].t_sdp_attribute_list))[att_num] = *(yyvsp[(2) - (2)].t_sdp_attribute);
							delete (yyvsp[(2) - (2)].t_sdp_attribute);
						} else {
							(yyval.t_sdp_attribute_list) = new H248__SDP__attribute__list();
							(*(yyval.t_sdp_attribute_list))[0] = *(yyvsp[(2) - (2)].t_sdp_attribute);
							delete (yyvsp[(2) - (2)].t_sdp_attribute);
						}
					}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 387 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_attribute) = (yyvsp[(2) - (3)].t_sdp_attribute);
					}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 391 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).cat().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 396 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).keywds().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 401 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).tool().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 406 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).ptime().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 411 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).recvonly() = H248__SDP__attribute__recvonly(NULL_VALUE);
				}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 415 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).sendrecv() = H248__SDP__attribute__sendrecv(NULL_VALUE);
				}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 419 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).sendonly() = H248__SDP__attribute__sendonly(NULL_VALUE);
				}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 423 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).orient().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 428 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).sdp__type().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 433 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).charset().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 438 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).sdplang().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 443 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).lang().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 448 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).framerate().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 453 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).quality().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 458 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).fmtp().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 463 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).curr().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 468 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).des().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 473 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).conf().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 478 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).rtpmap().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 483 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).rtcp().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 488 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).max__size().max__size() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 493 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).path().path__list() = *(yyvsp[(2) - (2)].t_url_list);
					delete (yyvsp[(2) - (2)].t_url_list);
				}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 498 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).accept__types().attr__value() = *(yyvsp[(2) - (2)].t_type_list);
					delete (yyvsp[(2) - (2)].t_type_list);
				}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 503 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).accept__wrapped__types().attr__value() = *(yyvsp[(2) - (2)].t_type_list);
					delete (yyvsp[(2) - (2)].t_type_list);
				}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 508 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).maxprate().prate__integer__part() = *(yyvsp[(2) - (2)].t_charstring);
					(*(yyval.t_sdp_attribute)).maxprate().prate__fraction__part() = OMIT_VALUE;
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 514 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).maxprate().prate__integer__part() = *(yyvsp[(2) - (4)].t_charstring);
					(*(yyval.t_sdp_attribute)).maxprate().prate__fraction__part() = *(yyvsp[(4) - (4)].t_charstring);
					delete (yyvsp[(2) - (4)].t_charstring);
					delete (yyvsp[(4) - (4)].t_charstring);
				}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 521 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).mid().id__tag() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 526 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).group__attr().semantics() = *(yyvsp[(2) - (2)].t_charstring);
					(*(yyval.t_sdp_attribute)).group__attr().id__tag()=OMIT_VALUE;
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 532 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).group__attr().semantics() = *(yyvsp[(2) - (4)].t_charstring);
					(*(yyval.t_sdp_attribute)).group__attr().id__tag()=*(yyvsp[(4) - (4)].t_id_list);
					delete (yyvsp[(2) - (4)].t_charstring);
					delete (yyvsp[(4) - (4)].t_id_list);
				}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 539 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).file__selector().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 544 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).file__transfer__id().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 549 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).inactive() = H248__SDP__attribute__inactive(NULL_VALUE);
				}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 553 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).setup().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 558 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).connection().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 563 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).crypto().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 568 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).content().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 573 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).attr__label().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 578 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).floorctrl().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 583 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).confid().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 588 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).userid().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 593 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).floorid().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 598 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).fingerprint().attr__value() = *(yyvsp[(2) - (2)].t_charstring);
					delete (yyvsp[(2) - (2)].t_charstring);
				}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 603 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_attribute) = new H248__SDP__attribute();
					(*(yyval.t_sdp_attribute)).unknown().name() = *(yyvsp[(1) - (3)].t_charstring);
					delete (yyvsp[(1) - (3)].t_charstring);
					(*(yyval.t_sdp_attribute)).unknown().attr__value() = *(yyvsp[(3) - (3)].t_charstring);
					delete (yyvsp[(3) - (3)].t_charstring);
				}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 611 "H248_SDP_parser.y"
    {
					(yyval.t_url_list) = new H248__SDP__url__list();
					(*(yyval.t_url_list))[0] = *(yyvsp[(1) - (1)].t_charstring);
					delete (yyvsp[(1) - (1)].t_charstring);
				}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 616 "H248_SDP_parser.y"
    {
					int url_num = (*(yyvsp[(1) - (3)].t_url_list)).size_of();
					(*(yyvsp[(1) - (3)].t_url_list))[url_num] = *(yyvsp[(3) - (3)].t_charstring);
					delete (yyvsp[(3) - (3)].t_charstring);
					(yyval.t_url_list) = (yyvsp[(1) - (3)].t_url_list);
				}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 623 "H248_SDP_parser.y"
    {
					(yyval.t_id_list) = new H248__SDP__id__tag__list();
					(*(yyval.t_id_list))[0] = *(yyvsp[(1) - (1)].t_charstring);
					delete (yyvsp[(1) - (1)].t_charstring);
				}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 628 "H248_SDP_parser.y"
    {
					int id_num = (*(yyvsp[(1) - (3)].t_id_list)).size_of();
					(*(yyvsp[(1) - (3)].t_id_list))[id_num] = *(yyvsp[(3) - (3)].t_charstring);
					delete (yyvsp[(3) - (3)].t_charstring);
					(yyval.t_id_list) = (yyvsp[(1) - (3)].t_id_list);
				}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 635 "H248_SDP_parser.y"
    {
					(yyval.t_type_list) = new H248__SDP__media__type__list();
					(*(yyval.t_type_list))[0] = *(yyvsp[(1) - (1)].t_charstring);
					delete (yyvsp[(1) - (1)].t_charstring);
				}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 640 "H248_SDP_parser.y"
    {
					int url_num = (*(yyvsp[(1) - (3)].t_type_list)).size_of();
					(*(yyvsp[(1) - (3)].t_type_list))[url_num] = *(yyvsp[(3) - (3)].t_charstring);
					delete (yyvsp[(3) - (3)].t_charstring);
					(yyval.t_type_list) = (yyvsp[(1) - (3)].t_type_list);
				}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 648 "H248_SDP_parser.y"
    {(yyval.t_sdp_key) = NULL;}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 649 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_key) = (yyvsp[(2) - (3)].t_sdp_key);
				
			}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 654 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_key) = new H248__SDP__key();
				(*(yyval.t_sdp_key)).method() = *(yyvsp[(1) - (1)].t_charstring);
				delete (yyvsp[(1) - (1)].t_charstring);
				(*(yyval.t_sdp_key)).key() = OMIT_VALUE;
			}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 660 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_key) = new H248__SDP__key();
				(*(yyval.t_sdp_key)).method() = *(yyvsp[(1) - (3)].t_charstring);
				delete (yyvsp[(1) - (3)].t_charstring);
				(*(yyval.t_sdp_key)).key() = *(yyvsp[(3) - (3)].t_charstring);
				delete (yyvsp[(3) - (3)].t_charstring);
			}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 668 "H248_SDP_parser.y"
    {(yyval.t_sdp_time_list) = NULL;}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 669 "H248_SDP_parser.y"
    {(yyval.t_sdp_time_list) = (yyvsp[(1) - (1)].t_sdp_time_list);}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 671 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_time_list) = new H248__SDP__time__list();
					(*(yyval.t_sdp_time_list))[0] = *(yyvsp[(1) - (1)].t_sdp_time);
					delete (yyvsp[(1) - (1)].t_sdp_time);
				}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 676 "H248_SDP_parser.y"
    {
					int time_num = (*(yyvsp[(1) - (2)].t_sdp_time_list)).size_of();
					(*(yyvsp[(1) - (2)].t_sdp_time_list))[time_num] = *(yyvsp[(2) - (2)].t_sdp_time);
					delete (yyvsp[(2) - (2)].t_sdp_time);
					(yyval.t_sdp_time_list) = (yyvsp[(1) - (2)].t_sdp_time_list);
				}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 683 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_time) = new H248__SDP__time;
				(*(yyval.t_sdp_time)).time__field() = *(yyvsp[(1) - (2)].t_sdp_time_field);
				delete (yyvsp[(1) - (2)].t_sdp_time_field);
				if ((yyvsp[(2) - (2)].t_sdp_repeat_list) != NULL) {
					(*(yyval.t_sdp_time)).time__repeat() = *(yyvsp[(2) - (2)].t_sdp_repeat_list);
					delete (yyvsp[(2) - (2)].t_sdp_repeat_list);
				} else
					(*(yyval.t_sdp_time)).time__repeat() = OMIT_VALUE;
			}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 694 "H248_SDP_parser.y"
    {(yyval.t_sdp_repeat_list) = NULL;}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 695 "H248_SDP_parser.y"
    {
					if ((yyvsp[(1) - (2)].t_sdp_repeat_list) != NULL) {
						int repeat_num = (*(yyvsp[(1) - (2)].t_sdp_repeat_list)).size_of();
						(*(yyvsp[(1) - (2)].t_sdp_repeat_list))[repeat_num] = *(yyvsp[(2) - (2)].t_sdp_repeat);
						delete (yyvsp[(2) - (2)].t_sdp_repeat);
						(yyval.t_sdp_repeat_list) = (yyvsp[(1) - (2)].t_sdp_repeat_list);
					} else {
						(yyval.t_sdp_repeat_list) = new H248__SDP__repeat__list();
						(*(yyval.t_sdp_repeat_list))[0] = *(yyvsp[(2) - (2)].t_sdp_repeat);
						delete (yyvsp[(2) - (2)].t_sdp_repeat);
					}
				}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 709 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_repeat) = new H248__SDP__repeat();
				(*(yyval.t_sdp_repeat)).repeat__interval() = *(yyvsp[(2) - (7)].t_sdp_typed_time);
				delete (yyvsp[(2) - (7)].t_sdp_typed_time);
				(*(yyval.t_sdp_repeat)).active() = *(yyvsp[(4) - (7)].t_sdp_typed_time);
				delete (yyvsp[(4) - (7)].t_sdp_typed_time);
				(*(yyval.t_sdp_repeat)).offsets() = *(yyvsp[(6) - (7)].t_sdp_typed_time_list);
				delete (yyvsp[(6) - (7)].t_sdp_typed_time_list);
			}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 720 "H248_SDP_parser.y"
    {
				(yyval.t_sdp_typed_time_list) = new H248__SDP__typed__time__list();
				(*(yyval.t_sdp_typed_time_list))[0] = *(yyvsp[(1) - (1)].t_sdp_typed_time);
				delete (yyvsp[(1) - (1)].t_sdp_typed_time);
			}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 725 "H248_SDP_parser.y"
    {
				int off_size = (*(yyvsp[(1) - (3)].t_sdp_typed_time_list)).size_of();
				(*(yyval.t_sdp_typed_time_list))[off_size] = *(yyvsp[(3) - (3)].t_sdp_typed_time);
				delete (yyvsp[(3) - (3)].t_sdp_typed_time);
			}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 731 "H248_SDP_parser.y"
    {(yyval.t_sdp_timezone_list) = NULL;}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 732 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_timezone_list) = (yyvsp[(2) - (3)].t_sdp_timezone_list);
				}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 736 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_timezone_list) = new H248__SDP__timezone__list();
					(*(yyval.t_sdp_timezone_list))[0] = *(yyvsp[(1) - (1)].t_sdp_timezone);
					delete (yyvsp[(1) - (1)].t_sdp_timezone);
				}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 741 "H248_SDP_parser.y"
    {
					int tz_num = (*(yyvsp[(1) - (3)].t_sdp_timezone_list)).size_of();
					(*(yyvsp[(1) - (3)].t_sdp_timezone_list))[tz_num] = *(yyvsp[(3) - (3)].t_sdp_timezone);
					delete (yyvsp[(3) - (3)].t_sdp_timezone);
					(yyval.t_sdp_timezone_list) = (yyvsp[(1) - (3)].t_sdp_timezone_list);
				}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 748 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_timezone) = new H248__SDP__timezone();
					(*(yyval.t_sdp_timezone)).adjustment__time() = *(yyvsp[(1) - (3)].intnum);
					delete (yyvsp[(1) - (3)].intnum);
					(*(yyval.t_sdp_timezone)).offset() = *(yyvsp[(3) - (3)].t_sdp_typed_time);
					delete (yyvsp[(3) - (3)].t_sdp_typed_time);
				}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 756 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_typed_time) = new H248__SDP__typed__time();
					(*(yyval.t_sdp_typed_time)).time() = *(yyvsp[(1) - (1)].intnum);
					delete (yyvsp[(1) - (1)].intnum);
					(*(yyval.t_sdp_typed_time)).unit() = OMIT_VALUE;
				}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 762 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_typed_time) = new H248__SDP__typed__time();
					(*(yyval.t_sdp_typed_time)).time() = *(yyvsp[(1) - (2)].intnum);
					delete (yyvsp[(1) - (2)].intnum);
					(*(yyval.t_sdp_typed_time)).unit() = CHARSTRING(1, (const char*)&(yyvsp[(2) - (2)].byte));
				}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 769 "H248_SDP_parser.y"
    { // start_time SPACE stop_time
					(yyval.t_sdp_time_field) = new H248__SDP__time__field();
					(*(yyval.t_sdp_time_field)).start__time() = (*(yyvsp[(2) - (5)].t_charstring));
					delete (yyvsp[(2) - (5)].t_charstring);
					(*(yyval.t_sdp_time_field)).stop__time() = (*(yyvsp[(4) - (5)].t_charstring));
					delete (yyvsp[(4) - (5)].t_charstring);
				}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 777 "H248_SDP_parser.y"
    {(yyval.t_bandwidth_list) = NULL;}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 778 "H248_SDP_parser.y"
    {
					if ((yyvsp[(1) - (2)].t_bandwidth_list) != NULL) {
						int bandwidth_num = (*(yyvsp[(1) - (2)].t_bandwidth_list)).size_of();
						(*(yyvsp[(1) - (2)].t_bandwidth_list))[bandwidth_num] = *(yyvsp[(2) - (2)].t_sdp_bandwidth);
						delete (yyvsp[(2) - (2)].t_sdp_bandwidth);
						(yyval.t_bandwidth_list) = (yyvsp[(1) - (2)].t_bandwidth_list);
					} else {
						(yyval.t_bandwidth_list) = new H248__SDP__bandwidth__list();
						(*(yyval.t_bandwidth_list))[0] = *(yyvsp[(2) - (2)].t_sdp_bandwidth);
						delete (yyvsp[(2) - (2)].t_sdp_bandwidth);
					}
				}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 792 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_bandwidth) = new H248__SDP__bandwidth();
						(*(yyval.t_sdp_bandwidth)).modifier() = *(yyvsp[(2) - (5)].t_charstring);
						delete (yyvsp[(2) - (5)].t_charstring);
						(*(yyval.t_sdp_bandwidth)).bandwidth() =*(yyvsp[(4) - (5)].t_charstring);
						delete (yyvsp[(4) - (5)].t_charstring);
					}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 801 "H248_SDP_parser.y"
    {(yyval.t_sdp_connection_list) = NULL;}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 802 "H248_SDP_parser.y"
    {
						if ((yyvsp[(1) - (2)].t_sdp_connection_list) != NULL) {
							int con_num = (*(yyvsp[(1) - (2)].t_sdp_connection_list)).size_of();
							(*(yyvsp[(1) - (2)].t_sdp_connection_list))[con_num] = *(yyvsp[(2) - (2)].t_sdp_connection);
							delete (yyvsp[(2) - (2)].t_sdp_connection);
							(yyval.t_sdp_connection_list) = (yyvsp[(1) - (2)].t_sdp_connection_list);
						} else {
							(yyval.t_sdp_connection_list) = new H248__SDP__connection__list();
							(*(yyval.t_sdp_connection_list))[0] = *(yyvsp[(2) - (2)].t_sdp_connection);
							delete (yyvsp[(2) - (2)].t_sdp_connection);
						}
					}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 816 "H248_SDP_parser.y"
    {(yyval.t_sdp_connection) = NULL;}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 817 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_connection) = new H248__SDP__connection();
						(*(yyval.t_sdp_connection)).net__type() = *(yyvsp[(2) - (7)].t_charstring);
						delete (yyvsp[(2) - (7)].t_charstring);
						(*(yyval.t_sdp_connection)).addr__type() = *(yyvsp[(4) - (7)].t_charstring);
						delete (yyvsp[(4) - (7)].t_charstring);
						(*(yyval.t_sdp_connection)).conn__addr() = (*(yyvsp[(6) - (7)].t_sdp_conn_addr));
						delete (yyvsp[(6) - (7)].t_sdp_conn_addr);
					}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 828 "H248_SDP_parser.y"
    {
						(yyval.t_sdp_connection) = new H248__SDP__connection();
						(*(yyval.t_sdp_connection)).net__type() = *(yyvsp[(2) - (7)].t_charstring);
						delete (yyvsp[(2) - (7)].t_charstring);
						(*(yyval.t_sdp_connection)).addr__type() = *(yyvsp[(4) - (7)].t_charstring);
						delete (yyvsp[(4) - (7)].t_charstring);
						(*(yyval.t_sdp_connection)).conn__addr() = (*(yyvsp[(6) - (7)].t_sdp_conn_addr));
						delete (yyvsp[(6) - (7)].t_sdp_conn_addr);
					}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 837 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_conn_addr) = new H248__SDP__conn__addr();
					(*(yyval.t_sdp_conn_addr)).addr() = (*(yyvsp[(1) - (1)].t_charstring));
					delete (yyvsp[(1) - (1)].t_charstring);
					(*(yyval.t_sdp_conn_addr)).ttl() = OMIT_VALUE;
					(*(yyval.t_sdp_conn_addr)).num__of__addr() = OMIT_VALUE;
				}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 844 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_conn_addr) = new H248__SDP__conn__addr();
					(*(yyval.t_sdp_conn_addr)).addr() = (*(yyvsp[(1) - (3)].t_charstring));
					delete (yyvsp[(1) - (3)].t_charstring);
					(*(yyval.t_sdp_conn_addr)).ttl() = *(yyvsp[(3) - (3)].t_charstring);
					(*(yyval.t_sdp_conn_addr)).num__of__addr() = OMIT_VALUE;
					delete (yyvsp[(3) - (3)].t_charstring);
				}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 852 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_conn_addr) = new H248__SDP__conn__addr();
					(*(yyval.t_sdp_conn_addr)).addr() = (*(yyvsp[(1) - (5)].t_charstring));
					delete (yyvsp[(1) - (5)].t_charstring);
					(*(yyval.t_sdp_conn_addr)).ttl() = *(yyvsp[(3) - (5)].t_charstring);
					(*(yyval.t_sdp_conn_addr)).num__of__addr() = *(yyvsp[(5) - (5)].t_charstring);
					delete (yyvsp[(3) - (5)].t_charstring);
					delete (yyvsp[(5) - (5)].t_charstring);
				}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 863 "H248_SDP_parser.y"
    {(yyval.t_sdp_phone_list) = NULL;}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 864 "H248_SDP_parser.y"
    {
					if ((yyval.t_sdp_phone_list) == NULL) {
						(yyval.t_sdp_phone_list) = new H248__SDP__phone__list();
						(*(yyval.t_sdp_phone_list))[0] = *(yyvsp[(2) - (2)].t_sdp_contact);
						delete (yyvsp[(2) - (2)].t_sdp_contact);
					} else {
						int num_of_phonenumbers = (*(yyvsp[(1) - (2)].t_sdp_phone_list)).size_of();
						(*(yyvsp[(1) - (2)].t_sdp_phone_list))[num_of_phonenumbers]  =*(yyvsp[(2) - (2)].t_sdp_contact);
						delete (yyvsp[(2) - (2)].t_sdp_contact);
					}
				}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 876 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = (yyvsp[(2) - (3)].t_sdp_contact);
				}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 880 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = (*(yyvsp[(1) - (1)].t_charstring));
					delete (yyvsp[(1) - (1)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = OMIT_VALUE;
				}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 886 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = *(yyvsp[(1) - (4)].t_charstring);
					delete (yyvsp[(1) - (4)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = *(yyvsp[(3) - (4)].t_charstring);
					delete (yyvsp[(3) - (4)].t_charstring);
				}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 894 "H248_SDP_parser.y"
    {
					/* phone is any charstring, but with trailing space removed*/
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = *(yyvsp[(3) - (4)].t_charstring);
					delete (yyvsp[(3) - (4)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = *(yyvsp[(1) - (4)].t_charstring);
					delete (yyvsp[(1) - (4)].t_charstring);
				}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 903 "H248_SDP_parser.y"
    {
			/* remove trailing space, if any */
/* This is a rather ugly post-processing, but otherwise SDP can not
be parsed with an LR(1) parser. Reason: phone number may contain spaces, 
and delimiter between the phone number and the rest of the phone field may be a space*/

			int size = (*(yyvsp[(1) - (1)].t_charstring)).lengthof();
			
			const char* buf = (const char*)(*(yyvsp[(1) - (1)].t_charstring));
			
			if (buf[size-1] == ' ') {
				(yyval.t_charstring) = new CHARSTRING(size-1, (const char*)(*(yyvsp[(1) - (1)].t_charstring)));
				delete (yyvsp[(1) - (1)].t_charstring);
			} else
				(yyval.t_charstring) = (yyvsp[(1) - (1)].t_charstring);
		}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 920 "H248_SDP_parser.y"
    {(yyval.t_sdp_email_list) = NULL;}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 921 "H248_SDP_parser.y"
    {
					if ((yyvsp[(1) - (2)].t_sdp_email_list) == NULL) {
						(yyval.t_sdp_email_list) = new H248__SDP__email__list();
						(*(yyval.t_sdp_email_list))[0] = *(yyvsp[(2) - (2)].t_sdp_contact);
						delete (yyvsp[(2) - (2)].t_sdp_contact);
					} else {
						int num_of_emails = (*(yyvsp[(1) - (2)].t_sdp_email_list)).size_of();
						// indexing begins with 0
						(*(yyvsp[(1) - (2)].t_sdp_email_list))[num_of_emails] = *(yyvsp[(2) - (2)].t_sdp_contact);
						delete (yyvsp[(2) - (2)].t_sdp_contact);
					}
				}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 934 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = (yyvsp[(2) - (3)].t_sdp_contact);
				}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 938 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = *(yyvsp[(1) - (1)].t_charstring);
					delete (yyvsp[(1) - (1)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = OMIT_VALUE;
				}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 945 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = *(yyvsp[(1) - (5)].t_charstring);
					delete (yyvsp[(1) - (5)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = *(yyvsp[(4) - (5)].t_charstring);
					delete (yyvsp[(4) - (5)].t_charstring);
				}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 952 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = *(yyvsp[(4) - (5)].t_charstring);
					delete (yyvsp[(4) - (5)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = *(yyvsp[(1) - (5)].t_charstring);
					delete (yyvsp[(1) - (5)].t_charstring);
				}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 959 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_contact) = new H248__SDP__contact();
					(*(yyval.t_sdp_contact)).addr__or__phone() = *(yyvsp[(2) - (3)].t_charstring);
					delete (yyvsp[(2) - (3)].t_charstring);
					(*(yyval.t_sdp_contact)).disp__name() = OMIT_VALUE;
				}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 969 "H248_SDP_parser.y"
    {(yyval.t_charstring) = NULL;}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 970 "H248_SDP_parser.y"
    {
				(yyval.t_charstring) = (yyvsp[(2) - (3)].t_charstring);
			}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 975 "H248_SDP_parser.y"
    {(yyval.t_charstring) = NULL;}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 976 "H248_SDP_parser.y"
    {
						(yyval.t_charstring) = (yyvsp[(2) - (3)].t_charstring);
					}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 980 "H248_SDP_parser.y"
    {(yyval.t_charstring) = NULL;}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 981 "H248_SDP_parser.y"
    {
						(yyval.t_charstring) = (yyvsp[(2) - (3)].t_charstring);
				 }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 986 "H248_SDP_parser.y"
    {(yyval.t_charstring) = (yyvsp[(2) - (3)].intnum); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 988 "H248_SDP_parser.y"
    {(yyval.t_sdp_origin) = NULL;}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 990 "H248_SDP_parser.y"
    {
					(yyval.t_sdp_origin) = new H248__SDP__Origin();
					(*(yyval.t_sdp_origin)).user__name() = *(yyvsp[(2) - (13)].t_charstring);
					delete (yyvsp[(2) - (13)].t_charstring);
					(*(yyval.t_sdp_origin)).session__id() = *(yyvsp[(4) - (13)].t_charstring);
					delete (yyvsp[(4) - (13)].t_charstring);
					(*(yyval.t_sdp_origin)).session__version() = *(yyvsp[(6) - (13)].t_charstring);
					delete (yyvsp[(6) - (13)].t_charstring);
					(*(yyval.t_sdp_origin)).net__type() = *(yyvsp[(8) - (13)].t_charstring);
					delete (yyvsp[(8) - (13)].t_charstring);
					(*(yyval.t_sdp_origin)).addr__type() = *(yyvsp[(10) - (13)].t_charstring);
					delete (yyvsp[(10) - (13)].t_charstring);
					(*(yyval.t_sdp_origin)).addr() = *(yyvsp[(12) - (13)].t_charstring);
					delete (yyvsp[(12) - (13)].t_charstring);
				}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1011 "H248_SDP_parser.y"
    {(yyval.t_charstring) = new CHARSTRING(1, (const char*)&(yyvsp[(1) - (1)].byte));}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1012 "H248_SDP_parser.y"
    {
				const CHARSTRING& str = *(yyvsp[(1) - (2)].t_charstring) + CHARSTRING(1, (const char*)&(yyvsp[(2) - (2)].byte));
				delete (yyvsp[(1) - (2)].t_charstring);
				(yyval.t_charstring) = new CHARSTRING(str);
			}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1021 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1022 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].number) + 0x30;}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1025 "H248_SDP_parser.y"
    {(yyval.number) = 0;}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1026 "H248_SDP_parser.y"
    {(yyval.number) = (yyvsp[(1) - (1)].number);}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1028 "H248_SDP_parser.y"
    {(yyval.number) = 1;}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1029 "H248_SDP_parser.y"
    {(yyval.number) = 2;}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1030 "H248_SDP_parser.y"
    {(yyval.number) = 3;}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1031 "H248_SDP_parser.y"
    {(yyval.number) = 4;}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1032 "H248_SDP_parser.y"
    {(yyval.number) = 5;}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1033 "H248_SDP_parser.y"
    {(yyval.number) = 6;}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1034 "H248_SDP_parser.y"
    {(yyval.number) = 7;}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1035 "H248_SDP_parser.y"
    {(yyval.number) = 8;}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1036 "H248_SDP_parser.y"
    {(yyval.number) = 9;}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1040 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1041 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1042 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1043 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1044 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 1045 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1046 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1047 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1048 "H248_SDP_parser.y"
    {(yyval.byte) = (yyvsp[(1) - (1)].byte);}
    break;



/* Line 1806 of yacc.c  */
#line 3472 "H248_SDP_parse_.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
		      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1050 "H248_SDP_parser.y"


/*Additional C code*/

