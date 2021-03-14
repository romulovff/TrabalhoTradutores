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

int errors = 0;

extern Symbol *symbol_table;

void yyerror(const char* msg) {
  printf("%s\n", msg);
  errors += 1;
}
int yylex();
extern int yylex_destroy(void);

Node *ast_tree = NULL;


#line 94 "newcParser.tab.c"

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
  YYSYMBOL_INTEGER = 8,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 9,                    /* DECIMAL  */
  YYSYMBOL_ADD = 10,                       /* ADD  */
  YYSYMBOL_SUB = 11,                       /* SUB  */
  YYSYMBOL_MULT = 12,                      /* MULT  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_SMALLER = 16,                   /* SMALLER  */
  YYSYMBOL_GREATER = 17,                   /* GREATER  */
  YYSYMBOL_SMALLEQ = 18,                   /* SMALLEQ  */
  YYSYMBOL_GREATEQ = 19,                   /* GREATEQ  */
  YYSYMBOL_EQUALS = 20,                    /* EQUALS  */
  YYSYMBOL_DIFFERENT = 21,                 /* DIFFERENT  */
  YYSYMBOL_ASSIGN = 22,                    /* ASSIGN  */
  YYSYMBOL_NEG = 23,                       /* NEG  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_READ = 27,                      /* READ  */
  YYSYMBOL_WRITE = 28,                     /* WRITE  */
  YYSYMBOL_WRITELN = 29,                   /* WRITELN  */
  YYSYMBOL_MAIN = 30,                      /* MAIN  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1976

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

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
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    62,    63,    67,    68,    72,    73,    77,
      78,    79,    83,    87,    88,    92,    93,    94,    95,    96,
     100,   104,   105,   106,   107,   111,   112,   116,   120,   124,
     125,   126,   130,   131,   132,   133,   137,   138,   139,   140,
     141,   142,   143,   147,   148,   149,   150,   151,   155,   156,
     157,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   176,   180,   184,   185,   186,   191
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
  "CHAR", "EMPTY", "INTEGER", "DECIMAL", "ADD", "SUB", "MULT", "DIV", "OR",
  "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ", "EQUALS", "DIFFERENT",
  "ASSIGN", "NEG", "IF", "ELSE", "FOR", "READ", "WRITE", "WRITELN", "MAIN",
  "RETURN", "IN", "ISTYPE", "ADDSET", "REMOVE", "EXISTS", "FORALL",
  "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR", "SEMIC", "$accept",
  "prog", "declarations_list", "declaration", "func_dec", "params_list",
  "parameter", "statement_list", "statement", "expression_stmt",
  "basic_ops", "if_ops", "ret_st", "var_dec", "io_ops", "expression",
  "term", "math_op", "set_op", "operation", "func_call", "in_set",
  "args_list", "assign_value", YY_NULLPTR
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

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     9,    18,    17,    41,    42,    61,   -39,    -5,   -40,
      62,    92,   113,    92,    60,    91,   100,   105,   108,    40,
      37,    38,   110,   503,   503,   542,   581,   374,    76,  1432,
    1466,  1500,  1534,  1568,    75,    44,    45,    46,    47,    63,
      75,    64,    71,    79,    86,    94,   156,   207,   620,   659,
     698,   737,   776,   815,   854,    89,  1602,    97,    98,   118,
     119,   147,   148,   177,    75,    26,   162,   163,   116,   116,
     117,   207,   207,   176,   207,     2,     2,     2,     2,   143,
     893,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,   178,   140,   141,   142,   184,   194,
     201,   197,   203,   932,   204,   217,   208,   209,   210,   211,
    1636,   214,   219,   234,   235,   236,   239,   240,   241,   242,
     243,   244,   245,   247,    19,   248,   253,   257,   971,   254,
     256,   260,   264,   266,   267,   -20,   169,   503,   503,  1010,
    1049,   503,   269,  1088,  1127,  1166,  1205,    66,  1244,  1283,
     259,   503,  1322,  1361,  1670,  1703,  1736,  1769,  1802,  1835,
     207,   270,   272,   273,   274,   207,  1868,   258,   275,   276,
     278,   279,   280,   180,   182,   187,   189,   190,   207,  1400,
    1901,   284,   293,   297,   298,   299,   301,   207,   207,   207,
      26,   292,   207,     2,     2,     2,   320,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   321,
     322,   325,   326,   195,   327,   328,   329,   330,  1934,   331,
     333,   337,   339,   341,   355,   363,   366,   367,   372,   377,
     392,   196,   350,   393,   394,   397,   399,   400
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   -40,   415,   -40,   430,   425,   -23,   -40,   -40,
     -40,   -40,   -40,    20,   -40,   -34,   111,   340,   268,   255,
     376,   183,   261,   412
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    15,    16,    25,    48,    49,
      50,    51,    52,    53,    54,    55,   166,   167,   168,   169,
     170,   171,    97,   172
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    26,    11,     1,    12,   181,    73,   182,   183,   184,
     185,   186,     7,    79,    42,    43,    44,    -2,     9,   141,
       6,     1,    95,     6,   173,   174,   175,   176,   177,    95,
      94,   173,   174,   175,   176,   177,    13,   101,   102,     8,
     104,    -4,    -6,   187,    14,    -4,    -6,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     178,    -5,    -3,    18,   -67,    -5,    -3,   178,   -67,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,    23,    24,    27,    66,
      29,    30,    31,    32,    33,    68,    69,    70,    71,   -25,
     -25,   150,   -25,   -25,   -25,   -25,    14,   -25,    34,   -25,
     -25,   -25,   -25,   -25,    72,    74,   -25,   -25,    41,    42,
      43,    44,    75,   -28,   143,   144,    47,   -28,   145,   180,
      76,   155,   156,   157,   158,   159,   191,    77,   152,    19,
     -11,   196,    80,    20,   -11,    78,    56,    56,   -10,   160,
     -51,   -32,   -10,    19,   209,    56,   -12,    21,    -9,   161,
     -12,    56,    -9,   210,   211,   212,    -7,   165,   214,   100,
      -7,   -33,   -34,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,    56,    96,    -8,   -36,   -66,
     124,    -8,   -36,   -66,   125,   110,   105,   105,   105,   105,
     -52,   -35,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,   179,   -62,   -65,    61,    61,
     154,   -65,   155,   156,   157,   158,   159,    61,   -40,   103,
     -39,   -68,   -40,    61,   -39,   -41,   126,   -37,   -38,   -41,
     160,   -37,   -38,   124,   -42,   136,   127,   233,   -42,   129,
     161,   162,   163,   164,   128,   130,   131,    61,   165,   188,
     132,   133,   134,   135,    56,    56,    56,   -45,   106,   107,
     108,   109,   -46,    56,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,   -44,   -43,   -60,
      59,    59,   -61,   -54,   -55,   -56,   -57,   -58,   -59,    59,
     -64,   -63,   137,    58,    58,    59,   138,   139,   151,   140,
     -51,    96,    58,   -53,   105,   105,   105,   -48,    58,   -49,
     -50,   192,   146,   193,   194,   195,   -36,   -32,   -33,    59,
     -34,   -52,   -35,    98,    99,   -40,    61,    61,    61,   -39,
     -41,   -37,    58,   -38,   -62,    61,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,   218,   231,   232,    57,    57,   -64,   -68,   234,
     235,   236,   237,   -45,    57,   -46,   215,   216,   217,   -44,
      57,   -43,   -42,   -60,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,    64,   -61,    59,    59,
      59,    60,    60,   142,    57,   -54,   -36,    59,   -55,   -56,
      60,    58,    58,    58,   -57,    65,    60,   -36,    10,   -58,
      58,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,   -59,   -63,   -53,    62,    62,   -48,
      60,   -49,   -50,    17,    22,     0,    62,     0,     0,     0,
       0,   213,    62,     0,     0,     0,     0,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
       0,     0,     0,     0,     0,     0,    62,     0,     0,     0,
       0,     0,     0,    57,    57,    57,     0,     0,     0,     0,
       0,     0,    57,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,     0,     0,     0,     0,     0,     0,    60,
      60,    60,     0,     0,     0,     0,   -14,   -14,    60,   -14,
     -14,   -14,   -14,     0,   -14,     0,   -14,   -14,   -14,   -14,
     -14,     0,     0,   -14,   -14,    27,    28,    29,    30,    31,
      32,    33,     0,     0,     0,    62,    62,    62,     0,     0,
       0,     0,     0,     0,    62,    34,    35,     0,    36,    37,
      38,    39,     0,    40,     0,    41,    42,    43,    44,    45,
       0,     0,    46,    47,    27,    28,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,    36,    37,    38,
      39,     0,    40,     0,    41,    42,    43,    44,    45,     0,
       0,    63,    47,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,   -13,     0,   -13,   -13,   -13,   -13,   -13,     0,     0,
     -13,   -13,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -15,   -15,     0,   -15,   -15,   -15,   -15,     0,
     -15,     0,   -15,   -15,   -15,   -15,   -15,     0,     0,   -15,
     -15,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,     0,   -21,   -21,   -21,   -21,     0,   -21,     0,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -16,
     -16,     0,   -16,   -16,   -16,   -16,     0,   -16,     0,   -16,
     -16,   -16,   -16,   -16,     0,     0,   -16,   -16,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -17,   -17,
       0,   -17,   -17,   -17,   -17,     0,   -17,     0,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,   -17,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -18,   -18,     0,
     -18,   -18,   -18,   -18,     0,   -18,     0,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,   -18,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -20,   -20,     0,   -20,
     -20,   -20,   -20,     0,   -20,     0,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,   -20,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,   -27,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -29,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,    36,    37,    38,    39,     0,    40,
       0,    41,    42,    43,    44,    45,     0,     0,   147,    47,
      27,    28,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,    36,    37,    38,    39,     0,    40,     0,
      41,    42,    43,    44,    45,     0,     0,   148,    47,    27,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,    36,    37,    38,    39,     0,    40,     0,    41,
      42,    43,    44,    45,     0,     0,   149,    47,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -23,   -23,
       0,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -22,   -22,     0,
     -22,   -22,   -22,   -22,     0,   -22,     0,   -22,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -22,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -24,    27,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,    36,    37,
      38,    39,     0,    40,     0,    41,    42,    43,    44,    45,
       0,     0,   153,    47,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -39,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -42,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,   190,   -36,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -42
};

static const yytype_int16 yycheck[] =
{
      34,    24,    41,     4,    43,     3,    40,     5,     6,     7,
       8,     9,     3,    47,    34,    35,    36,     0,     0,    39,
       0,     4,     3,     3,     5,     6,     7,     8,     9,     3,
      64,     5,     6,     7,     8,     9,    41,    71,    72,    30,
      74,     0,     0,    41,     4,     4,     4,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      41,     0,     0,     3,    38,     4,     4,    41,    42,     3,
       4,     5,     6,     7,     8,     9,    39,    39,     3,     3,
       5,     6,     7,     8,     9,    41,    41,    41,    41,    23,
      24,    25,    26,    27,    28,    29,     4,    31,    23,    33,
      34,    35,    36,    37,    41,    41,    40,    41,    33,    34,
      35,    36,    41,     0,   137,   138,    41,     4,   141,     3,
      41,     5,     6,     7,     8,     9,   160,    41,   151,    38,
      38,   165,    43,    42,    42,    41,    25,    26,    38,    23,
      43,    43,    42,    38,   178,    34,    38,    42,    38,    33,
      42,    40,    42,   187,   188,   189,     0,    41,   192,    42,
       4,    43,    43,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,    64,    65,     0,    38,    38,
      38,     4,    42,    42,    42,    42,    75,    76,    77,    78,
      43,    43,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    43,    43,    38,    25,    26,
       3,    42,     5,     6,     7,     8,     9,    34,    38,    43,
      38,    43,    42,    40,    42,    38,    42,    38,    38,    42,
      23,    42,    42,    38,    38,   124,    42,    42,    42,    42,
      33,    34,    35,    36,    43,    42,    42,    64,    41,    32,
      42,    42,    42,    42,   143,   144,   145,    43,    75,    76,
      77,    78,    43,   152,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    43,    43,    43,
      25,    26,    43,    43,    43,    43,    43,    43,    43,    34,
      43,    43,    39,    25,    26,    40,    39,    43,    39,    43,
      42,   190,    34,    43,   193,   194,   195,    43,    40,    43,
      43,    41,    43,    41,    41,    41,    32,    42,    42,    64,
      42,    42,    42,    68,    69,    32,   143,   144,   145,    32,
      32,    32,    64,    32,    42,   152,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    42,    42,    42,    25,    26,    42,    42,    42,
      42,    42,    42,    42,    34,    42,   193,   194,   195,    42,
      40,    42,    32,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    42,   143,   144,
     145,    25,    26,   135,    64,    42,    32,   152,    42,    42,
      34,   143,   144,   145,    42,    41,    40,    43,     3,    42,
     152,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    42,    42,    42,    25,    26,    42,
      64,    42,    42,    13,    19,    -1,    34,    -1,    -1,    -1,
      -1,   190,    40,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,    -1,    -1,    -1,    -1,    23,    24,   152,    26,
      27,    28,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    23,    24,    -1,    26,    27,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      26,    27,    28,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      26,    27,    28,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    45,    46,    47,    48,    57,     3,    30,     0,
      47,    41,    43,    41,     4,    49,    50,    49,     3,    38,
      42,    42,    50,    39,    39,    51,    51,     3,     4,     5,
       6,     7,     8,     9,    23,    24,    26,    27,    28,    29,
      31,    33,    34,    35,    36,    37,    40,    41,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    67,    40,    22,    41,     3,    59,    41,    41,
      41,    41,    41,    59,    41,    41,    41,    41,    41,    59,
      43,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    32,    59,     3,    60,    66,    63,    63,
      42,    59,    59,    43,    59,    60,    65,    65,    65,    65,
      42,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    38,    42,    42,    42,    43,    42,
      42,    42,    42,    42,    42,    42,    60,    39,    39,    43,
      43,    39,    62,    51,    51,    51,    43,    40,    40,    40,
      25,    39,    51,    40,     3,     5,     6,     7,     8,     9,
      23,    33,    34,    35,    36,    41,    60,    61,    62,    63,
      64,    65,    67,     5,     6,     7,     8,     9,    41,    43,
       3,     3,     5,     6,     7,     8,     9,    41,    32,    22,
      41,    59,    41,    41,    41,    41,    59,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    59,
      59,    59,    59,    66,    59,    65,    65,    65,    42,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    42,    42,    42,    42,    42,    42,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      53,    54,    54,    54,    54,    55,    55,    56,    57,    58,
      58,    58,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    61,    61,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    65,    66,    66,    66,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     8,     8,     3,
       1,     0,     2,     2,     0,     1,     1,     1,     1,     1,
       2,     1,     7,     6,     7,     7,    11,     3,     3,     4,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     4,     4,
       4,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     4,     3,     3,     1,     0,     3
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
#line 58 "newcParser.y"
                          { ast_tree = (yyvsp[0].ast); }
#line 2000 "newcParser.tab.c"
    break;

  case 3: /* declarations_list: declarations_list declaration  */
