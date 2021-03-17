/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "newcParser.y"


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tree.h"
#include "symbol.h"
#include "newc.h"

int errors = 0;
int symbolIdCounter = 0;

extern Symbol *symbol_table;
Node *ast_tree = NULL;

int yylex();
void yyerror (const char *msg) {
  printf("\nERRO DE SINTAXE\n");
  printf ("%s, linha: %d, coluna: %d\n", msg,line,word_position);
  errors += 1;
} 
void yyerror(const char* msg);
extern int yylex_destroy(void);


#line 97 "newcParser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "newcParser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_TYPE = 4,                       /* TYPE  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_EMPTY = 7,                      /* EMPTY  */
  YYSYMBOL_MAIN = 8,                       /* MAIN  */
  YYSYMBOL_INTEGER = 9,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 10,                   /* DECIMAL  */
  YYSYMBOL_ADD = 11,                       /* ADD  */
  YYSYMBOL_SUB = 12,                       /* SUB  */
  YYSYMBOL_MULT = 13,                      /* MULT  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_SMALLER = 17,                   /* SMALLER  */
  YYSYMBOL_GREATER = 18,                   /* GREATER  */
  YYSYMBOL_SMALLEQ = 19,                   /* SMALLEQ  */
  YYSYMBOL_GREATEQ = 20,                   /* GREATEQ  */
  YYSYMBOL_EQUALS = 21,                    /* EQUALS  */
  YYSYMBOL_DIFFERENT = 22,                 /* DIFFERENT  */
  YYSYMBOL_ASSIGN = 23,                    /* ASSIGN  */
  YYSYMBOL_NEG = 24,                       /* NEG  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_READ = 28,                      /* READ  */
  YYSYMBOL_WRITE = 29,                     /* WRITE  */
  YYSYMBOL_WRITELN = 30,                   /* WRITELN  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_IN = 32,                        /* IN  */
  YYSYMBOL_ISTYPE = 33,                    /* ISTYPE  */
  YYSYMBOL_ADDSET = 34,                    /* ADDSET  */
  YYSYMBOL_REMOVE = 35,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 36,                    /* EXISTS  */
  YYSYMBOL_FORALL = 37,                    /* FORALL  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_STFUNC = 39,                    /* STFUNC  */
  YYSYMBOL_ENDFUNC = 40,                   /* ENDFUNC  */
  YYSYMBOL_PARENL = 41,                    /* PARENL  */
  YYSYMBOL_PARENR = 42,                    /* PARENR  */
  YYSYMBOL_SEMIC = 43,                     /* SEMIC  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_prog = 45,                      /* prog  */
  YYSYMBOL_declarations_list = 46,         /* declarations_list  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_func_dec = 48,                  /* func_dec  */
  YYSYMBOL_params_list = 49,               /* params_list  */
  YYSYMBOL_parameter = 50,                 /* parameter  */
  YYSYMBOL_statement_list = 51,            /* statement_list  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_expression_stmt = 53,           /* expression_stmt  */
  YYSYMBOL_basic_ops = 54,                 /* basic_ops  */
  YYSYMBOL_if_ops = 55,                    /* if_ops  */
  YYSYMBOL_ret_st = 56,                    /* ret_st  */
  YYSYMBOL_var_dec = 57,                   /* var_dec  */
  YYSYMBOL_io_ops = 58,                    /* io_ops  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_math_op = 61,                   /* math_op  */
  YYSYMBOL_set_op = 62,                    /* set_op  */
  YYSYMBOL_operation = 63,                 /* operation  */
  YYSYMBOL_func_call = 64,                 /* func_call  */
  YYSYMBOL_in_set = 65,                    /* in_set  */
  YYSYMBOL_args_list = 66,                 /* args_list  */
  YYSYMBOL_assign_value = 67               /* assign_value  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2014

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    72,    79,    84,    88,    93,   101,   134,
     170,   181,   186,   189,   193,   207,   208,   209,   213,   214,
     215,   216,   217,   221,   225,   226,   227,   248,   252,   253,
     257,   261,   268,   269,   270,   274,   275,   276,   277,   281,
     282,   287,   288,   289,   290,   291,   295,   298,   301,   304,
     307,   312,   313,   314,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   333,   352,   356,   357,
     358,   363
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TYPE", "STRING",
  "CHAR", "EMPTY", "MAIN", "INTEGER", "DECIMAL", "ADD", "SUB", "MULT",
  "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ", "EQUALS",
  "DIFFERENT", "ASSIGN", "NEG", "IF", "ELSE", "FOR", "READ", "WRITE",
  "WRITELN", "RETURN", "IN", "ISTYPE", "ADDSET", "REMOVE", "EXISTS",
  "FORALL", "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR", "SEMIC",
  "$accept", "prog", "declarations_list", "declaration", "func_dec",
  "params_list", "parameter", "statement_list", "statement",
  "expression_stmt", "basic_ops", "if_ops", "ret_st", "var_dec", "io_ops",
  "expression", "term", "math_op", "set_op", "operation", "func_call",
  "in_set", "args_list", "assign_value", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,     3,    16,     4,    22,    23,    41,    71,    92,   -32,
     -38,    78,     1,    81,     1,    60,    17,    65,    68,    75,
      85,    30,    40,    52,    90,    59,    59,   209,   544,   583,
     374,    39,  1485,  1518,  1551,  1584,  1617,  1441,    20,    63,
      70,    73,    99,  1441,   111,   118,   121,   144,   149,    97,
    1454,   622,   661,   700,   739,   778,   817,   856,    37,  1650,
      69,    98,   106,   117,   148,   162,   130,  1441,    67,   179,
     184,   115,   115,     2,  1454,  1454,   185,  1454,     5,     5,
       5,     5,   187,   895,  1441,  1441,  1441,  1441,  1441,  1441,
    1441,  1441,  1441,  1441,  1441,  1441,  1441,   188,   100,   105,
     119,   190,   199,   205,   210,   211,   934,   215,   194,   220,
     235,   236,   237,  1683,   208,   239,   240,   241,   242,   243,
     244,   245,   247,   248,   249,   253,   254,    26,   255,   191,
     260,   973,   257,   264,   266,   267,   268,   269,   -18,   139,
      59,    59,  1012,  1051,    59,   270,  1090,  1129,  1168,  1207,
     505,  1246,  1285,   275,    59,  1324,  1363,  1716,  1748,  1780,
    1812,  1844,  1876,  1454,   262,   274,   276,   277,  1454,  1908,
     278,   279,   280,   283,   287,   288,   140,   141,   142,   168,
     169,  1454,  1402,  1940,   284,   299,   301,   302,   330,   331,
    1454,  1454,  1454,    67,   322,  1454,     5,     5,     5,   325,
    1454,  1454,  1454,  1454,  1454,  1454,  1454,  1454,  1454,  1454,
    1454,  1454,   326,   327,   328,   329,   182,   333,   339,   340,
     341,  1972,   342,   363,   366,   367,   372,   376,   377,   392,
     393,   394,   397,   399,   183,   347,   400,   401,   402,   403,
     405
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -38,   368,   -38,   359,   427,   -25,   -38,   -38,
     -38,   -38,   -38,   146,   -38,   -37,   108,   337,   265,   252,
     373,   180,   256,   409
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    17,    18,    28,    51,    52,
      53,    54,    55,    56,    57,    58,   169,   170,   171,   172,
     173,   174,   100,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    29,    15,    -5,    10,    16,    76,    -5,   184,    14,
     185,   186,   187,    82,   188,   189,    45,    46,    47,     8,
      20,   144,    -2,    -4,     9,     1,     2,    -4,     2,    98,
      97,   176,   177,   178,    16,   179,   180,   104,   105,   -12,
     107,    -7,    69,   -12,   103,    -7,   190,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      27,    71,   -16,   -16,   -16,   -16,   -16,   181,   -16,   -16,
      98,    -6,   176,   177,   178,    -6,   179,   180,    -3,    25,
      83,   -31,    -3,   -16,   -16,   -31,   -16,   -16,   -16,   -16,
     -16,    26,   -16,   -16,   -16,   -16,   -16,    -8,   -13,   -16,
     -16,    -8,   -13,    21,    72,   -70,   -11,    22,   181,   -70,
     -11,    73,   -54,    21,    74,   146,   147,    23,   183,   148,
     158,   159,   160,   -14,   161,   162,   194,   -14,   -10,   155,
      -9,   199,   -10,    12,    -9,    13,    59,    59,   -39,   163,
      75,   -35,   -39,   -69,   212,    59,     7,   -69,   164,   -36,
       7,    59,    77,   213,   214,   215,   168,   127,   217,    78,
     -37,   128,    79,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    59,    99,   -68,   -43,   -42,
     -44,   -68,   -43,   -42,   -44,    80,   108,   108,   108,   108,
      81,   -55,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,   -38,   -40,   -41,    64,    64,
     -40,   -41,   -17,   -17,   -17,   -17,   -17,    64,   -17,   -17,
     127,   -45,   182,    64,   236,   -45,   191,   -65,   106,   113,
     140,   -71,   129,   -17,   -17,   139,   -17,   -17,   -17,   -17,
     -17,   130,   -17,   -17,   -17,   -17,   -17,    64,   131,   -17,
     -17,   -48,   132,   133,    59,    59,    59,   134,   109,   110,
     111,   112,   135,    59,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,   136,   137,   138,
      62,    62,   -49,   -47,   -46,   -63,   -64,   -57,   -58,    62,
     -59,   -60,   -61,    61,    61,    62,   -62,   -67,   -66,   141,
     142,    99,    61,   195,   108,   108,   108,   143,    61,   -56,
     -51,   -52,   -53,   149,   154,   196,   -39,   197,   198,    62,
     -54,   -35,   -36,   101,   102,   -37,    64,    64,    64,   -55,
     -38,   -43,    61,   -42,   -44,    64,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,   -40,   -41,   -65,    60,    60,   221,   234,   235,
     -67,   -71,    11,    19,    60,   237,   218,   219,   220,   -45,
      60,   238,   239,   240,   -48,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,    67,    62,    62,
      62,    63,    63,   145,    60,   -49,   -39,    62,   -47,   -46,
      63,    61,    61,    61,   -63,    68,    63,   -39,   -64,   -57,
      61,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,   -58,   -59,   -60,    65,    65,   -61,
      63,   -62,   -66,   -56,   -51,   -52,    65,   -53,    24,   216,
       0,     0,    65,     0,     0,     0,     0,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
       0,     0,     0,    60,    60,    60,     0,     0,     0,     0,
       0,     0,    60,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,     0,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,    63,
      63,    63,     0,     0,     0,     0,     0,     0,    63,   -28,
     -28,   153,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,    30,    31,    32,
      33,    34,     0,    35,    36,    65,    65,    65,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,    37,    38,
       0,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,    49,    50,    30,    31,    32,    33,
      34,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,     0,     0,    66,    50,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,
       0,     0,   -15,   -15,   -18,   -18,   -18,   -18,   -18,     0,
     -18,   -18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,
       0,   -18,   -18,   -22,   -22,   -22,   -22,   -22,     0,   -22,
     -22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,     0,
     -22,   -22,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,    30,    31,    32,    33,    34,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,     0,     0,
     150,    50,    30,    31,    32,    33,    34,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,    39,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,     0,     0,   151,
      50,    30,    31,    32,    33,    34,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,    39,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,     0,     0,   152,    50,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,    30,    31,    32,
      33,    34,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,   156,    50,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -31,    30,     0,    32,    33,    34,     0,
      35,    36,     0,     0,     0,     0,     0,   157,     0,   158,
     159,   160,     0,   161,   162,    37,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,    46,    47,   163,     0,
       0,     0,    50,     0,     0,     0,     0,   164,   165,   166,
     167,     0,     0,     0,     0,   168,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -42,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -40,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -45,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   192,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   -39,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45
};

static const yytype_int16 yycheck[] =
{
      37,    26,     1,     0,     0,     4,    43,     4,     3,    41,
       5,     6,     7,    50,     9,    10,    34,    35,    36,     3,
       3,    39,     0,     0,     8,     1,     4,     4,     4,     3,
      67,     5,     6,     7,     4,     9,    10,    74,    75,    38,
      77,     0,     3,    42,    42,     4,    41,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
       1,    41,     3,     4,     5,     6,     7,    41,     9,    10,
       3,     0,     5,     6,     7,     4,     9,    10,     0,    39,
      43,     0,     4,    24,    25,     4,    27,    28,    29,    30,
      31,    39,    33,    34,    35,    36,    37,     0,    38,    40,
      41,     4,    42,    38,    41,    38,    38,    42,    41,    42,
      42,    41,    43,    38,    41,   140,   141,    42,     3,   144,
       5,     6,     7,    38,     9,    10,   163,    42,    38,   154,
       0,   168,    42,    41,     4,    43,    28,    29,    38,    24,
      41,    43,    42,    38,   181,    37,     0,    42,    33,    43,
       4,    43,    41,   190,   191,   192,    41,    38,   195,    41,
      43,    42,    41,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,    67,    68,    38,    38,    38,
      38,    42,    42,    42,    42,    41,    78,    79,    80,    81,
      41,    43,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    43,    38,    38,    28,    29,
      42,    42,     3,     4,     5,     6,     7,    37,     9,    10,
      38,    38,    43,    43,    42,    42,    32,    43,    43,    42,
      39,    43,    42,    24,    25,   127,    27,    28,    29,    30,
      31,    42,    33,    34,    35,    36,    37,    67,    43,    40,
      41,    43,    42,    42,   146,   147,   148,    42,    78,    79,
      80,    81,    42,   155,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    42,    42,    42,
      28,    29,    43,    43,    43,    43,    43,    43,    43,    37,
      43,    43,    43,    28,    29,    43,    43,    43,    43,    39,
      43,   193,    37,    41,   196,   197,   198,    43,    43,    43,
      43,    43,    43,    43,    39,    41,    32,    41,    41,    67,
      42,    42,    42,    71,    72,    42,   146,   147,   148,    42,
      42,    32,    67,    32,    32,   155,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    32,    32,    42,    28,    29,    42,    42,    42,
      42,    42,     4,    14,    37,    42,   196,   197,   198,    32,
      43,    42,    42,    42,    42,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   146,   147,
     148,    28,    29,   138,    67,    42,    32,   155,    42,    42,
      37,   146,   147,   148,    42,    41,    43,    43,    42,    42,
     155,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    42,    42,    42,    28,    29,    42,
      67,    42,    42,    42,    42,    42,    37,    42,    21,   193,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,   146,   147,   148,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,   146,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,   155,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,    -1,     9,    10,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,    -1,     9,    10,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    24,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    41,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    45,    46,    47,    48,    57,     3,     8,
       0,    47,    41,    43,    41,     1,     4,    49,    50,    49,
       3,    38,    42,    42,    50,    39,    39,     1,    51,    51,
       3,     4,     5,     6,     7,     9,    10,    24,    25,    27,
      28,    29,    30,    31,    33,    34,    35,    36,    37,    40,
      41,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    40,    23,    41,     3,
      59,    41,    41,    41,    41,    41,    59,    41,    41,    41,
      41,    41,    59,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    32,    59,     3,    60,
      66,    63,    63,    42,    59,    59,    43,    59,    60,    65,
      65,    65,    65,    42,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    38,    42,    42,
      42,    43,    42,    42,    42,    42,    42,    42,    42,    60,
      39,    39,    43,    43,    39,    62,    51,    51,    51,    43,
      40,    40,    40,    26,    39,    51,    40,     3,     5,     6,
       7,     9,    10,    24,    33,    34,    35,    36,    41,    60,
      61,    62,    63,    64,    65,    67,     5,     6,     7,     9,
      10,    41,    43,     3,     3,     5,     6,     7,     9,    10,
      41,    32,    23,    41,    59,    41,    41,    41,    41,    59,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    59,    59,    59,    59,    66,    59,    65,    65,
      65,    42,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    42,    42,    42,    42,    42,    42,
      42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    47,    47,    48,    48,
      49,    49,    49,    49,    50,    51,    51,    51,    52,    52,
      52,    52,    52,    53,    54,    54,    54,    54,    55,    55,
      56,    57,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    65,    66,    66,
      66,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     8,     8,
       3,     1,     0,     1,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     2,     1,     7,     6,     7,     7,    11,
       3,     3,     4,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       1,     4,     4,     4,     1,     1,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     4,     3,     3,     1,
       0,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: declarations_list  */
