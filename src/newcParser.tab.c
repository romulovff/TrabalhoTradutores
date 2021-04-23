/* A Bison parser, made by GNU Bison 3.7.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

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
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include "tree.h"
#include "symbol.h"
#include "newc.h"

int errors = 0;
int semanticErrors = 0;
int symbolIdCounter = 0;
int scope = 0;
int parameters = 0;
int args_params = 0;
int has_main = 0;

extern Symbol *symbol_table;
Node *ast_tree = NULL;
extern Scope *stack_scope;

int yylex();
void yyerror (const char *msg) {
  printf("\nERRO DE SINTAXE\n");
  printf ("%s, linha: %d, coluna: %d\n", msg,line,word_position);
  errors += 1;
}
void yyerror(const char* msg);
extern int yylex_destroy(void);
extern FILE *yyin;


#line 105 "newcParser.tab.c"

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
  YYSYMBOL_ERRORTOKEN = 9,                 /* ERRORTOKEN  */
  YYSYMBOL_INTEGER = 10,                   /* INTEGER  */
  YYSYMBOL_DECIMAL = 11,                   /* DECIMAL  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_SUB = 13,                       /* SUB  */
  YYSYMBOL_MULT = 14,                      /* MULT  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_SMALLER = 18,                   /* SMALLER  */
  YYSYMBOL_GREATER = 19,                   /* GREATER  */
  YYSYMBOL_SMALLEQ = 20,                   /* SMALLEQ  */
  YYSYMBOL_GREATEQ = 21,                   /* GREATEQ  */
  YYSYMBOL_EQUALS = 22,                    /* EQUALS  */
  YYSYMBOL_DIFFERENT = 23,                 /* DIFFERENT  */
  YYSYMBOL_ASSIGN = 24,                    /* ASSIGN  */
  YYSYMBOL_NEG = 25,                       /* NEG  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_READ = 29,                      /* READ  */
  YYSYMBOL_WRITE = 30,                     /* WRITE  */
  YYSYMBOL_WRITELN = 31,                   /* WRITELN  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_IN = 33,                        /* IN  */
  YYSYMBOL_ISTYPE = 34,                    /* ISTYPE  */
  YYSYMBOL_ADDSET = 35,                    /* ADDSET  */
  YYSYMBOL_REMOVE = 36,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 37,                    /* EXISTS  */
  YYSYMBOL_FORALL = 38,                    /* FORALL  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_STFUNC = 40,                    /* STFUNC  */
  YYSYMBOL_ENDFUNC = 41,                   /* ENDFUNC  */
  YYSYMBOL_PARENL = 42,                    /* PARENL  */
  YYSYMBOL_PARENR = 43,                    /* PARENR  */
  YYSYMBOL_SEMIC = 44,                     /* SEMIC  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_declarations_list = 47,         /* declarations_list  */
  YYSYMBOL_declaration = 48,               /* declaration  */
  YYSYMBOL_func_dec = 49,                  /* func_dec  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_params_list = 54,               /* params_list  */
  YYSYMBOL_parameter = 55,                 /* parameter  */
  YYSYMBOL_statement_list = 56,            /* statement_list  */
  YYSYMBOL_statement = 57,                 /* statement  */
  YYSYMBOL_expression_statement = 58,      /* expression_statement  */
  YYSYMBOL_basic_ops = 59,                 /* basic_ops  */
  YYSYMBOL_for_statement = 60,             /* for_statement  */
  YYSYMBOL_forall_statement = 61,          /* forall_statement  */
  YYSYMBOL_for_body = 62,                  /* for_body  */
  YYSYMBOL_if_ops = 63,                    /* if_ops  */
  YYSYMBOL_if_statement = 64,              /* if_statement  */
  YYSYMBOL_else_statement = 65,            /* else_statement  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_67_6 = 67,                      /* $@6  */
  YYSYMBOL_ret_st = 68,                    /* ret_st  */
  YYSYMBOL_var_dec = 69,                   /* var_dec  */
  YYSYMBOL_io_ops = 70,                    /* io_ops  */
  YYSYMBOL_expression = 71,                /* expression  */
  YYSYMBOL_term = 72,                      /* term  */
  YYSYMBOL_math_op = 73,                   /* math_op  */
  YYSYMBOL_math_op_muldiv = 74,            /* math_op_muldiv  */
  YYSYMBOL_set_op = 75,                    /* set_op  */
  YYSYMBOL_operation = 76,                 /* operation  */
  YYSYMBOL_func_call = 77,                 /* func_call  */
  YYSYMBOL_in_set = 78,                    /* in_set  */
  YYSYMBOL_args_list = 79,                 /* args_list  */
  YYSYMBOL_assign_value = 80               /* assign_value  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   2754

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    88,    91,    94,   102,   105,   111,   114,
     111,   121,   124,   121,   136,   139,   142,   145,   153,   161,
     164,   167,   173,   176,   179,   182,   185,   191,   197,   200,
     204,   208,   215,   223,   231,   234,   240,   244,   248,   254,
     262,   262,   271,   271,   283,   289,   296,   299,   302,   305,
     311,   314,   317,   320,   326,   337,   340,   343,   346,   349,
     352,   355,   361,   364,   367,   373,   376,   379,   385,   388,
     391,   397,   400,   403,   406,   409,   412,   415,   418,   421,
     424,   427,   430,   436,   459,   465,   469,   473,   480
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
  "CHAR", "EMPTY", "MAIN", "ERRORTOKEN", "INTEGER", "DECIMAL", "ADD",
  "SUB", "MULT", "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ",
  "GREATEQ", "EQUALS", "DIFFERENT", "ASSIGN", "NEG", "IF", "ELSE", "FOR",
  "READ", "WRITE", "WRITELN", "RETURN", "IN", "ISTYPE", "ADDSET", "REMOVE",
  "EXISTS", "FORALL", "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR",
  "SEMIC", "$accept", "program", "declarations_list", "declaration",
  "func_dec", "$@1", "$@2", "$@3", "$@4", "params_list", "parameter",
  "statement_list", "statement", "expression_statement", "basic_ops",
  "for_statement", "forall_statement", "for_body", "if_ops",
  "if_statement", "else_statement", "$@5", "$@6", "ret_st", "var_dec",
  "io_ops", "expression", "term", "math_op", "math_op_muldiv", "set_op",
  "operation", "func_call", "in_set", "args_list", "assign_value", YY_NULLPTR
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      64,   105,    13,     2,   108,   152,   153,   154,   137,   -33,
     -72,   171,     4,   178,    10,    11,    11,    86,    28,    99,
     145,   165,   166,    32,    -3,    33,   167,   665,   728,   770,
     770,   850,   890,   930,  2159,    48,   453,  2192,  2225,  2258,
    2291,  2324,   531,    34,    45,    75,    84,    85,   531,    95,
      98,   122,   128,   134,   207,   613,   970,  1010,  1050,   151,
      -7,  1090,  1130,  1170,  1210,  1250,    71,  2357,    -9,    69,
     148,   149,   150,   169,   177,   212,   531,   291,   182,   187,
     138,   485,   125,   613,   613,   188,   613,   273,   273,   273,
     273,   190,   770,   770,   210,   770,  1290,  1330,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   358,   358,   358,
     358,   230,   175,   176,   225,   224,   531,   531,   226,   233,
     247,   250,   260,  1370,   266,   281,   276,   289,   295,   302,
    2390,  1410,  1450,  1490,  1530,   308,   309,   315,   316,   328,
     352,   353,   355,   362,    89,   215,   248,   274,   293,   398,
     366,  1570,   613,   613,   277,  1610,   367,   382,   388,   391,
     392,   393,   394,    83,  1650,  1690,   810,   227,   396,   399,
    1730,  1770,  1810,  1850,  1890,  2090,   296,  1930,   770,  1970,
    2010,  2423,  2455,  2487,  2519,  2551,  2583,  2615,   613,   402,
     405,   408,   413,   613,  2647,    73,     5,   416,   419,   421,
     435,   436,   252,   292,   327,   332,   338,   339,   613,  2050,
    2679,   397,   325,   428,   447,   451,   452,   454,   465,   613,
     329,   336,   439,   499,   534,   581,   706,   613,   613,   613,
     291,   466,   613,   273,   273,   273,   480,   613,   613,   613,
     613,   613,   613,   613,   613,   418,   418,   418,   418,   481,
    2128,   487,   496,   501,   507,   340,   508,   509,   510,   511,
    2711,   512,   514,   515,   517,   520,   526,   527,   532,    12,
     238,   379,   594,   779,   815,   819,   613,   855,   859,   895,
     899,   935,   345,   475,   711,   536,   547,   549,   554,   555,
     558,   939
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   522,   -72,   -72,   -72,   -72,   -72,   556,
     505,   -23,   -61,   -71,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   385,   -72,   -42,   -10,   483,   141,
     314,   401,   529,   223,   344,   611
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    15,    29,    16,    30,    19,
      20,    32,    56,    57,    58,    59,    60,   118,    61,    62,
     174,   175,   176,    63,    64,    65,    66,   194,   195,   196,
     197,   198,   199,   200,   114,   201
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    96,    10,   107,   108,    -8,    85,    33,    -8,    14,
     117,   -11,    17,    91,   -11,    18,     8,   -64,   -64,   247,
     248,     9,    67,    67,   -54,   -54,   -54,   -54,    50,    51,
      52,    22,    67,    93,   111,   -71,    18,    27,    67,   211,
     120,   121,   122,    -8,   124,   152,   153,    -8,   -64,   -11,
     -16,    78,    67,   -11,   -16,   -54,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     1,    67,   113,     2,   131,
     132,    67,   134,    28,   211,   211,    80,   125,   125,   125,
     125,   -64,   -64,   109,   110,   245,   246,    81,    67,    67,
      67,    67,    67,    67,    67,    67,    67,   144,   144,   147,
     148,   -67,   -67,   -67,   -67,    -5,    67,    67,    -2,    -5,
     168,   169,     2,   -64,   177,    97,   -71,    82,   -33,   -33,
     -33,    67,    67,   -33,    67,   -17,    83,    84,   181,   -17,
     182,   183,   184,   -67,   185,   186,   187,    86,    23,   167,
      87,   210,    24,   182,   183,   184,   231,   185,   186,   187,
     188,   236,    -4,    -7,    -6,   179,    -4,    -7,    -6,   189,
     190,   191,   192,   188,    88,    67,   249,   193,   119,    67,
      89,    -3,   189,    69,    69,    -3,    90,   251,   -45,    12,
     193,    13,   -45,    69,   -15,   252,   253,   254,   -15,    69,
     256,    92,   -50,   -51,   -52,   261,   262,   263,   264,   265,
     266,   267,   268,    69,    23,   -18,   -14,   -10,    25,   -18,
     -14,   -10,   -13,   -72,   -54,   -86,   -13,    69,   -54,   -86,
     113,   -53,    69,   125,   125,   125,   209,   -62,   -62,   109,
     110,   -82,   123,   130,   290,   277,   277,   280,   281,    69,
      69,    69,    69,    69,    69,    69,    69,    69,   145,   146,
     -58,   -58,   -58,   -58,   133,    73,    73,    69,    69,   -62,
     -63,   -63,   109,   110,   149,    73,   -85,   151,   150,   154,
     -85,    73,    69,    69,   -88,    69,   212,   155,   213,   214,
     215,   -58,   216,   217,   218,    73,   -66,   -66,   -66,   -66,
     156,   -58,   -63,   157,   112,   -58,   202,   203,   204,    73,
     205,   206,   207,   158,    73,   -65,   -65,   -65,   -65,   159,
     126,   127,   128,   129,   228,   219,    69,   -32,   -66,   160,
      69,    73,    73,    73,    73,    73,    73,    73,    73,    73,
     -87,   -57,   161,   208,   -87,   -57,   178,   -65,   162,    73,
      73,   -54,   -54,   -54,   -54,   163,    70,    70,   -58,   -58,
     -58,   -58,   -80,   -81,    73,    73,    70,    73,   -54,   -74,
     -75,   220,    70,   221,   222,   223,   -59,   224,   225,   226,
     -59,   -61,   -76,   -54,    94,   -61,    70,   -55,   -56,   149,
     -58,   -55,   -56,   285,   -60,     7,   278,   279,   -60,     7,
      70,   -57,   -57,   -57,   -57,    70,   -77,   -78,    73,   -79,
     227,   112,    73,   202,   203,   204,   -84,   205,   206,   207,
     -83,   170,    70,    70,    70,    70,    70,    70,    70,    70,
      70,   269,   -57,   270,   271,   272,   171,   273,   274,   275,
      70,    70,   172,    71,    71,   -73,   -68,   -69,   -70,   -35,
     208,   250,   -34,    71,   232,    70,    70,   233,    70,    71,
     234,   -57,   -57,   -57,   -57,   235,   257,   258,   259,   -50,
     276,   -58,   -51,    71,   -52,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,    71,   -72,   -53,
     -57,   115,    71,   -57,   -59,   -61,   -58,   -55,    34,    70,
      36,    37,    38,    70,    39,    40,    41,   -58,   -56,    71,
      71,    71,    71,    71,    71,    71,    71,    71,   -60,   -82,
      42,   -59,   -59,   -59,   -59,    68,    68,    71,    71,    49,
      50,    51,    52,   260,   282,    68,    11,    55,    26,   116,
     283,    68,    71,    71,    34,    71,    36,    37,    38,   284,
      39,    40,    41,   -59,   -84,    68,   -61,   -61,   -61,   -61,
     -88,   286,   287,   288,   289,   -80,    42,   -81,   -74,    68,
     -75,    72,    72,   -76,    68,    49,    50,    51,    52,   -77,
     -78,    72,    21,    55,   255,   -79,    71,    72,   -61,   -83,
      71,    68,    68,    68,    68,    68,    68,    68,    68,    68,
     -73,    72,   -68,   -55,   -55,   -55,   -55,   -69,   -70,    68,
      68,   291,     0,     0,     0,    72,   -59,   -59,   -59,   -59,
      72,     0,     0,     0,    68,    68,   181,    68,   182,   183,
     184,     0,   185,   186,   187,   -55,     0,    72,    72,    72,
      72,    72,    72,    72,    72,    72,     0,   -59,   188,     0,
       0,     0,     0,    74,    74,    72,    72,   189,   190,   191,
     192,     0,     0,    74,     0,   193,     0,     0,    68,    74,
      72,    72,    68,    72,     0,     0,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    74,    -9,    -9,    -9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
      -9,    -9,    74,    -9,    -9,    -9,    -9,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    72,     0,    -9,    -9,    72,    74,
      74,    74,    74,    74,    74,    74,    74,    74,   -56,   -56,
     -56,   -56,     0,   -60,   -60,   -60,   -60,    74,    74,   -12,
       0,   -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,   -12,
       0,     0,    74,    74,     0,    74,     0,     0,     0,     0,
     -56,     0,     0,   -12,   -12,   -60,   -12,   -12,   -12,   -12,
     -12,     0,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,
     -12,    31,     0,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,     0,     0,     0,     0,    74,     0,     0,     0,
      74,   -61,   -61,   -61,   -61,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -61,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -56,   -56,   -56,   -56,   -37,   -37,   173,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -37,   -21,   -21,   -21,   -21,   -21,   -55,   -21,
     -21,   -21,   -56,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -62,   -62,   247,   248,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,
       0,   -21,   -21,    34,    35,    36,    37,    38,   -67,    39,
      40,    41,   -62,     0,     0,     0,     0,   -63,   -63,   247,
     248,   -66,   -66,   -66,   -66,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,    54,    55,    34,    35,    36,    37,    38,   -63,    39,
      40,    41,   -66,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -60,   -60,   -60,   -60,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,    75,    55,   -19,   -19,   -19,   -19,   -19,   -65,   -19,
     -19,   -19,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -19,   -19,     0,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,   -19,   -22,   -22,   -22,   -22,   -22,     0,   -22,
     -22,   -22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,   -22,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
      95,     0,    55,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,
       0,   -44,   -44,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,   164,    55,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,   165,    55,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,   166,    55,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,
       0,   -46,   -46,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -29,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,
       0,   -47,   -47,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -48,   -48,   -49,   -49,   -49,   -49,   -49,     0,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,
       0,   -49,   -49,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -42,     0,   -40,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,   180,    55,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -43,   -43,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,   -45,    34,    35,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,     0,
       0,   -27,    55,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,    76,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,   -54,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -59,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -61,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -55,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -56,   -67,
     -67,   -67,   -67,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -60,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   229,     0,     0,
       0,     0,     0,     0,     0,     0,   -54,     0,     0,     0,
       0,     0,     0,     0,     0,   230,   -54,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -61,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -55,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -56,   -67,
     -67,   -67,   -67,   237,   238,   239,   240,   241,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -60
};

static const yytype_int16 yycheck[] =
{
      42,    62,     0,    12,    13,     1,    48,    30,     4,    42,
      81,     1,     1,    55,     4,     4,     3,    12,    13,    14,
      15,     8,    32,    33,    12,    13,    14,    15,    35,    36,
      37,     3,    42,    40,    76,    44,     4,    40,    48,    81,
      82,    83,    84,    39,    86,   116,   117,    43,    43,    39,
      39,     3,    62,    43,    43,    43,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     1,    76,    77,     4,    92,
      93,    81,    95,    40,   116,   117,    42,    87,    88,    89,
      90,    12,    13,    14,    15,    12,    13,    42,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    12,    13,    14,    15,     0,   116,   117,     0,     4,
     152,   153,     4,    44,   175,    44,    43,    42,    35,    36,
      37,   131,   132,    40,   134,    39,    42,    42,     3,    43,
       5,     6,     7,    44,     9,    10,    11,    42,    39,   149,
      42,     3,    43,     5,     6,     7,   188,     9,    10,    11,
      25,   193,     0,     0,     0,   178,     4,     4,     4,    34,
      35,    36,    37,    25,    42,   175,   208,    42,    43,   179,
      42,     0,    34,    32,    33,     4,    42,   219,     0,    42,
      42,    44,     4,    42,    39,   227,   228,   229,    43,    48,
     232,    40,    44,    44,    44,   237,   238,   239,   240,   241,
     242,   243,   244,    62,    39,    39,    39,     0,    43,    43,
      43,     4,     0,    44,    39,    39,     4,    76,    43,    43,
     230,    44,    81,   233,   234,   235,    44,    12,    13,    14,
      15,    44,    44,    43,   276,   245,   246,   247,   248,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      12,    13,    14,    15,    44,    32,    33,   116,   117,    44,
      12,    13,    14,    15,    39,    42,    39,    43,    43,    43,
      43,    48,   131,   132,    44,   134,     3,    44,     5,     6,
       7,    43,     9,    10,    11,    62,    12,    13,    14,    15,
      43,    39,    44,    43,     3,    43,     5,     6,     7,    76,
       9,    10,    11,    43,    81,    12,    13,    14,    15,    43,
      87,    88,    89,    90,    33,    42,   175,    40,    44,    43,
     179,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      39,    39,    43,    42,    43,    43,    40,    44,    43,   116,
     117,    12,    13,    14,    15,    43,    32,    33,    12,    13,
      14,    15,    44,    44,   131,   132,    42,   134,    33,    44,
      44,     3,    48,     5,     6,     7,    39,     9,    10,    11,
      43,    39,    44,    44,    60,    43,    62,    39,    39,    39,
      44,    43,    43,    43,    39,     0,   245,   246,    43,     4,
      76,    12,    13,    14,    15,    81,    44,    44,   175,    44,
      42,     3,   179,     5,     6,     7,    44,     9,    10,    11,
      44,    44,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     3,    43,     5,     6,     7,    44,     9,    10,    11,
     116,   117,    44,    32,    33,    44,    44,    44,    44,    43,
      42,    44,    43,    42,    42,   131,   132,    42,   134,    48,
      42,    12,    13,    14,    15,    42,   233,   234,   235,    43,
      42,    33,    43,    62,    43,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    76,    43,    43,
      33,    80,    81,    44,    33,    33,    33,    33,     3,   175,
       5,     6,     7,   179,     9,    10,    11,    44,    33,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    33,    43,
      25,    12,    13,    14,    15,    32,    33,   116,   117,    34,
      35,    36,    37,    43,    43,    42,     4,    42,    23,    44,
      43,    48,   131,   132,     3,   134,     5,     6,     7,    43,
       9,    10,    11,    44,    43,    62,    12,    13,    14,    15,
      43,    43,    43,    43,    43,    43,    25,    43,    43,    76,
      43,    32,    33,    43,    81,    34,    35,    36,    37,    43,
      43,    42,    16,    42,   230,    43,   175,    48,    44,    43,
     179,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      43,    62,    43,    12,    13,    14,    15,    43,    43,   116,
     117,    43,    -1,    -1,    -1,    76,    12,    13,    14,    15,
      81,    -1,    -1,    -1,   131,   132,     3,   134,     5,     6,
       7,    -1,     9,    10,    11,    44,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    43,    25,    -1,
      -1,    -1,    -1,    32,    33,   116,   117,    34,    35,    36,
      37,    -1,    -1,    42,    -1,    42,    -1,    -1,   175,    48,
     131,   132,   179,   134,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    62,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      25,    26,    81,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,   175,    -1,    41,    42,   179,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    12,    13,
      14,    15,    -1,    12,    13,    14,    15,   116,   117,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,   131,   132,    -1,   134,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    25,    26,    44,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,
     179,    12,    13,    14,    15,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    43,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    12,    13,    14,    15,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    43,     9,
      10,    11,    43,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    12,    13,    14,    15,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    43,     9,
      10,    11,    43,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    12,    13,    14,    15,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    43,     9,
      10,    11,    43,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    12,    13,    14,    15,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    43,     9,
      10,    11,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      40,    -1,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      40,    -1,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      40,    -1,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      -1,     3,    42,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    46,    47,    48,    49,    69,     3,     8,
       0,    48,    42,    44,    42,    50,    52,     1,     4,    54,
      55,    54,     3,    39,    43,    43,    55,    40,    40,    51,
      53,     1,    56,    56,     3,     4,     5,     6,     7,     9,
      10,    11,    25,    26,    28,    29,    30,    31,    32,    34,
      35,    36,    37,    38,    41,    42,    57,    58,    59,    60,
      61,    63,    64,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    80,    41,    24,    42,     3,    71,
      42,    42,    42,    42,    42,    71,    42,    42,    42,    42,
      42,    71,    40,    40,    75,    40,    57,    44,    16,    17,
      18,    19,    20,    21,    22,    23,    33,    12,    13,    14,
      15,    71,     3,    72,    79,    76,    44,    58,    62,    43,
      71,    71,    71,    44,    71,    72,    78,    78,    78,    78,
      43,    56,    56,    44,    56,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    74,    74,    72,    72,    39,
      43,    43,    58,    58,    43,    44,    43,    43,    43,    43,
      43,    43,    43,    43,    41,    41,    41,    72,    71,    71,
      44,    44,    44,    27,    65,    66,    67,    57,    40,    56,
      41,     3,     5,     6,     7,     9,    10,    11,    25,    34,
      35,    36,    37,    42,    72,    73,    74,    75,    76,    77,
      78,    80,     5,     6,     7,     9,    10,    11,    42,    44,
       3,    71,     3,     5,     6,     7,     9,    10,    11,    42,
       3,     5,     6,     7,     9,    10,    11,    42,    33,    24,
      42,    71,    42,    42,    42,    42,    71,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    71,
      44,    71,    71,    71,    71,    79,    71,    78,    78,    78,
      43,    71,    71,    71,    71,    71,    71,    71,    71,     3,
       5,     6,     7,     9,    10,    11,    42,    72,    74,    74,
      72,    72,    43,    43,    43,    43,    43,    43,    43,    43,
      71,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    51,
      49,    52,    53,    49,    54,    54,    54,    54,    55,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    59,    59,
      59,    59,    60,    61,    62,    62,    63,    63,    63,    64,
      66,    65,    67,    65,    68,    69,    70,    70,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    78,    79,    79,    79,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
      10,     0,     0,    10,     3,     1,     0,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       3,     4,     4,     4,     3,     3,     2,     4,     5,     4,
       0,     3,     0,     5,     3,     3,     4,     5,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     4,     4,
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
  case 2: /* program: declarations_list  */