#line 62 "newcParser.y"
                                      {}
#line 2006 "newcParser.tab.c"
    break;

  case 4: /* declarations_list: declaration  */
#line 63 "newcParser.y"
                      {}
#line 2012 "newcParser.tab.c"
    break;

  case 5: /* declaration: var_dec  */
#line 67 "newcParser.y"
                {}
#line 2018 "newcParser.tab.c"
    break;

  case 6: /* declaration: func_dec  */
#line 68 "newcParser.y"
                {}
#line 2024 "newcParser.tab.c"
    break;

  case 7: /* func_dec: TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC  */
#line 72 "newcParser.y"
                                                                       {printf("FUNCTION DECLARATION\n");}
#line 2030 "newcParser.tab.c"
    break;

  case 8: /* func_dec: TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC  */
#line 73 "newcParser.y"
                                                                       {printf("MAIN DECLARATION\n");}
#line 2036 "newcParser.tab.c"
    break;

  case 9: /* params_list: params_list COMMA parameter  */
#line 77 "newcParser.y"
                                  {printf("PARAMETER LIST\n"); add_symbol(1, "nome", 't', 't'); print_symbols();}
#line 2042 "newcParser.tab.c"
    break;

  case 10: /* params_list: parameter  */
#line 78 "newcParser.y"
                                  {printf("PARAMETER LIST\n");}