#line 66 "newcParser.y"
                          {

                          }
#line 2019 "newcParser.tab.c"
    break;

  case 3: /* declarations_list: declarations_list declaration  */
#line 72 "newcParser.y"
                                      {
                                        // $1 -> value = "declarations_list";
                                        // $2 -> value = "declaration";
                                        // $$ = create_node2("declarations_list", $1, $2);
                                        // printf("%s ", $1 -> value);
                                        // printf("%s\n", $2 -> value);
                                      }
#line 2031 "newcParser.tab.c"
    break;

  case 4: /* declarations_list: declaration  */
#line 79 "newcParser.y"
                      {
                        // $1 -> value = "declaration";
                        // $$ = create_node1("declarations_list", $1);
                        // printf("%s\n", $1 -> value);
                      }
#line 2041 "newcParser.tab.c"
    break;

  case 5: /* declarations_list: error  */
#line 84 "newcParser.y"
          {yyerror(yymsg);}
#line 2047 "newcParser.tab.c"
    break;

  case 6: /* declaration: var_dec  */
#line 88 "newcParser.y"
                {
                  // $1 -> value = "var_dec";
                  // $$ = create_node1("declaration", $1);
                  // printf("%s\n", $1 -> value);
                }
#line 2057 "newcParser.tab.c"
    break;

  case 7: /* declaration: func_dec  */