#line 82 "newcParser.y"
                          {
                            ast_tree = (yyval.tree_node);
                          }
#line 2210 "newcParser.tab.c"
    break;

  case 3: /* declarations_list: declarations_list declaration  */
#line 88 "newcParser.y"
                                      {
                                        (yyval.tree_node) = create_node2("declarations_list declaration", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                                      }
#line 2218 "newcParser.tab.c"
    break;

  case 4: /* declarations_list: declaration  */
#line 91 "newcParser.y"
                                      {
                                        (yyval.tree_node) = create_node1("declaration", (yyvsp[0].tree_node));
                                      }
#line 2226 "newcParser.tab.c"
    break;

  case 5: /* declarations_list: error  */
#line 94 "newcParser.y"
                                      {
                                        (yyval.tree_node) = create_node_empty();
                                        errors += 1;
                                        yyerror(yymsg);
                                      }
#line 2236 "newcParser.tab.c"
    break;

  case 6: /* declaration: var_dec  */
#line 102 "newcParser.y"
                {
                  (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
                }
#line 2244 "newcParser.tab.c"
    break;

  case 7: /* declaration: func_dec  */
#line 105 "newcParser.y"
                {
                  (yyval.tree_node) = create_node1("func_dec", (yyvsp[0].tree_node));
                }
#line 2252 "newcParser.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 111 "newcParser.y"
                   {
      scope++;
      push_stack(scope);
    }
#line 2261 "newcParser.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 114 "newcParser.y"
                                {
      errors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters);
      parameters = 0;
    }
#line 2270 "newcParser.tab.c"
    break;

  case 10: /* func_dec: TYPE ID PARENL $@1 params_list PARENR STFUNC $@2 statement_list ENDFUNC  */
#line 117 "newcParser.y"
                              {
      (yyval.tree_node) = create_node4("TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0((yyvsp[-9].str)), create_node0((yyvsp[-8].str)), (yyvsp[-5].tree_node), (yyvsp[-1].tree_node));
      pop_stack();
    }
#line 2279 "newcParser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 121 "newcParser.y"
                     {
      scope++;
      push_stack(scope);
    }
#line 2288 "newcParser.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 124 "newcParser.y"
                                {
      semanticErrors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters);
      parameters = 0;
    }
#line 2297 "newcParser.tab.c"
    break;

  case 13: /* func_dec: TYPE MAIN PARENL $@3 params_list PARENR STFUNC $@4 statement_list ENDFUNC  */
#line 127 "newcParser.y"
                             {
      symbolIdCounter++;
      (yyval.tree_node) = create_node4("TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0((yyvsp[-9].str)), create_node0((yyvsp[-8].str)), (yyvsp[-5].tree_node), (yyvsp[-1].tree_node));
      has_main++;
      pop_stack();
    }
#line 2308 "newcParser.tab.c"
    break;

  case 14: /* params_list: params_list COMMA parameter  */
#line 136 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("params_list COMMA parameter", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2316 "newcParser.tab.c"
    break;

  case 15: /* params_list: parameter  */
#line 139 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("parameter", (yyvsp[0].tree_node));
    }
#line 2324 "newcParser.tab.c"
    break;

  case 16: /* params_list: %empty  */
#line 142 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2332 "newcParser.tab.c"
    break;

  case 17: /* params_list: error  */
#line 145 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
#line 2342 "newcParser.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 153 "newcParser.y"
            {
      parameters++;
      (yyval.tree_node) = create_node2("TYPE ID", create_node0((yyvsp[-1].str)), create_node0((yyvsp[0].str)));
      semanticErrors += add_symbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stack_scope) -> value, 0);
    }