#line 2048 "newcParser.tab.c"
    break;

  case 11: /* params_list: %empty  */
#line 79 "newcParser.y"
                                  {}
#line 2054 "newcParser.tab.c"
    break;

  case 12: /* parameter: TYPE ID  */
#line 83 "newcParser.y"
                    {printf("PARAMETER\n");}
#line 2060 "newcParser.tab.c"
    break;

  case 13: /* statement_list: statement_list statement  */
#line 87 "newcParser.y"
                                  {printf("STATEMENT\n");}
#line 2066 "newcParser.tab.c"
    break;

  case 14: /* statement_list: %empty  */
#line 88 "newcParser.y"
                                  {}
#line 2072 "newcParser.tab.c"
    break;

  case 15: /* statement: expression_stmt  */
#line 92 "newcParser.y"
                    {}
#line 2078 "newcParser.tab.c"
    break;

  case 16: /* statement: ret_st  */
#line 93 "newcParser.y"
                    {}
#line 2084 "newcParser.tab.c"
    break;

  case 17: /* statement: var_dec  */
#line 94 "newcParser.y"
                    {}
#line 2090 "newcParser.tab.c"
    break;

  case 18: /* statement: io_ops  */
#line 95 "newcParser.y"
                    {}
#line 2096 "newcParser.tab.c"
    break;

  case 19: /* statement: basic_ops  */