#line 93 "newcParser.y"
                {
                  // $1 -> value = "func_dec";
                  // $$ = create_node1("declaration", $1);
                  // printf("%s\n", $1 -> value);
                }
#line 2067 "newcParser.tab.c"
    break;

  case 8: /* func_dec: TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC  */
#line 101 "newcParser.y"
                                                                        {
                                                                          add_symbol(symbolIdCounter, (yyvsp[-6].str), (yyvsp[-7].str)[0], 'f');
                                                                          symbolIdCounter++;
                                                                          // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node3 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node4 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node5 = (Node *)calloc(1, sizeof(Node));
                                                                          // node0 -> value = $1;
                                                                          // node1 -> value = $2;
                                                                          // node2 -> value = $3;
                                                                          // node3 -> value = $5;
                                                                          // node4 -> value = $6;
                                                                          // node5 -> value = $8;
                                                                          // $4 -> value = "params_list";
                                                                          // $7 -> value = "statement_list";
                                                                          // $$ = create_node8("func_dec", node0, node1, node2, $4, node3, node4, $7, node5);
                                                                          // printf("%s ", $1);
                                                                          // printf("%s ", $2);
                                                                          // printf("%s ", $3);
                                                                          // printf("%s ", $4 -> value);
                                                                          // printf("%s ", $5);
                                                                          // printf("%s ", $6);
                                                                          // printf("%s ", $7 -> value);
                                                                          // printf("%s \n", $8);
                                                                          // free(node0);
                                                                          // free(node1);
                                                                          // free(node2);
                                                                          // free(node3);
                                                                          // free(node4);
                                                                          // free(node5);
                                                                        }