#line 2352 "newcParser.tab.c"
    break;

  case 19: /* statement_list: statement_list statement  */
#line 161 "newcParser.y"
                             {
      (yyval.tree_node) = create_node2("statement_list statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2360 "newcParser.tab.c"
    break;

  case 20: /* statement_list: %empty  */
#line 164 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2368 "newcParser.tab.c"
    break;

  case 21: /* statement_list: error  */
#line 167 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
    }
#line 2376 "newcParser.tab.c"
    break;

  case 22: /* statement: expression_statement  */
#line 173 "newcParser.y"
                         {
      (yyval.tree_node) = create_node1("expression_statement", (yyvsp[0].tree_node));
    }
#line 2384 "newcParser.tab.c"
    break;

  case 23: /* statement: ret_st  */
#line 176 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("ret_st", (yyvsp[0].tree_node));
    }
#line 2392 "newcParser.tab.c"
    break;

  case 24: /* statement: var_dec  */
#line 179 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
    }
#line 2400 "newcParser.tab.c"
    break;

  case 25: /* statement: io_ops  */
#line 182 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("io_ops", (yyvsp[0].tree_node));
    }
#line 2408 "newcParser.tab.c"
    break;

  case 26: /* statement: basic_ops  */
#line 185 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("basic_ops", (yyvsp[0].tree_node));
    }