#line 96 "newcParser.y"
                    {}
#line 2102 "newcParser.tab.c"
    break;

  case 20: /* expression_stmt: expression SEMIC  */
#line 100 "newcParser.y"
                          {}
#line 2108 "newcParser.tab.c"
    break;

  case 21: /* basic_ops: if_ops  */
#line 104 "newcParser.y"
                                                                 {}
#line 2114 "newcParser.tab.c"
    break;

  case 22: /* basic_ops: FOR PARENL operation PARENR STFUNC statement_list ENDFUNC  */
#line 105 "newcParser.y"
                                                                 {}
#line 2120 "newcParser.tab.c"
    break;

  case 23: /* basic_ops: FORALL PARENL in_set PARENR set_op SEMIC  */
#line 106 "newcParser.y"
                                                                 {}
#line 2126 "newcParser.tab.c"
    break;

  case 24: /* basic_ops: FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC  */
#line 107 "newcParser.y"
                                                                 {}
#line 2132 "newcParser.tab.c"
    break;

  case 25: /* if_ops: IF PARENL operation PARENR STFUNC statement_list ENDFUNC  */
#line 111 "newcParser.y"
                                                                                                        {}
#line 2138 "newcParser.tab.c"
    break;

  case 26: /* if_ops: IF PARENL operation PARENR STFUNC statement_list ENDFUNC ELSE STFUNC statement_list ENDFUNC  */