#line 2105 "newcParser.tab.c"
    break;

  case 9: /* func_dec: TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC  */
#line 134 "newcParser.y"
                                                                        {
                                                                          add_symbol(symbolIdCounter, (yyvsp[-6].str), (yyvsp[-7].str)[0], 'f');
                                                                          symbolIdCounter++;
                                                                          // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node3 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node4 = (Node *)calloc(1, sizeof(Node));
                                                                          // Node *node5 = (Node *)calloc(1, sizeof(Node));
                                                                          // node0 -> value = $1;
                                                                          // node1 -> value = $2;
                                                                          // node2 -> value = $3;
                                                                          // node3 -> value = $5;
                                                                          // node4 -> value = $6;
                                                                          // node5 -> value = $8;
                                                                          // $4 -> value = "params_list";
                                                                          // $7 -> value = "statement_list";
                                                                          // $$ = create_node8("func_dec_main", node0, node1, node2, $4, node3, node4, $7, node5);
                                                                          // printf("%s ", $1);
                                                                          // printf("%s ", $2);
                                                                          // printf("%s ", $3);
                                                                          // printf("%s ", $4 -> value);
                                                                          // printf("%s ", $5);
                                                                          // printf("%s ", $6);
                                                                          // printf("%s ", $7 -> value);
                                                                          // printf("%s \n", $8);
                                                                          // free(node0);
                                                                          // free(node1);
                                                                          // free(node2);
                                                                          // free(node3);
                                                                          // free(node4);
                                                                          // free(node5);
                                                                        }