#line 2416 "newcParser.tab.c"
    break;

  case 27: /* expression_statement: expression SEMIC  */
#line 191 "newcParser.y"
                     {
      (yyval.tree_node) = create_node1("expression SEMIC", (yyvsp[-1].tree_node));
    }
#line 2424 "newcParser.tab.c"
    break;

  case 28: /* basic_ops: if_ops  */
#line 197 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("if_ops", (yyvsp[0].tree_node));
    }
#line 2432 "newcParser.tab.c"
    break;

  case 29: /* basic_ops: for_statement STFUNC statement_list ENDFUNC  */
#line 200 "newcParser.y"
                                                {
      pop_stack();
      (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2441 "newcParser.tab.c"
    break;

  case 30: /* basic_ops: forall_statement set_op SEMIC  */
#line 204 "newcParser.y"
                                  {
      pop_stack();
      (yyval.tree_node) = create_node2("FORALL PARENL in_set PARENR set_op SEMIC ", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node));
    }
#line 2450 "newcParser.tab.c"
    break;

  case 31: /* basic_ops: forall_statement STFUNC statement_list ENDFUNC  */
#line 208 "newcParser.y"
                                                   {
      pop_stack();
      (yyval.tree_node) = create_node2("FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2459 "newcParser.tab.c"
    break;

  case 32: /* for_statement: FOR PARENL for_body PARENR  */
#line 215 "newcParser.y"
                             {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 2469 "newcParser.tab.c"
    break;

  case 33: /* forall_statement: FORALL PARENL in_set PARENR  */
#line 223 "newcParser.y"
                              {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FORALL PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 2479 "newcParser.tab.c"
    break;

  case 34: /* for_body: expression_statement expression_statement expression  */
#line 231 "newcParser.y"
                                                         {
      (yyval.tree_node) = create_node3("expression_statement expression_statement expression", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2487 "newcParser.tab.c"
    break;

  case 35: /* for_body: SEMIC expression_statement expression  */
#line 234 "newcParser.y"
                                          {
      (yyval.tree_node) = create_node2("SEMIC expression_statement expression", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2495 "newcParser.tab.c"
    break;

  case 36: /* if_ops: if_statement statement  */
#line 240 "newcParser.y"
                           {
      pop_stack();
      (yyval.tree_node) = create_node2("if_statement statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2504 "newcParser.tab.c"
    break;

  case 37: /* if_ops: if_statement STFUNC statement_list ENDFUNC  */
#line 244 "newcParser.y"
                                               {
      pop_stack();
      (yyval.tree_node) = create_node2("if_statement STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2513 "newcParser.tab.c"
    break;

  case 38: /* if_ops: if_statement STFUNC statement_list ENDFUNC else_statement  */
#line 248 "newcParser.y"
                                                              {
      (yyval.tree_node) = create_node3("if_statement STFUNC statement_list ENDFUNC else_statement", (yyvsp[-4].tree_node), (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2521 "newcParser.tab.c"
    break;

  case 39: /* if_statement: IF PARENL operation PARENR  */
#line 254 "newcParser.y"
                               {
      scope++;
      push_stack(scope);
      (yyval.tree_node) = create_node2("IF PARENL operation PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2531 "newcParser.tab.c"
    break;

  case 40: /* $@5: %empty  */
#line 262 "newcParser.y"
         {
      pop_stack();
      scope++;
      push_stack(scope);
    }
#line 2541 "newcParser.tab.c"
    break;

  case 41: /* else_statement: ELSE $@5 statement  */
#line 267 "newcParser.y"
              {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE statement_list", create_node0((yyvsp[-2].str)), (yyvsp[0].tree_node));
    }
#line 2550 "newcParser.tab.c"
    break;

  case 42: /* $@6: %empty  */
#line 271 "newcParser.y"
         {
      pop_stack();
      scope++;
      push_stack(scope);
    }
#line 2560 "newcParser.tab.c"
    break;

  case 43: /* else_statement: ELSE $@6 STFUNC statement_list ENDFUNC  */
#line 275 "newcParser.y"
                                    {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE STFUNC statement_list ENDFUNC", create_node0((yyvsp[-4].str)), (yyvsp[-1].tree_node));
    }
#line 2569 "newcParser.tab.c"
    break;

  case 44: /* ret_st: RETURN expression SEMIC  */
#line 283 "newcParser.y"
                            {
      (yyval.tree_node) = create_node2("RETURN expression SEMIC", create_node0((yyvsp[-2].str)), (yyvsp[-1].tree_node));
    }
#line 2577 "newcParser.tab.c"
    break;

  case 45: /* var_dec: TYPE ID SEMIC  */
#line 289 "newcParser.y"
                  {
      semanticErrors += add_symbol((yyvsp[-1].str), "var", (yyvsp[-2].str), STACK_TOP(stack_scope) -> value, 0);
      (yyval.tree_node) = create_node2("TYPE ID SEMIC", create_node0((yyvsp[-2].str)), create_node0((yyvsp[-1].str)));
    }
#line 2586 "newcParser.tab.c"
    break;

  case 46: /* io_ops: READ PARENL PARENR SEMIC  */
#line 296 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("READ PARENL PARENR SEMIC", create_node0((yyvsp[-3].str)));
    }
#line 2594 "newcParser.tab.c"
    break;

  case 47: /* io_ops: READ PARENL expression PARENR SEMIC  */
#line 299 "newcParser.y"
                                        {
      (yyval.tree_node) = create_node2("READ PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
    }
#line 2602 "newcParser.tab.c"
    break;

  case 48: /* io_ops: WRITE PARENL expression PARENR SEMIC  */
#line 302 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("WRITE PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
    }
#line 2610 "newcParser.tab.c"
    break;

  case 49: /* io_ops: WRITELN PARENL expression PARENR SEMIC  */
#line 305 "newcParser.y"
                                           {
      (yyval.tree_node) = create_node2("WRITELN PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
    }
#line 2618 "newcParser.tab.c"
    break;

  case 50: /* expression: set_op  */
#line 311 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("set_op", (yyvsp[0].tree_node));
    }
#line 2626 "newcParser.tab.c"
    break;

  case 51: /* expression: operation  */
#line 314 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("operation", (yyvsp[0].tree_node));
    }
#line 2634 "newcParser.tab.c"
    break;

  case 52: /* expression: func_call  */
#line 317 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("func_call", (yyvsp[0].tree_node));
    }
#line 2642 "newcParser.tab.c"
    break;

  case 53: /* expression: assign_value  */
#line 320 "newcParser.y"
                 {
      (yyval.tree_node) = create_node1("assign_value", (yyvsp[0].tree_node));
    }
#line 2650 "newcParser.tab.c"
    break;

  case 54: /* term: ID  */
#line 326 "newcParser.y"
       {
      if (check_is_in_scope((yyvsp[0].str), STACK_TOP(stack_scope) -> value)) {
        (yyval.tree_node) = create_node1("ID", create_node0((yyvsp[0].str)));
      }
      else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[0].str), line, word_position);
        semanticErrors += 1;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 2666 "newcParser.tab.c"
    break;

  case 55: /* term: INTEGER  */
#line 337 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("INTEGER", create_node0_int((yyvsp[0].integer), 'i'));
    }
#line 2674 "newcParser.tab.c"
    break;

  case 56: /* term: DECIMAL  */
#line 340 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("DECIMAL", create_node0_dec((yyvsp[0].dec), 'd'));
    }
#line 2682 "newcParser.tab.c"
    break;

  case 57: /* term: CHAR  */
#line 343 "newcParser.y"
         {
      (yyval.tree_node) = create_node1("CHAR", create_node0_char((yyvsp[0].str), 'c'));
    }
#line 2690 "newcParser.tab.c"
    break;

  case 58: /* term: STRING  */
#line 346 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("STRING", create_node0((yyvsp[0].str)));
    }
#line 2698 "newcParser.tab.c"
    break;

  case 59: /* term: EMPTY  */
#line 349 "newcParser.y"
          {
      (yyval.tree_node) = create_node1("EMPTY", create_node0((yyvsp[0].str)));
    }
#line 2706 "newcParser.tab.c"
    break;

  case 60: /* term: PARENL expression PARENR  */
#line 352 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("PARENL expression PARENR", (yyvsp[-1].tree_node));
    }
#line 2714 "newcParser.tab.c"
    break;

  case 61: /* term: ERRORTOKEN  */
#line 355 "newcParser.y"
               {
      (yyval.tree_node) = create_node_empty();
    }
#line 2722 "newcParser.tab.c"
    break;

  case 62: /* math_op: math_op ADD math_op_muldiv  */
#line 361 "newcParser.y"
                               {
      (yyval.tree_node) = create_node3("math_op ADD math_op_muldiv", (yyvsp[-2].tree_node), create_node0("+"), (yyvsp[0].tree_node));
    }
#line 2730 "newcParser.tab.c"
    break;

  case 63: /* math_op: math_op SUB math_op_muldiv  */
#line 364 "newcParser.y"
                               {
      (yyval.tree_node) = create_node3("math_op SUB math_op_muldiv", (yyvsp[-2].tree_node), create_node0("-"), (yyvsp[0].tree_node));
    }
#line 2738 "newcParser.tab.c"
    break;

  case 64: /* math_op: math_op_muldiv  */
#line 367 "newcParser.y"
                   {
      (yyval.tree_node) = create_node1("math_op_muldiv", (yyvsp[0].tree_node));
    }
#line 2746 "newcParser.tab.c"
    break;

  case 65: /* math_op_muldiv: math_op_muldiv DIV term  */
#line 373 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("math_op_muldiv DIV term", (yyvsp[-2].tree_node), create_node0("/"), (yyvsp[0].tree_node));
    }
#line 2754 "newcParser.tab.c"
    break;

  case 66: /* math_op_muldiv: math_op_muldiv MULT term  */
#line 376 "newcParser.y"
                             {
    (yyval.tree_node) = create_node3("math_op_muldiv MULT term", (yyvsp[-2].tree_node), create_node0("*"), (yyvsp[0].tree_node));
  }
#line 2762 "newcParser.tab.c"
    break;

  case 67: /* math_op_muldiv: term  */
#line 379 "newcParser.y"
         {
      (yyval.tree_node) = create_node1("term", (yyvsp[0].tree_node));
    }
#line 2770 "newcParser.tab.c"
    break;

  case 68: /* set_op: ADDSET PARENL in_set PARENR  */
#line 385 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("ADDSET PARENL in_set PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2778 "newcParser.tab.c"
    break;

  case 69: /* set_op: REMOVE PARENL in_set PARENR  */
#line 388 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("REMOVE PARENL in_set PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2786 "newcParser.tab.c"
    break;

  case 70: /* set_op: EXISTS PARENL in_set PARENR  */
#line 391 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("EXISTS PARENL in_set PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2794 "newcParser.tab.c"
    break;

  case 71: /* operation: math_op  */
#line 397 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("math_op", (yyvsp[0].tree_node));
    }
#line 2802 "newcParser.tab.c"
    break;

  case 72: /* operation: in_set  */
#line 400 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("in_set", (yyvsp[0].tree_node));
    }
#line 2810 "newcParser.tab.c"
    break;

  case 73: /* operation: ISTYPE PARENL expression PARENR  */
#line 403 "newcParser.y"
                                    {
      (yyval.tree_node) = create_node2("ISTYPE PARENL expression PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2818 "newcParser.tab.c"
    break;

  case 74: /* operation: term SMALLER expression  */
#line 406 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term SMALLER expression", (yyvsp[-2].tree_node), create_node0("<"), (yyvsp[0].tree_node));
    }
#line 2826 "newcParser.tab.c"
    break;

  case 75: /* operation: term GREATER expression  */
#line 409 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term GREATER expression", (yyvsp[-2].tree_node), create_node0(">"), (yyvsp[0].tree_node));
    }
#line 2834 "newcParser.tab.c"
    break;

  case 76: /* operation: term SMALLEQ expression  */
#line 412 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term SMALLEQ expression", (yyvsp[-2].tree_node), create_node0("<="), (yyvsp[0].tree_node));
    }
#line 2842 "newcParser.tab.c"
    break;

  case 77: /* operation: term GREATEQ expression  */
#line 415 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term GREATEQ expression", (yyvsp[-2].tree_node), create_node0(">="), (yyvsp[0].tree_node));
    }
#line 2850 "newcParser.tab.c"
    break;

  case 78: /* operation: term EQUALS expression  */
#line 418 "newcParser.y"
                           {
      (yyval.tree_node) = create_node3("term EQUALS expression", (yyvsp[-2].tree_node), create_node0("=="), (yyvsp[0].tree_node));
    }
#line 2858 "newcParser.tab.c"
    break;

  case 79: /* operation: term DIFFERENT expression  */
#line 421 "newcParser.y"
                              {
      (yyval.tree_node) = create_node3("term DIFFERENT expression", (yyvsp[-2].tree_node), create_node0("!="), (yyvsp[0].tree_node));
    }
#line 2866 "newcParser.tab.c"
    break;

  case 80: /* operation: term OR expression  */
#line 424 "newcParser.y"
                       {
      (yyval.tree_node) = create_node3("term OR expression", (yyvsp[-2].tree_node), create_node0("||"), (yyvsp[0].tree_node));
    }
#line 2874 "newcParser.tab.c"
    break;

  case 81: /* operation: term AND expression  */
#line 427 "newcParser.y"
                        {
      (yyval.tree_node) = create_node3("term AND expression", (yyvsp[-2].tree_node), create_node0("&&"), (yyvsp[0].tree_node));
    }
#line 2882 "newcParser.tab.c"
    break;

  case 82: /* operation: NEG expression  */
#line 430 "newcParser.y"
                   {
      (yyval.tree_node) = create_node2("NEG expression", create_node0("!"), (yyvsp[0].tree_node));
    }
#line 2890 "newcParser.tab.c"
    break;

  case 83: /* func_call: ID PARENL args_list PARENR  */
#line 436 "newcParser.y"
                               {
      if (find_symbol_func((yyvsp[-3].str)) != NULL){
        if (check_number_of_params(args_params, (yyvsp[-3].str))){
          args_params = 0;
          (yyval.tree_node) = create_node2("ID PARENL args_list PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
        }else{
          printf("ERRO SEMATICO\n");
          printf("FUNÇAO %s COM NUMERO DE PARAMETROS INVALIDOS NA INVOCAÇÃO, linha %d, coluna %d\n\n", (yyvsp[-3].str), line, word_position);
          semanticErrors += 1;
          args_params = 0;
          (yyval.tree_node) = create_node_empty();
        }
      }else {
        printf("ERRO SEMATICO\n");
        printf("FUNÇAO %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[-3].str), line, word_position);
        semanticErrors += 1;
        args_params = 0;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 2915 "newcParser.tab.c"
    break;

  case 84: /* in_set: term IN expression  */
#line 459 "newcParser.y"
                       {
      (yyval.tree_node) = create_node3("term IN expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2923 "newcParser.tab.c"
    break;

  case 85: /* args_list: args_list COMMA term  */
#line 465 "newcParser.y"
                         {
      args_params++;
      (yyval.tree_node) = create_node2("args_list COMMA term", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2932 "newcParser.tab.c"
    break;

  case 86: /* args_list: term  */
#line 469 "newcParser.y"
         {
      args_params++;
      (yyval.tree_node) = create_node1("term", (yyvsp[0].tree_node));
    }
#line 2941 "newcParser.tab.c"
    break;

  case 87: /* args_list: %empty  */
#line 473 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2949 "newcParser.tab.c"
    break;

  case 88: /* assign_value: ID ASSIGN expression  */
#line 480 "newcParser.y"
                         {
      if (check_is_in_scope((yyvsp[-2].str), STACK_TOP(stack_scope) -> value))
        (yyval.tree_node) = create_node3("ID ASSIGN expression", create_node0((yyvsp[-2].str)), create_node0("="), (yyvsp[0].tree_node));
      else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[-2].str), line, word_position);
        semanticErrors += 1;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 2964 "newcParser.tab.c"
    break;


#line 2968 "newcParser.tab.c"

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

#line 494 "newcParser.y"


int main(int argc, char *argv[]) {

  push_stack(0);

  ast_tree = NULL;

  yyin = fopen(argv[1], "r");

  yyparse();

  if(has_main == 0) {
    printf("ERRO SEMÂNTICO\n");
    printf("FUNÇÃO MAIN NÃO ENCONTRADA\n\n");
    semanticErrors += 1;
  } else if (has_main > 1) {
    printf("ERRO SEMÂNTICO\n");
    printf("MAIS DE UMA FUNÇÃO MAIN ENCONTRADA\n\n");
    semanticErrors += 1;
  }

  print_symbols();

  if (errors == 0) {
    printf("\n\n#### INICIO DA ÁRVORE SINTÁTICA ####\n\n");
    print_tree(ast_tree);
    printf("\n\n#### FIM DA ÁRVORE SINTÁTICA ####\n\n");
    if (semanticErrors > 0) {
      printf("\n\nFORAM ENCONTRADAS %d WARNINGS NO CODIGO\n\n", semanticErrors);
    }
  } else {
    printf("\n\nFORAM ENCONTRADOS %d ERROS E %d WARNINGS NO CODIGO\n\n", errors, semanticErrors);
    free_tree(ast_tree);
  }

  free_symbol_table();

  free_stack();

  fclose(yyin);

  yylex_destroy();

  return 0;
}