#line 112 "newcParser.y"
                                                                                                        {}
#line 2144 "newcParser.tab.c"
    break;

  case 27: /* ret_st: RETURN expression SEMIC  */
#line 116 "newcParser.y"
                                     {printf("RETURN STATEMENT\n");}
#line 2150 "newcParser.tab.c"
    break;

  case 28: /* var_dec: TYPE ID SEMIC  */
#line 120 "newcParser.y"
                    {printf("VARIABLE DECLARATION\n");}
#line 2156 "newcParser.tab.c"
    break;

  case 29: /* io_ops: READ PARENL PARENR SEMIC  */
#line 124 "newcParser.y"
                                        {printf("READ OPERATION\n");}
#line 2162 "newcParser.tab.c"
    break;

  case 30: /* io_ops: WRITE PARENL expression PARENR SEMIC  */
#line 125 "newcParser.y"
                                            {printf("WRITE OPERATION\n");}
#line 2168 "newcParser.tab.c"
    break;

  case 31: /* io_ops: WRITELN PARENL expression PARENR SEMIC  */
#line 126 "newcParser.y"
                                            {printf("WRITELN OPERATION\n");}
#line 2174 "newcParser.tab.c"
    break;

  case 32: /* expression: set_op  */
#line 130 "newcParser.y"
                                  {}