#line 2143 "newcParser.tab.c"
    break;

  case 10: /* params_list: params_list COMMA parameter  */
#line 170 "newcParser.y"
                                  {
                                    // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                    // node0 -> value = $2;
                                    // $1 -> value = "params_list";
                                    // $3 -> value = "parameter";
                                    // $$ = create_node3("params_list", $1, node0, $3);
                                    // printf("%s ", $1 -> value);
                                    // printf("%s ", node0 -> value);
                                    // printf("%s \n", $3 -> value);
                                    // free(node0);
                                  }
#line 2159 "newcParser.tab.c"
    break;

  case 11: /* params_list: parameter  */
#line 181 "newcParser.y"
                                  {
                                    // $1 -> value = "parameter";
                                    // $$ = create_node1("params_list", $1);
                                    // printf("%s\n", $1 -> value);
                                  }
#line 2169 "newcParser.tab.c"
    break;

  case 12: /* params_list: %empty  */
#line 186 "newcParser.y"
                                  {
                                    
                                  }
#line 2177 "newcParser.tab.c"
    break;

  case 13: /* params_list: error  */
#line 189 "newcParser.y"
          {yyerror(yymsg);}
#line 2183 "newcParser.tab.c"
    break;

  case 14: /* parameter: TYPE ID  */