#line 2180 "newcParser.tab.c"
    break;

  case 33: /* expression: operation  */
#line 131 "newcParser.y"
                                  {}
#line 2186 "newcParser.tab.c"
    break;

  case 34: /* expression: func_call  */
#line 132 "newcParser.y"
                                  {}
#line 2192 "newcParser.tab.c"
    break;

  case 35: /* expression: assign_value  */
#line 133 "newcParser.y"
                                  {}
#line 2198 "newcParser.tab.c"
    break;

  case 36: /* term: ID  */
#line 137 "newcParser.y"
                                  {}
#line 2204 "newcParser.tab.c"
    break;

  case 37: /* term: INTEGER  */
#line 138 "newcParser.y"
                                  {}
#line 2210 "newcParser.tab.c"
    break;

  case 38: /* term: DECIMAL  */
#line 139 "newcParser.y"
                                  {}
#line 2216 "newcParser.tab.c"
    break;

  case 39: /* term: CHAR  */
#line 140 "newcParser.y"
                                  {}
#line 2222 "newcParser.tab.c"
    break;

  case 40: /* term: STRING  */
#line 141 "newcParser.y"
                                  {}
#line 2228 "newcParser.tab.c"
    break;

  case 41: /* term: EMPTY  */
#line 142 "newcParser.y"
                                  {}
#line 2234 "newcParser.tab.c"
    break;

  case 42: /* term: PARENL expression PARENR  */
#line 143 "newcParser.y"
                                  {}
#line 2240 "newcParser.tab.c"
    break;

  case 43: /* math_op: term DIV expression  */
#line 147 "newcParser.y"
                                {printf("DIV OPERATION\n");}
#line 2246 "newcParser.tab.c"
    break;

  case 44: /* math_op: term MULT expression  */
#line 148 "newcParser.y"
                                {printf("MULT OPERATION\n");}
#line 2252 "newcParser.tab.c"
    break;

  case 45: /* math_op: term ADD expression  */
#line 149 "newcParser.y"
                                {printf("ADD OPERATION\n");}
#line 2258 "newcParser.tab.c"
    break;

  case 46: /* math_op: term SUB expression  */
#line 150 "newcParser.y"
                                {printf("SUB OPERATION\n");}
#line 2264 "newcParser.tab.c"
    break;

  case 47: /* math_op: term  */
#line 151 "newcParser.y"
                                {}
#line 2270 "newcParser.tab.c"
    break;

  case 48: /* set_op: ADDSET PARENL in_set PARENR  */
#line 155 "newcParser.y"
                                       {}
#line 2276 "newcParser.tab.c"
    break;

  case 49: /* set_op: REMOVE PARENL in_set PARENR  */