#line 193 "newcParser.y"
                    {
                      // Node *node0 = (Node *)calloc(1, sizeof(Node));
                      // Node *node1 = (Node *)calloc(1, sizeof(Node));
                      // node0 -> value = $1;
                      // node1 -> value = $2;
                      // $$ = create_node2("parameter", node0, node1);
                      // printf("%s ", node0 -> value);
                      // printf("%s\n", node1 -> value);
                      // free(node0);
                      // free(node1);
                    }
#line 2199 "newcParser.tab.c"
    break;

  case 15: /* statement_list: statement_list statement  */
#line 207 "newcParser.y"
                                  {}
#line 2205 "newcParser.tab.c"
    break;

  case 16: /* statement_list: %empty  */
#line 208 "newcParser.y"
                                  {}
#line 2211 "newcParser.tab.c"
    break;

  case 17: /* statement_list: error  */
#line 209 "newcParser.y"
          {yyerror(yymsg);}
#line 2217 "newcParser.tab.c"
    break;

  case 18: /* statement: expression_stmt  */
#line 213 "newcParser.y"
                    {}
#line 2223 "newcParser.tab.c"
    break;

  case 19: /* statement: ret_st  */
#line 214 "newcParser.y"
                    {}
#line 2229 "newcParser.tab.c"
    break;

  case 20: /* statement: var_dec  */
#line 215 "newcParser.y"
                    {}
#line 2235 "newcParser.tab.c"
    break;

  case 21: /* statement: io_ops  */
#line 216 "newcParser.y"
                    {}
#line 2241 "newcParser.tab.c"
    break;

  case 22: /* statement: basic_ops  */
#line 217 "newcParser.y"
                    {}
#line 2247 "newcParser.tab.c"
    break;

  case 23: /* expression_stmt: expression SEMIC  */
#line 221 "newcParser.y"
                          {}
#line 2253 "newcParser.tab.c"
    break;

  case 24: /* basic_ops: if_ops  */
#line 225 "newcParser.y"
                                                                 {}
#line 2259 "newcParser.tab.c"
    break;

  case 25: /* basic_ops: FOR PARENL operation PARENR STFUNC statement_list ENDFUNC  */
#line 226 "newcParser.y"
                                                                 {}
#line 2265 "newcParser.tab.c"
    break;

  case 26: /* basic_ops: FORALL PARENL in_set PARENR set_op SEMIC  */
#line 227 "newcParser.y"
                                                                  {
                                                                    // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                                                    // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                                                    // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                                                    // Node *node3 = (Node *)calloc(1, sizeof(Node));
                                                                    // node0 -> value = $1;
                                                                    // node1 -> value = $2;
                                                                    // node2 -> value = $4;
                                                                    // node3 -> value = $6;
                                                                    // $$ = create_node6("basic_ops", node0, node1, $3, node2, $5, node3);
                                                                    // printf("%s ", node0 -> value);
                                                                    // printf("%s ", node1 -> value);
                                                                    // printf("%s ", $3 -> value);
                                                                    // printf("%s ", node2 -> value);
                                                                    // printf("%s ", $5 -> value);
                                                                    // printf("%s\n", node3 -> value);
                                                                    // free(node0);
                                                                    // free(node1);
                                                                    // free(node2);
                                                                    // free(node3);
                                                                  }