#line 156 "newcParser.y"
                                       {}
#line 2282 "newcParser.tab.c"
    break;

  case 50: /* set_op: EXISTS PARENL in_set PARENR  */
#line 157 "newcParser.y"
                                       {}
#line 2288 "newcParser.tab.c"
    break;

  case 52: /* operation: in_set  */
#line 162 "newcParser.y"
                                       {}
#line 2294 "newcParser.tab.c"
    break;

  case 53: /* operation: ISTYPE PARENL expression PARENR  */
#line 163 "newcParser.y"
                                       {}
#line 2300 "newcParser.tab.c"
    break;

  case 54: /* operation: term SMALLER expression  */
#line 164 "newcParser.y"
                                 {}
#line 2306 "newcParser.tab.c"
    break;

  case 55: /* operation: term GREATER expression  */
#line 165 "newcParser.y"
                                 {}
#line 2312 "newcParser.tab.c"
    break;

  case 56: /* operation: term SMALLEQ expression  */
#line 166 "newcParser.y"
                                 {}
#line 2318 "newcParser.tab.c"
    break;

  case 57: /* operation: term GREATEQ expression  */
#line 167 "newcParser.y"
                                 {}
#line 2324 "newcParser.tab.c"
    break;

  case 58: /* operation: term EQUALS expression  */
#line 168 "newcParser.y"
                                 {}
#line 2330 "newcParser.tab.c"
    break;

  case 59: /* operation: term DIFFERENT expression  */
#line 169 "newcParser.y"
                                 {}
#line 2336 "newcParser.tab.c"
    break;

  case 60: /* operation: term OR expression  */
#line 170 "newcParser.y"
                                 {}
#line 2342 "newcParser.tab.c"
    break;

  case 61: /* operation: term AND expression  */
#line 171 "newcParser.y"
                                 {}
#line 2348 "newcParser.tab.c"
    break;

  case 62: /* operation: NEG expression  */
#line 172 "newcParser.y"
                                       {}
#line 2354 "newcParser.tab.c"
    break;

  case 63: /* func_call: ID PARENL args_list PARENR  */
#line 176 "newcParser.y"
                                 {}
#line 2360 "newcParser.tab.c"
    break;

  case 64: /* in_set: term IN expression  */
#line 180 "newcParser.y"
                                 {}
#line 2366 "newcParser.tab.c"
    break;

  case 65: /* args_list: args_list COMMA term  */
#line 184 "newcParser.y"
                                      {}
#line 2372 "newcParser.tab.c"
    break;

  case 66: /* args_list: term  */
#line 185 "newcParser.y"
                                      {}
#line 2378 "newcParser.tab.c"
    break;

  case 67: /* args_list: %empty  */
#line 186 "newcParser.y"
                                            {}
#line 2384 "newcParser.tab.c"
    break;

  case 68: /* assign_value: ID ASSIGN expression  */
#line 191 "newcParser.y"
                             {printf("ASSIGN EXPRESSION\n");}
#line 2390 "newcParser.tab.c"
    break;


#line 2394 "newcParser.tab.c"

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

#line 196 "newcParser.y"

int main(int argc, char *argv[]) {
  Node *tree;

  tree = create_node("value", 'I');
  tree = add_node_left("value", 'S', tree);
  tree -> left = add_node_left("value", 'I', tree -> left);
  tree -> left = add_node_middle("value", 'T', tree -> left);
  tree -> left = add_node_right("value", 'C', tree -> left);
  print_tree(tree);

  // add_symbol(1, "nome", 't', 't');
  // add_symbol(2, "nome", 't', 't');
  // add_symbol(1, "nome", 't', 't');
  // print_symbols();

  printf("\n\n#### INICIANDO TESTE ####\n\n");

  FILE *file;

  file = fopen(argv[1], "r");

  yyparse();
  yylex_destroy();

  fclose(file);

  printf("\n\n#### FIM DO ARQUIVO ####\n\n");

  return 0;
}