#line 2291 "newcParser.tab.c"
    break;

  case 27: /* basic_ops: FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC  */
#line 248 "newcParser.y"
                                                                 {}
#line 2297 "newcParser.tab.c"
    break;

  case 28: /* if_ops: IF PARENL operation PARENR STFUNC statement_list ENDFUNC  */
#line 252 "newcParser.y"
                                                                                                        {}
#line 2303 "newcParser.tab.c"
    break;

  case 29: /* if_ops: IF PARENL operation PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC  */
#line 253 "newcParser.y"
                                                                                                        {}
#line 2309 "newcParser.tab.c"
    break;

  case 30: /* ret_st: RETURN expression SEMIC  */
#line 257 "newcParser.y"
                                     {printf("RETURN\n");}
#line 2315 "newcParser.tab.c"
    break;

  case 31: /* var_dec: TYPE ID SEMIC  */
#line 261 "newcParser.y"
                    {
                      add_symbol(symbolIdCounter, (yyvsp[-1].str), (yyvsp[-2].str)[0], 'v');
                      symbolIdCounter++;
                    }
#line 2324 "newcParser.tab.c"
    break;

  case 32: /* io_ops: READ PARENL PARENR SEMIC  */
#line 268 "newcParser.y"
                                            {}
#line 2330 "newcParser.tab.c"
    break;

  case 33: /* io_ops: WRITE PARENL expression PARENR SEMIC  */
#line 269 "newcParser.y"
                                            {}
#line 2336 "newcParser.tab.c"
    break;

  case 34: /* io_ops: WRITELN PARENL expression PARENR SEMIC  */
#line 270 "newcParser.y"
                                            {}
#line 2342 "newcParser.tab.c"
    break;

  case 35: /* expression: set_op  */
#line 274 "newcParser.y"
                                  {}
#line 2348 "newcParser.tab.c"
    break;

  case 36: /* expression: operation  */
#line 275 "newcParser.y"
                                  {}
#line 2354 "newcParser.tab.c"
    break;

  case 37: /* expression: func_call  */
#line 276 "newcParser.y"
                                  {}
#line 2360 "newcParser.tab.c"
    break;

  case 38: /* expression: assign_value  */
#line 277 "newcParser.y"
                                  {}
#line 2366 "newcParser.tab.c"
    break;

  case 39: /* term: ID  */
#line 281 "newcParser.y"
                                  {}
#line 2372 "newcParser.tab.c"
    break;

  case 40: /* term: INTEGER  */
#line 282 "newcParser.y"
                                  {
                                    // char *result;
                                    // sprintf(result, "%d", $1);
                                    // $$ -> value = result;
                                  }
#line 2382 "newcParser.tab.c"
    break;

  case 41: /* term: DECIMAL  */
#line 287 "newcParser.y"
                                  {}
#line 2388 "newcParser.tab.c"
    break;

  case 42: /* term: CHAR  */
#line 288 "newcParser.y"
                                  {}
#line 2394 "newcParser.tab.c"
    break;

  case 43: /* term: STRING  */
#line 289 "newcParser.y"
                                  {}
#line 2400 "newcParser.tab.c"
    break;

  case 44: /* term: EMPTY  */
#line 290 "newcParser.y"
                                  {}
#line 2406 "newcParser.tab.c"
    break;

  case 45: /* term: PARENL expression PARENR  */
#line 291 "newcParser.y"
                                  {}
#line 2412 "newcParser.tab.c"
    break;

  case 46: /* math_op: term DIV expression  */
#line 295 "newcParser.y"
                                {
                                  
                                }
#line 2420 "newcParser.tab.c"
    break;

  case 47: /* math_op: term MULT expression  */
#line 298 "newcParser.y"
                                {
                                  
                                }
#line 2428 "newcParser.tab.c"
    break;

  case 48: /* math_op: term ADD expression  */
#line 301 "newcParser.y"
                                {
                                  
                                }
#line 2436 "newcParser.tab.c"
    break;

  case 49: /* math_op: term SUB expression  */
#line 304 "newcParser.y"
                                {
                                  
                                }
#line 2444 "newcParser.tab.c"
    break;

  case 50: /* math_op: term  */
#line 307 "newcParser.y"
                                {
                                }
#line 2451 "newcParser.tab.c"
    break;

  case 51: /* set_op: ADDSET PARENL in_set PARENR  */
#line 312 "newcParser.y"
                                       {}
#line 2457 "newcParser.tab.c"
    break;

  case 52: /* set_op: REMOVE PARENL in_set PARENR  */
#line 313 "newcParser.y"
                                       {}
#line 2463 "newcParser.tab.c"
    break;

  case 53: /* set_op: EXISTS PARENL in_set PARENR  */
#line 314 "newcParser.y"
                                       {}
#line 2469 "newcParser.tab.c"
    break;

  case 55: /* operation: in_set  */
#line 319 "newcParser.y"
                                       {}
#line 2475 "newcParser.tab.c"
    break;

  case 56: /* operation: ISTYPE PARENL expression PARENR  */
#line 320 "newcParser.y"
                                       {}
#line 2481 "newcParser.tab.c"
    break;

  case 57: /* operation: term SMALLER expression  */
#line 321 "newcParser.y"
                                 {}
#line 2487 "newcParser.tab.c"
    break;

  case 58: /* operation: term GREATER expression  */
#line 322 "newcParser.y"
                                 {}
#line 2493 "newcParser.tab.c"
    break;

  case 59: /* operation: term SMALLEQ expression  */
#line 323 "newcParser.y"
                                 {}
#line 2499 "newcParser.tab.c"
    break;

  case 60: /* operation: term GREATEQ expression  */
#line 324 "newcParser.y"
                                 {}
#line 2505 "newcParser.tab.c"
    break;

  case 61: /* operation: term EQUALS expression  */
#line 325 "newcParser.y"
                                 {}
#line 2511 "newcParser.tab.c"
    break;

  case 62: /* operation: term DIFFERENT expression  */
#line 326 "newcParser.y"
                                 {}
#line 2517 "newcParser.tab.c"
    break;

  case 63: /* operation: term OR expression  */
#line 327 "newcParser.y"
                                 {}
#line 2523 "newcParser.tab.c"
    break;

  case 64: /* operation: term AND expression  */
#line 328 "newcParser.y"
                                 {}
#line 2529 "newcParser.tab.c"
    break;

  case 65: /* operation: NEG expression  */
#line 329 "newcParser.y"
                                       {}
#line 2535 "newcParser.tab.c"
    break;

  case 66: /* func_call: ID PARENL args_list PARENR  */
#line 333 "newcParser.y"
                                  {
                                    // Node *node0 = (Node *)calloc(1, sizeof(Node));
                                    // Node *node1 = (Node *)calloc(1, sizeof(Node));
                                    // Node *node2 = (Node *)calloc(1, sizeof(Node));
                                    // node0 -> value = $1;
                                    // node1 -> value = $2;
                                    // node2 -> value = $4;
                                    // $$ = create_node4("basic_ops", node0, node1, $3, node2);
                                    // printf("%s ", node0 -> value);
                                    // printf("%s ", node1 -> value);
                                    // printf("%s ", $3 -> value);
                                    // printf("%s ", node2 -> value);
                                    // free(node0);
                                    // free(node1);
                                    // free(node2);
                                  }
#line 2556 "newcParser.tab.c"
    break;

  case 67: /* in_set: term IN expression  */
#line 352 "newcParser.y"
                                 {}
#line 2562 "newcParser.tab.c"
    break;

  case 68: /* args_list: args_list COMMA term  */
#line 356 "newcParser.y"
                                      {}
#line 2568 "newcParser.tab.c"
    break;

  case 69: /* args_list: term  */
#line 357 "newcParser.y"
                                      {}
#line 2574 "newcParser.tab.c"
    break;

  case 70: /* args_list: %empty  */
#line 358 "newcParser.y"
                                            {}
#line 2580 "newcParser.tab.c"
    break;

  case 71: /* assign_value: ID ASSIGN expression  */
#line 363 "newcParser.y"
                             {}
#line 2586 "newcParser.tab.c"
    break;


#line 2590 "newcParser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 368 "newcParser.y"


int main(int argc, char *argv[]) {

  printf("\n\n#### INICIANDO TESTE ####\n\n");

  FILE *file;

  file = fopen(argv[1], "r");

  yyparse();
  yylex_destroy();

  fclose(file);

  printf("\n\n#### FIM DO ARQUIVO ####\n\n");

  print_symbols();

  return 0;
}
