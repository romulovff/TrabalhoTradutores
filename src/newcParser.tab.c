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
#include "utils.h"
#include "codegen.h"
#define _GNU_SOURCE

int errors = 0;
int semanticErrors = 0;
int symbolIdCounter = 0;
int scope = 0;
int parameters = 0;
int args_params = 0;
int has_main = 0;
int var_reg = 1;

extern Symbol *symbol_table;
Node *ast_tree = NULL;
extern Scope *stack_scope;
extern FILE *tacfile;
extern Codegen *codegen;
extern Codegen *current_line;

int yylex();
void yyerror (const char *msg) {
  printf("\nERRO DE SINTAXE\n");
  printf ("%s, linha: %d, coluna: %d\n", msg,line,word_position);
  errors += 1;
}
void yyerror(const char* msg);
extern int yylex_destroy(void);
extern FILE *yyin;


#line 112 "newcParser.tab.c"

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
  YYSYMBOL_OUTERTHEN = 45,                 /* OUTERTHEN  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_declarations_list = 48,         /* declarations_list  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_func_dec = 50,                  /* func_dec  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_54_4 = 54,                      /* $@4  */
  YYSYMBOL_params_list = 55,               /* params_list  */
  YYSYMBOL_parameter = 56,                 /* parameter  */
  YYSYMBOL_statement_list = 57,            /* statement_list  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_expression_statement = 59,      /* expression_statement  */
  YYSYMBOL_basic_ops = 60,                 /* basic_ops  */
  YYSYMBOL_for_statement = 61,             /* for_statement  */
  YYSYMBOL_forall_statement = 62,          /* forall_statement  */
  YYSYMBOL_for_body = 63,                  /* for_body  */
  YYSYMBOL_if_ops = 64,                    /* if_ops  */
  YYSYMBOL_if_statement = 65,              /* if_statement  */
  YYSYMBOL_else_statement = 66,            /* else_statement  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_68_6 = 68,                      /* $@6  */
  YYSYMBOL_ret_st = 69,                    /* ret_st  */
  YYSYMBOL_var_dec = 70,                   /* var_dec  */
  YYSYMBOL_io_ops = 71,                    /* io_ops  */
  YYSYMBOL_expression = 72,                /* expression  */
  YYSYMBOL_term = 73,                      /* term  */
  YYSYMBOL_math_term = 74,                 /* math_term  */
  YYSYMBOL_str_term = 75,                  /* str_term  */
  YYSYMBOL_math_op = 76,                   /* math_op  */
  YYSYMBOL_math_op_muldiv = 77,            /* math_op_muldiv  */
  YYSYMBOL_set_op = 78,                    /* set_op  */
  YYSYMBOL_operation = 79,                 /* operation  */
  YYSYMBOL_or_operation = 80,              /* or_operation  */
  YYSYMBOL_and_operation = 81,             /* and_operation  */
  YYSYMBOL_equality_operation = 82,        /* equality_operation  */
  YYSYMBOL_relational_operation = 83,      /* relational_operation  */
  YYSYMBOL_negation_operation = 84,        /* negation_operation  */
  YYSYMBOL_func_call = 85,                 /* func_call  */
  YYSYMBOL_in_set = 86,                    /* in_set  */
  YYSYMBOL_args_list = 87,                 /* args_list  */
  YYSYMBOL_assign_value = 88               /* assign_value  */
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
#define YYLAST   4672

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    91,    91,    97,   100,   103,   111,   114,   120,   123,
     120,   146,   149,   146,   177,   180,   183,   186,   194,   203,
     210,   213,   219,   223,   227,   230,   233,   239,   246,   249,
     253,   257,   264,   272,   280,   283,   289,   292,   296,   300,
     306,   314,   314,   323,   323,   335,   342,   367,   370,   373,
     378,   386,   396,   400,   408,   413,   421,   435,   441,   447,
     455,   460,   465,   470,   476,   483,   490,   498,   505,   512,
     520,   524,   528,   532,   540,   544,   547,   554,   562,   570,
     578,   586,   594,   602,   610,   618,   626,   634,   642,   650,
     656,   664,   685,   692,   699,   703,   707,   714
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
  "SEMIC", "OUTERTHEN", "$accept", "program", "declarations_list",
  "declaration", "func_dec", "$@1", "$@2", "$@3", "$@4", "params_list",
  "parameter", "statement_list", "statement", "expression_statement",
  "basic_ops", "for_statement", "forall_statement", "for_body", "if_ops",
  "if_statement", "else_statement", "$@5", "$@6", "ret_st", "var_dec",
  "io_ops", "expression", "term", "math_term", "str_term", "math_op",
  "math_op_muldiv", "set_op", "operation", "or_operation", "and_operation",
  "equality_operation", "relational_operation", "negation_operation",
  "func_call", "in_set", "args_list", "assign_value", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    80,    43,    29,   117,   155,   156,   191,   216,    -5,
    -160,   218,    15,   225,    22,    35,    35,   187,    41,   192,
     220,   240,   248,    79,    61,    75,   251,  1297,  1377,  1419,
    1419,  2419,  2459,  2499,   597,    86,   -19,    -6,     1,    49,
     502,  1173,    37,    62,    84,    91,   115,   120,   831,   127,
     147,   152,   169,   175,   309,  3937,  2539,  2579,  2619,   188,
     349,  2659,  2699,  2739,  2779,  2819,   153,   201,  1272,    64,
    4216,   324,   196,   199,    33,    25,   198,   432,   706,   207,
     213,   258,   310,   831,    85,   263,   447,  4052,  4228,   100,
     138,    17,  3937,  3937,   271,  3937,  3950,  3950,  3950,   195,
     249,  1419,  1419,   285,   288,  1419,  1459,  2859,   831,    37,
      37,    37,    37,   126,   126,   126,   126,   126,   126,   126,
     126,   290,   284,   322,   327,   307,   831,   831,   320,   321,
     335,   337,   338,  2899,   339,   344,   345,   347,   366,  1328,
    2939,  2979,  3019,  3059,  3099,  3139,   378,  4064,  4097,  4109,
    4142,    54,   289,   761,   841,  1159,  1415,  1455,  1495,   275,
     384,  3179,  3937,  3937,   313,   402,  3219,   412,   413,   437,
     453,   462,   463,   468,  3259,  3299,  1499,  3859,   372,   328,
     377,   404,  3339,  3379,  3419,  3459,  3499,  1419,  3539,  3579,
    4154,  4187,  3937,  4261,    42,    69,    97,   121,  4293,  4325,
     168,   286,   467,   469,   484,  3937,   456,  4357,   180,   687,
     380,   486,   489,    16,   103,   222,  1535,  1575,   490,   491,
     494,  4019,   497,   505,   507,   508,   540,   503,   509,   511,
     831,  1539,  1579,   514,   918,  1619,  3619,  1659,  1699,  1739,
     512,   365,   367,   368,   375,   376,   443,   444,  3937,   445,
    3659,  4389,   525,   522,   537,   538,  3937,   541,   529,  3937,
      85,  4453,  4465,  4497,  3937,  4509,  4245,  3937,  3950,  3950,
    3950,   530,  3937,   168,   168,   168,   168,   128,   128,   128,
     128,   128,   128,   128,   128,   531,    21,  3937,  3937,   533,
    1419,  1419,   534,  1419,  1779,  1819,   543,  3988,   544,  4199,
     545,   451,   546,   547,   548,   549,   550,  4421,   553,  4541,
    4553,  4585,  4597,   150,   308,  1615,  1655,  1695,  1735,  1775,
    1815,  1859,   554,   556,   555,   558,  1899,  3699,  3739,  1939,
    3779,  3099,  1979,   488,   569,   579,  4629,   581,   582,   583,
     584,   585,  2019,   589,   596,  2059,  2099,  2139,  3899,   602,
    2179,  2219,  2259,  2299,  2339,  1419,  3819,  2379
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
    -160,  -160,  -160,   577,  -160,  -160,  -160,  -160,  -160,   627,
     621,   -29,   -59,   -60,   -55,   -53,   -52,  -160,   -51,   -50,
    -159,   314,   315,   -49,     0,   -44,   -40,   -27,   157,   539,
     280,   403,   844,   878,   992,   757,   721,   623,   487,  1009,
     959,   387,  1107
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    15,    29,    16,    30,    19,
      20,    32,    56,    57,    58,    59,    60,   128,    61,    62,
     145,   177,   178,    63,    64,    65,    66,   206,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   124,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    33,   231,   106,     7,    67,    67,   232,    94,   233,
     234,   235,   236,   237,   -61,   100,    -8,   185,   239,    -8,
     129,    67,   240,   -11,   322,   -61,   -11,   -60,     1,    10,
     127,     2,   277,    67,   -62,    67,    17,    14,   -60,    18,
      86,   -78,   114,   121,    22,   -62,     8,   190,   191,   113,
     252,     9,   131,   132,    -8,   134,    67,   122,    -8,   -76,
     130,   -11,   238,    67,   323,   -11,   162,   163,   146,   -78,
     -77,   114,   140,   141,   -16,   -61,   143,   -76,   -16,   192,
      -5,    67,   -63,    18,    -5,   -61,   252,   252,   241,    85,
     242,   243,   244,   -63,   245,   246,   247,   -55,   -77,    67,
      67,    27,   -60,   251,    89,   222,   223,   224,   -92,   225,
     198,   199,   -60,    67,    67,    28,    67,    -2,   186,   -78,
     278,     2,   180,   181,   -96,   200,    90,   248,   -96,    86,
     -62,   261,   179,    91,   201,   332,   190,   191,   262,   263,
     -62,    34,   205,    36,    37,    38,   -78,    39,    40,    41,
      67,    42,   258,   200,   -63,    -4,    -7,    92,   188,    -4,
      -7,    67,    93,    42,   -63,   271,   -77,   278,   192,    95,
     264,   261,    49,    50,    51,    52,   231,   294,   262,   263,
      55,   232,   126,   233,   234,   235,   236,   237,   353,    96,
     289,    -6,   239,   -77,    97,    -6,   240,   107,   253,    87,
     222,   223,   224,    67,   225,   254,   255,    67,   296,    67,
     264,    98,   207,   -55,   -80,   -80,   298,    99,    -3,   300,
     115,   116,    -3,   -92,   302,   -46,   -17,   303,   101,   -46,
     -17,    23,   308,   122,   108,    24,   238,   256,   -80,   -80,
     -51,   123,   -80,   -73,   279,   280,   207,   324,   325,   207,
     207,   -52,   207,   207,   207,   207,   257,   -74,    12,   -15,
      13,   327,   328,   -15,   330,   -80,    87,    87,   149,   150,
      87,    87,    87,    87,    87,    87,    87,    87,   241,    23,
     242,   243,   244,    25,   245,   246,   247,   -18,   231,   354,
     -14,   -18,   139,   232,   -14,   233,   234,   235,   236,   237,
      67,    67,   -53,    67,   239,   -79,   -79,   250,   240,   -10,
     -13,   115,   116,   -10,   -13,   133,   123,   248,   -55,   207,
     207,    67,    88,   -95,   -79,   -79,   356,   -95,   267,    67,
     279,   280,   142,   -79,   -97,   209,   -66,   -66,   111,   112,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   238,   207,
     161,   -79,   221,   -32,   222,   223,   224,   265,   225,    40,
      41,   -54,   207,   164,   165,   -54,   159,   -94,   -66,   209,
     160,   -94,   209,   209,    42,   209,   209,   209,   209,   166,
     167,   168,   169,    49,    50,    51,    52,   170,   171,   102,
     172,    55,   -66,   -66,   275,   276,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -56,   207,   -61,   -60,   -56,   173,
     -61,   -60,   187,   207,   -62,   -63,   207,   123,   -62,   -63,
     -35,   207,   -93,   -66,   207,   207,   207,   207,   -91,   207,
     265,   265,   311,   312,   265,   265,   265,   265,   265,   265,
     265,   265,   209,   209,   207,   207,   182,   -34,   -83,   -83,
     117,   118,   119,   120,   -83,   -83,   183,   184,   210,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -33,   209,   -33,   -33,   -33,   -83,   -33,   -33,   -33,
     266,   -75,   -57,   -58,   -55,   209,   -57,   -58,   -55,   272,
     159,   -56,   210,   -33,   335,   210,   210,   -70,   210,   210,
     210,   210,   -33,   -33,   -33,   -33,   -71,   -72,   -33,   268,
     -33,   269,   147,   148,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   270,   -59,   209,   -51,
     -61,   -59,   -73,   -52,   -74,   -57,   209,   -53,   -60,   209,
     -62,   -63,   217,   285,   209,   286,   -57,   209,   209,   209,
     209,   287,   209,   288,   290,   -56,   295,   209,   209,   209,
     209,   209,   209,   209,   209,   210,   210,   209,   209,   297,
     -57,   -58,   299,   307,   -54,   321,   217,   326,   329,   217,
     217,    11,   217,   217,   217,   217,   333,   334,   -97,   336,
     337,   338,   339,   340,   208,   210,   -93,   341,   343,   103,
     342,   344,   -59,   210,   155,   156,   157,   158,   210,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,    83,   -91,   249,   -75,   -70,   -71,   -72,   103,   350,
     -56,   208,   208,   351,   208,   103,   103,   103,   103,    84,
     352,   -56,   355,    21,    26,   348,   349,   301,     0,   217,
     217,   210,     0,     0,     0,     0,     0,     0,     0,   210,
       0,     0,   210,     0,     0,     0,     0,   210,     0,     0,
     210,   210,   210,   210,     0,   210,   309,   310,   216,   217,
     210,   210,   210,   210,   210,   210,   210,   210,     0,     0,
     210,   210,   217,     0,     0,     0,     0,     0,   249,   273,
     274,   208,   208,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   216,     0,     0,   216,   216,     0,   216,   216,
     216,   216,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -90,   208,     0,     0,     0,   217,     0,     0,   153,   154,
       0,     0,     0,   217,   208,     0,   217,     0,     0,     0,
     -88,   217,     0,     0,   217,   217,   217,   217,     0,   217,
       0,     0,     0,     0,   217,   217,   217,   217,   317,   318,
     319,   320,     0,   103,   217,   217,   215,   -81,   -81,   117,
     118,   119,   120,   -81,   -81,   216,   216,   208,     0,     0,
       0,     0,     0,     0,     0,   208,     0,     0,   208,   249,
       0,     0,     0,   208,     0,   -81,   208,   103,   103,   103,
     215,   208,   214,   215,   215,   216,   215,   215,   215,   215,
       0,     0,     0,     0,     0,     0,   208,   208,   216,     0,
       0,     0,     0,     0,    34,   152,    36,    37,    38,     0,
      39,    40,    41,     0,     0,     0,   214,     0,     0,   214,
     214,     0,   214,   214,   214,   214,    42,   -82,   -82,   117,
     118,   119,   120,   -82,   -82,    49,    50,    51,    52,     0,
     151,   216,     0,    55,     0,     0,     0,     0,     0,   216,
       0,     0,   216,   215,   215,   -82,     0,   216,     0,     0,
     216,   216,   216,   216,     0,   216,     0,     0,     0,   211,
     216,   216,   315,   316,   104,     0,     0,     0,     0,     0,
     216,   216,     0,   215,     0,     0,     0,     0,     0,   214,
     214,   221,     0,   222,   223,   224,   215,   225,    40,    41,
       0,     0,     0,   212,     0,     0,   211,   211,     0,   211,
     135,   136,   137,    42,     0,     0,     0,     0,     0,   214,
       0,     0,    49,    50,    51,    52,     0,     0,   291,     0,
      55,     0,   214,     0,     0,     0,     0,   125,     0,   215,
     212,   212,     0,   212,   212,   212,   212,   215,     0,     0,
     215,     0,     0,     0,     0,   215,     0,     0,   215,   215,
     215,   215,     0,   215,     0,     0,     0,     0,   215,   314,
       0,     0,     0,     0,     0,   214,   211,   211,   215,   215,
       0,     0,     0,   214,   219,     0,   214,     0,     0,     0,
       0,   214,     0,     0,   214,   214,   214,   214,     0,   214,
       0,     0,     0,     0,   313,     0,   211,     0,     0,     0,
     212,   212,     0,     0,   214,   214,     0,   213,   219,   211,
       0,   219,   219,     0,   219,   219,   219,   219,   138,     0,
       0,     0,     0,     0,   218,     0,     0,     0,     0,     0,
     212,     0,     0,     0,     0,     0,     0,     0,   292,     0,
       0,   213,     0,   212,   213,   213,     0,   213,   213,   213,
     213,     0,   211,     0,     0,     0,     0,     0,     0,     0,
     211,   218,   218,   211,   218,     0,     0,     0,   211,     0,
       0,   211,   304,   305,   306,     0,   211,     0,     0,     0,
       0,   219,   219,     0,     0,     0,   212,     0,     0,     0,
       0,   211,   211,     0,   212,     0,     0,   212,     0,     0,
       0,     0,   212,     0,     0,   212,   212,   212,   212,     0,
     212,   219,     0,     0,   213,   213,     0,     0,     0,     0,
       0,     0,   220,     0,   219,   212,   212,     0,     0,     0,
       0,   218,   218,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   213,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   213,     0,   220,
     220,   218,   220,   -84,     0,     0,   -58,   219,     0,     0,
       0,     0,     0,     0,   218,   219,     0,   -58,   219,     0,
       0,     0,     0,   219,     0,     0,   219,   219,   219,   219,
       0,   219,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,     0,     0,   219,   219,   213,     0,
       0,   213,     0,     0,     0,     0,   213,   218,     0,   213,
     213,   213,   213,     0,   213,   218,     0,     0,   218,   220,
     220,     0,     0,   218,     0,     0,   218,     0,     0,   213,
     213,   218,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   218,   218,    -9,   220,
      -9,    -9,    -9,    -9,    -9,   -54,    -9,    -9,    -9,     0,
       0,     0,   220,     0,     0,     0,   -69,     0,     0,     0,
       0,     0,    -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,
       0,    -9,    -9,    -9,    -9,    -9,     0,     0,    -9,    -9,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   -59,     0,   220,     0,     0,   220,     0,     0,     0,
       0,   220,   -59,     0,   220,     0,     0,     0,   -12,   220,
     -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,   -12,     0,
       0,     0,     0,     0,   220,   220,     0,     0,     0,     0,
       0,     0,   -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,
       0,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,   -12,
      31,     0,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,   -85,
     -20,   -20,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,   -36,   -36,   144,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -86,
     -36,   -36,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,   -38,   -38,   144,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -87,
     -38,   -38,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -83,   -83,   281,   282,   283,   284,   -83,   -83,     0,
       0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -83,     0,
     -22,   -22,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -88,     0,
     -26,   -26,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -81,   -81,   281,   282,   283,   284,   -81,   -81,     0,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -81,     0,
     -28,   -28,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -82,   -82,   281,   282,   283,   284,   -82,   -82,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -82,     0,
     -23,   -23,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -84,     0,
     -24,   -24,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -85,     0,
     -25,   -25,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,   -36,   -36,   331,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -86,     0,
     -36,   -36,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -87,     0,
     -27,   -27,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,
     -46,   -46,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,
     -45,   -45,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,   -37,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -47,   -47,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,   331,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -38,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,     0,
     -48,   -48,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,
     -49,   -49,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,     0,     0,
     -50,   -50,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,
     -39,   -39,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,
     -42,   -42,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,
     -44,   -44,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
      54,    55,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
      82,    55,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
     -19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -19,   -19,     0,   -19,   -19,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,     0,     0,
     -19,   -19,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,     0,
     -22,   -22,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -26,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,    34,   226,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,   227,   228,
     229,   230,     0,    49,    50,    51,    52,    53,     0,   105,
       0,    55,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,
     -25,   -25,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,
     -45,   -45,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     174,    55,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     175,    55,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     176,    55,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -43,
       0,   -41,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,   -37,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
       0,   -40,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -47,   -47,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,     0,
     -48,   -48,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,
     -49,   -49,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,     0,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,     0,     0,
     -50,   -50,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,
     -39,   -39,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,
     -42,   -42,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     189,    55,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,
     -44,   -44,    34,   226,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,   227,   228,
     229,   230,     0,    49,    50,    51,    52,    53,     0,   293,
       0,    55,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,
     -46,   -46,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     345,    55,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     346,    55,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     347,    55,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
     357,    55,    34,    35,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,     0,     0,
       0,    55,    34,   226,    36,    37,    38,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,    44,   227,   228,
     229,   230,     0,    49,    50,    51,    52,    53,     0,     0,
     193,    55,   194,   195,   196,     0,   197,   198,   199,     0,
       0,     0,     0,   251,     0,   222,   223,   224,     0,   225,
     198,   199,   200,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,   204,   200,     0,     0,     0,   205,
       0,     0,     0,     0,   201,   202,   203,   204,     0,     0,
       0,   -27,   205,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -56,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -64,   -64,   111,   112,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -65,
     -65,   111,   112,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,     0,     0,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -57,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,   109,   110,
       0,   -58,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     109,   110,     0,   -59,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,   273,   274,     0,
     -90,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,   -89,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   259,     0,     0,   -89,     0,
       0,     0,     0,     0,   -56,     0,     0,     0,     0,     0,
       0,     0,     0,   260,   -56,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -56,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -59,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
       0,     0,     0,     0,     0,     0,   -56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -57,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -69,   -64,   -64,   275,   276,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -65,   -65,   275,   276,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -59
};

static const yytype_int16 yycheck[] =
{
       0,    30,    62,    62,     4,    32,    33,    62,    48,    62,
      62,    62,    62,    62,    33,    55,     1,   176,    62,     4,
       3,    48,    62,     1,     3,    44,     4,    33,     1,     0,
      90,     4,    16,    60,    33,    62,     1,    42,    44,     4,
       3,    16,    17,    83,     3,    44,     3,    10,    11,    16,
      90,     8,    92,    93,    39,    95,    83,    84,    43,    43,
      43,    39,    62,    90,    43,    43,   126,   127,   108,    44,
      16,    17,   101,   102,    39,    33,   105,    44,    43,    42,
       0,   108,    33,     4,     4,    43,   126,   127,     3,     3,
       5,     6,     7,    44,     9,    10,    11,    33,    44,   126,
     127,    40,    33,     3,    42,     5,     6,     7,    44,     9,
      10,    11,    43,   140,   141,    40,   143,     0,   177,    16,
      17,     4,   162,   163,    39,    25,    42,    42,    43,     3,
      33,     3,   159,    42,    34,   294,    10,    11,    10,    11,
      43,     3,    42,     5,     6,     7,    43,     9,    10,    11,
     177,    25,   192,    25,    33,     0,     0,    42,   187,     4,
       4,   188,    42,    25,    43,   205,    16,    17,    42,    42,
      42,     3,    34,    35,    36,    37,   236,   236,    10,    11,
      42,   236,    44,   236,   236,   236,   236,   236,   347,    42,
     230,     0,   236,    43,    42,     4,   236,    44,     3,    42,
       5,     6,     7,   230,     9,    10,    11,   234,   248,   236,
      42,    42,    55,    33,    16,    17,   256,    42,     0,   259,
      22,    23,     4,    43,   264,     0,    39,   267,    40,     4,
      43,    39,   272,   260,    33,    43,   236,    42,    16,    17,
      44,    84,    44,    44,    22,    23,    89,   287,   288,    92,
      93,    44,    95,    96,    97,    98,    99,    44,    42,    39,
      44,   290,   291,    43,   293,    43,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,     3,    39,
       5,     6,     7,    43,     9,    10,    11,    39,   348,   348,
      39,    43,    43,   348,    43,   348,   348,   348,   348,   348,
     327,   328,    44,   330,   348,    16,    17,    44,   348,     0,
       0,    22,    23,     4,     4,    44,   159,    42,    33,   162,
     163,   348,    42,    39,    16,    17,   355,    43,    42,   356,
      22,    23,    44,    44,    44,    55,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   348,   192,
      43,    43,     3,    40,     5,     6,     7,   200,     9,    10,
      11,    39,   205,    43,    43,    43,    39,    39,    44,    89,
      43,    43,    92,    93,    25,    95,    96,    97,    98,    44,
      43,    43,    43,    34,    35,    36,    37,    43,    43,    40,
      43,    42,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    39,   248,    39,    39,    43,    43,
      43,    43,    40,   256,    39,    39,   259,   260,    43,    43,
      43,   264,    44,    43,   267,   268,   269,   270,    44,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   162,   163,   287,   288,    44,    43,    16,    17,
      18,    19,    20,    21,    22,    23,    44,    44,    55,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     3,   192,     5,     6,     7,    44,     9,    10,    11,
     200,    44,    39,    39,    39,   205,    43,    43,    43,    33,
      39,    44,    89,    25,    43,    92,    93,    44,    95,    96,
      97,    98,    34,    35,    36,    37,    44,    44,    40,    42,
      42,    42,   109,   110,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    42,    39,   248,    43,
      33,    43,    43,    43,    43,    33,   256,    43,    33,   259,
      33,    33,    55,     3,   264,    42,    44,   267,   268,   269,
     270,    42,   272,    42,    40,    33,    44,   277,   278,   279,
     280,   281,   282,   283,   284,   162,   163,   287,   288,    44,
      33,    33,    43,    43,    33,    44,    89,    44,    44,    92,
      93,     4,    95,    96,    97,    98,    43,    43,    43,    43,
      43,    43,    43,    43,    55,   192,    43,    43,    43,    60,
      44,    43,    33,   200,   117,   118,   119,   120,   205,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    43,    84,    43,    43,    43,    43,    89,    44,
      33,    92,    93,    44,    95,    96,    97,    98,    99,    42,
      44,    44,    40,    16,    23,   331,   331,   260,    -1,   162,
     163,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,   259,    -1,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,   269,   270,    -1,   272,   273,   274,    55,   192,
     277,   278,   279,   280,   281,   282,   283,   284,    -1,    -1,
     287,   288,   205,    -1,    -1,    -1,    -1,    -1,   159,    12,
      13,   162,   163,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    89,    -1,    -1,    92,    93,    -1,    95,    96,
      97,    98,    16,    17,    18,    19,    20,    21,    22,    23,
      43,   192,    -1,    -1,    -1,   248,    -1,    -1,   115,   116,
      -1,    -1,    -1,   256,   205,    -1,   259,    -1,    -1,    -1,
      44,   264,    -1,    -1,   267,   268,   269,   270,    -1,   272,
      -1,    -1,    -1,    -1,   277,   278,   279,   280,   281,   282,
     283,   284,    -1,   234,   287,   288,    55,    16,    17,    18,
      19,    20,    21,    22,    23,   162,   163,   248,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,   259,   260,
      -1,    -1,    -1,   264,    -1,    44,   267,   268,   269,   270,
      89,   272,    55,    92,    93,   192,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   287,   288,   205,    -1,
      -1,    -1,    -1,    -1,     3,   114,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    89,    -1,    -1,    92,
      93,    -1,    95,    96,    97,    98,    25,    16,    17,    18,
      19,    20,    21,    22,    23,    34,    35,    36,    37,    -1,
     113,   248,    -1,    42,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,   259,   162,   163,    44,    -1,   264,    -1,    -1,
     267,   268,   269,   270,    -1,   272,    -1,    -1,    -1,    55,
     277,   278,   279,   280,    60,    -1,    -1,    -1,    -1,    -1,
     287,   288,    -1,   192,    -1,    -1,    -1,    -1,    -1,   162,
     163,     3,    -1,     5,     6,     7,   205,     9,    10,    11,
      -1,    -1,    -1,    55,    -1,    -1,    92,    93,    -1,    95,
      96,    97,    98,    25,    -1,    -1,    -1,    -1,    -1,   192,
      -1,    -1,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      42,    -1,   205,    -1,    -1,    -1,    -1,    89,    -1,   248,
      92,    93,    -1,    95,    96,    97,    98,   256,    -1,    -1,
     259,    -1,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
     269,   270,    -1,   272,    -1,    -1,    -1,    -1,   277,   278,
      -1,    -1,    -1,    -1,    -1,   248,   162,   163,   287,   288,
      -1,    -1,    -1,   256,    55,    -1,   259,    -1,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,   269,   270,    -1,   272,
      -1,    -1,    -1,    -1,   277,    -1,   192,    -1,    -1,    -1,
     162,   163,    -1,    -1,   287,   288,    -1,    55,    89,   205,
      -1,    92,    93,    -1,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    89,    -1,   205,    92,    93,    -1,    95,    96,    97,
      98,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     256,    92,    93,   259,    95,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,   269,   270,    -1,   272,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,   287,   288,    -1,   256,    -1,    -1,   259,    -1,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,   269,   270,    -1,
     272,   192,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   205,   287,   288,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   192,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   205,    -1,    92,
      93,   192,    95,    44,    -1,    -1,    33,   248,    -1,    -1,
      -1,    -1,    -1,    -1,   205,   256,    -1,    44,   259,    -1,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,   269,   270,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   287,   288,   256,    -1,
      -1,   259,    -1,    -1,    -1,    -1,   264,   248,    -1,   267,
     268,   269,   270,    -1,   272,   256,    -1,    -1,   259,   162,
     163,    -1,    -1,   264,    -1,    -1,   267,    -1,    -1,   287,
     288,   272,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   287,   288,     1,   192,
       3,     4,     5,     6,     7,    33,     9,    10,    11,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,    33,    -1,   256,    -1,    -1,   259,    -1,    -1,    -1,
      -1,   264,    44,    -1,   267,    -1,    -1,    -1,     1,   272,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   287,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    44,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    44,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    44,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    43,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
       3,    42,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,    -1,     9,
      10,    11,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    25,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    -1,
      -1,     3,    42,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    44,    16,    17,    18,    19,    20,    21,    22,    23,
      12,    13,    -1,    44,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      44,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    44,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    12,    13,    14,    15,    16,
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
      -1,    -1,    -1,    -1,    43,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    47,    48,    49,    50,    70,     3,     8,
       0,    49,    42,    44,    42,    51,    53,     1,     4,    55,
      56,    55,     3,    39,    43,    43,    56,    40,    40,    52,
      54,     1,    57,    57,     3,     4,     5,     6,     7,     9,
      10,    11,    25,    26,    28,    29,    30,    31,    32,    34,
      35,    36,    37,    38,    41,    42,    58,    59,    60,    61,
      62,    64,    65,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    88,    41,    24,    42,     3,     3,    74,    76,    42,
      42,    42,    42,    42,    72,    42,    42,    42,    42,    42,
      72,    40,    40,    75,    78,    40,    58,    44,    33,    12,
      13,    14,    15,    16,    17,    22,    23,    18,    19,    20,
      21,    72,    73,    74,    87,    79,    44,    59,    63,     3,
      43,    72,    72,    44,    72,    78,    78,    78,    86,    43,
      57,    57,    44,    57,    27,    66,    72,    77,    77,    74,
      74,    81,    82,    83,    83,    84,    84,    84,    84,    39,
      43,    43,    59,    59,    43,    43,    44,    43,    43,    43,
      43,    43,    43,    43,    41,    41,    41,    67,    68,    73,
      72,    72,    44,    44,    44,    66,    58,    40,    57,    41,
      10,    11,    42,     3,     5,     6,     7,     9,    10,    11,
      25,    34,    35,    36,    37,    42,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      88,     3,     5,     6,     7,     9,     4,    29,    30,    31,
      32,    59,    60,    61,    62,    64,    65,    69,    70,    71,
      72,     3,     5,     6,     7,     9,    10,    11,    42,    75,
      44,     3,    72,     3,    10,    11,    42,    74,    72,    24,
      42,     3,    10,    11,    42,    74,    76,    42,    42,    42,
      42,    72,    33,    12,    13,    14,    15,    16,    17,    22,
      23,    18,    19,    20,    21,     3,    42,    42,    42,    72,
      40,    40,    78,    40,    58,    44,    72,    44,    72,    43,
      72,    87,    72,    72,    78,    78,    78,    43,    72,    77,
      77,    74,    74,    81,    82,    83,    83,    84,    84,    84,
      84,    44,     3,    43,    72,    72,    44,    57,    57,    44,
      57,    27,    66,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    44,    43,    43,    41,    41,    41,    67,    68,
      44,    44,    44,    66,    58,    40,    57,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    51,    52,
      50,    53,    54,    50,    55,    55,    55,    55,    56,    57,
      57,    57,    58,    58,    58,    58,    58,    59,    60,    60,
      60,    60,    61,    62,    63,    63,    64,    64,    64,    64,
      65,    67,    66,    68,    66,    69,    70,    71,    71,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    75,    75,    76,    76,    76,    77,    77,    77,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    87,    87,    87,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
      10,     0,     0,    10,     3,     1,     0,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       3,     4,     4,     4,     3,     3,     2,     3,     4,     5,
       4,     0,     3,     0,     5,     3,     3,     4,     5,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       4,     4,     4,     1,     1,     4,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     2,
       1,     4,     1,     3,     3,     1,     0,     3
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
#line 91 "newcParser.y"
                      {
      ast_tree = (yyval.tree_node);
    }
#line 2635 "newcParser.tab.c"
    break;

  case 3: /* declarations_list: declarations_list declaration  */
#line 97 "newcParser.y"
                                  {
      (yyval.tree_node) = create_node2("declarations_list declaration", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2643 "newcParser.tab.c"
    break;

  case 4: /* declarations_list: declaration  */
#line 100 "newcParser.y"
                {
      (yyval.tree_node) = create_node1("declaration", (yyvsp[0].tree_node));
    }
#line 2651 "newcParser.tab.c"
    break;

  case 5: /* declarations_list: error  */
#line 103 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
#line 2661 "newcParser.tab.c"
    break;

  case 6: /* declaration: var_dec  */
#line 111 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
    }
#line 2669 "newcParser.tab.c"
    break;

  case 7: /* declaration: func_dec  */
#line 114 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("func_dec", (yyvsp[0].tree_node));
    }
#line 2677 "newcParser.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 120 "newcParser.y"
                   {
      scope++;
      push_stack(scope);
    }
#line 2686 "newcParser.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 123 "newcParser.y"
                                {
      UT_string *r;
      utstring_new(r);
      errors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters, r);
      add_func((yyvsp[-5].str));
      parameters = 0;
    }
#line 2698 "newcParser.tab.c"
    break;

  case 10: /* func_dec: TYPE ID PARENL $@1 params_list PARENR STFUNC $@2 statement_list ENDFUNC  */
#line 129 "newcParser.y"
                              {
      (yyval.tree_node) = create_node4("TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0((yyvsp[-9].str)), create_node0((yyvsp[-8].str)), (yyvsp[-5].tree_node), (yyvsp[-1].tree_node));
      pop_stack();
      if(check_types_return_function((yyvsp[-1].tree_node) -> returnType, (yyvsp[-9].str)[0]) == 0) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO INESPERADO, linha %d, coluna %d\n\n", (yyvsp[-8].str), line, word_position);
        semanticErrors += 1;
      }else if(check_types_return_function((yyvsp[-1].tree_node) -> returnType, (yyvsp[-9].str)[0]) == 1) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s SEM RETORNO ESPERADO, linha %d, coluna %d\n\n", (yyvsp[-8].str), line, word_position);
        semanticErrors += 1;
      } else if (check_types_return_function((yyvsp[-1].tree_node) -> returnType, (yyvsp[-9].str)[0]) == 3) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO DE TIPO ERRADO, linha %d, coluna %d\n\n", (yyvsp[-8].str), line, word_position);
        semanticErrors += 1;
      }
    }
#line 2720 "newcParser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 146 "newcParser.y"
                     {
      scope++;
      push_stack(scope);
    }
#line 2729 "newcParser.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 149 "newcParser.y"
                                {
      UT_string *r;
      utstring_new(r);
      semanticErrors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters, r);
      add_func((yyvsp[-5].str));
      parameters = 0;
    }
#line 2741 "newcParser.tab.c"
    break;

  case 13: /* func_dec: TYPE MAIN PARENL $@3 params_list PARENR STFUNC $@4 statement_list ENDFUNC  */
#line 155 "newcParser.y"
                             {
      symbolIdCounter++;
      (yyval.tree_node) = create_node4("TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0((yyvsp[-9].str)), create_node0((yyvsp[-8].str)), (yyvsp[-5].tree_node), (yyvsp[-1].tree_node));
      has_main++;
      pop_stack();
      if(check_types_return_function((yyvsp[-1].tree_node) -> returnType, (yyvsp[-9].str)[0]) == 0) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO INESPERADO, linha %d, coluna %d\n\n", (yyvsp[-8].str), line, word_position);
        semanticErrors += 1;
      }else if(check_types_return_function((yyvsp[-1].tree_node) -> returnType, (yyvsp[-9].str)[0]) == 1) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s SEM RETORNO ESPERADO, linha %d, coluna %d\n\n", (yyvsp[-8].str), line, word_position);
        semanticErrors += 1;
      } else if (check_types_return_function((yyvsp[-1].tree_node) -> returnType, (yyvsp[-9].str)[0]) == 3) {
        printf("ERRO SEMATICO\n");
        printf("FUNCAO %s COM RETORNO DE TIPO ERRADO, linha %d, coluna %d\n\n", (yyvsp[-8].str), line, word_position);
        semanticErrors += 1;
      }
    }
#line 2765 "newcParser.tab.c"
    break;

  case 14: /* params_list: params_list COMMA parameter  */
#line 177 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("params_list COMMA parameter", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2773 "newcParser.tab.c"
    break;

  case 15: /* params_list: parameter  */
#line 180 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("parameter", (yyvsp[0].tree_node));
    }
#line 2781 "newcParser.tab.c"
    break;

  case 16: /* params_list: %empty  */
#line 183 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2789 "newcParser.tab.c"
    break;

  case 17: /* params_list: error  */
#line 186 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
#line 2799 "newcParser.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 194 "newcParser.y"
            {
      parameters++;
      (yyval.tree_node) = create_node2("TYPE ID", create_node0((yyvsp[-1].str)), create_node0((yyvsp[0].str)));
      semanticErrors += add_symbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stack_scope) -> value, 0, create_new_reg(var_reg));
      var_reg++;
    }
#line 2810 "newcParser.tab.c"
    break;

  case 19: /* statement_list: statement_list statement  */
#line 203 "newcParser.y"
                             {
      (yyval.tree_node) = create_node2("statement_list statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
      if((yyvsp[-1].tree_node) -> returnType == 'x')
        (yyval.tree_node) -> returnType = (yyvsp[0].tree_node) -> returnType;
      else
        (yyval.tree_node) -> returnType = (yyvsp[-1].tree_node) -> returnType;
    }
#line 2822 "newcParser.tab.c"
    break;

  case 20: /* statement_list: %empty  */
#line 210 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2830 "newcParser.tab.c"
    break;

  case 21: /* statement_list: error  */
#line 213 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
    }
#line 2838 "newcParser.tab.c"
    break;

  case 22: /* statement: expression_statement  */
#line 219 "newcParser.y"
                         {
      (yyval.tree_node) = create_node1("expression_statement", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 2847 "newcParser.tab.c"
    break;

  case 23: /* statement: ret_st  */
#line 223 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("ret_st", (yyvsp[0].tree_node));
      (yyval.tree_node) -> returnType = (yyvsp[0].tree_node) -> returnType;
    }
#line 2856 "newcParser.tab.c"
    break;

  case 24: /* statement: var_dec  */
#line 227 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
    }
#line 2864 "newcParser.tab.c"
    break;

  case 25: /* statement: io_ops  */
#line 230 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("io_ops", (yyvsp[0].tree_node));
    }
#line 2872 "newcParser.tab.c"
    break;

  case 26: /* statement: basic_ops  */
#line 233 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("basic_ops", (yyvsp[0].tree_node));
    }
#line 2880 "newcParser.tab.c"
    break;

  case 27: /* expression_statement: expression SEMIC  */
#line 239 "newcParser.y"
                     {
      (yyval.tree_node) = create_node1("expression SEMIC", (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 2889 "newcParser.tab.c"
    break;

  case 28: /* basic_ops: if_ops  */
#line 246 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("if_ops", (yyvsp[0].tree_node));
    }
#line 2897 "newcParser.tab.c"
    break;

  case 29: /* basic_ops: for_statement STFUNC statement_list ENDFUNC  */
#line 249 "newcParser.y"
                                                {
      pop_stack();
      (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2906 "newcParser.tab.c"
    break;

  case 30: /* basic_ops: forall_statement set_op SEMIC  */
#line 253 "newcParser.y"
                                  {
      pop_stack();
      (yyval.tree_node) = create_node2("FORALL PARENL in_set PARENR set_op SEMIC ", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node));
    }
#line 2915 "newcParser.tab.c"
    break;

  case 31: /* basic_ops: forall_statement STFUNC statement_list ENDFUNC  */
#line 257 "newcParser.y"
                                                   {
      pop_stack();
      (yyval.tree_node) = create_node2("FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2924 "newcParser.tab.c"
    break;

  case 32: /* for_statement: FOR PARENL for_body PARENR  */
#line 264 "newcParser.y"
                             {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 2934 "newcParser.tab.c"
    break;

  case 33: /* forall_statement: FORALL PARENL in_set PARENR  */
#line 272 "newcParser.y"
                              {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FORALL PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 2944 "newcParser.tab.c"
    break;

  case 34: /* for_body: expression_statement expression_statement expression  */
#line 280 "newcParser.y"
                                                         {
      (yyval.tree_node) = create_node3("expression_statement expression_statement expression", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2952 "newcParser.tab.c"
    break;

  case 35: /* for_body: SEMIC expression_statement expression  */
#line 283 "newcParser.y"
                                          {
      (yyval.tree_node) = create_node2("SEMIC expression_statement expression", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2960 "newcParser.tab.c"
    break;

  case 36: /* if_ops: if_statement statement  */
#line 289 "newcParser.y"
                                           {
      (yyval.tree_node) = create_node2("if_statement statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2968 "newcParser.tab.c"
    break;

  case 37: /* if_ops: if_statement statement else_statement  */
#line 292 "newcParser.y"
                                          {
      pop_stack();
      (yyval.tree_node) = create_node3("if_statement statement else_statement", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2977 "newcParser.tab.c"
    break;

  case 38: /* if_ops: if_statement STFUNC statement_list ENDFUNC  */
#line 296 "newcParser.y"
                                                               {
      pop_stack();
      (yyval.tree_node) = create_node2("if_statement STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2986 "newcParser.tab.c"
    break;

  case 39: /* if_ops: if_statement STFUNC statement_list ENDFUNC else_statement  */
#line 300 "newcParser.y"
                                                              {
      (yyval.tree_node) = create_node3("if_statement STFUNC statement_list ENDFUNC else_statement", (yyvsp[-4].tree_node), (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2994 "newcParser.tab.c"
    break;

  case 40: /* if_statement: IF PARENL operation PARENR  */
#line 306 "newcParser.y"
                               {
      scope++;
      push_stack(scope);
      (yyval.tree_node) = create_node2("IF PARENL operation PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 3004 "newcParser.tab.c"
    break;

  case 41: /* $@5: %empty  */
#line 314 "newcParser.y"
         {
      pop_stack();
      scope++;
      push_stack(scope);
    }
#line 3014 "newcParser.tab.c"
    break;

  case 42: /* else_statement: ELSE $@5 statement  */
#line 319 "newcParser.y"
              {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE statement_list", create_node0((yyvsp[-2].str)), (yyvsp[0].tree_node));
    }
#line 3023 "newcParser.tab.c"
    break;

  case 43: /* $@6: %empty  */
#line 323 "newcParser.y"
         {
      pop_stack();
      scope++;
      push_stack(scope);
    }
#line 3033 "newcParser.tab.c"
    break;

  case 44: /* else_statement: ELSE $@6 STFUNC statement_list ENDFUNC  */
#line 327 "newcParser.y"
                                    {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE STFUNC statement_list ENDFUNC", create_node0((yyvsp[-4].str)), (yyvsp[-1].tree_node));
    }
#line 3042 "newcParser.tab.c"
    break;

  case 45: /* ret_st: RETURN expression SEMIC  */
#line 335 "newcParser.y"
                            {
      (yyval.tree_node) = create_node2("RETURN expression SEMIC", create_node0((yyvsp[-2].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> returnType = (yyvsp[-1].tree_node) -> type;
    }
#line 3051 "newcParser.tab.c"
    break;

  case 46: /* var_dec: TYPE ID SEMIC  */
#line 342 "newcParser.y"
                  {
      semanticErrors += add_symbol((yyvsp[-1].str), "var", (yyvsp[-2].str), STACK_TOP(stack_scope) -> value, 0, create_new_reg(var_reg));
      UT_string *s;
      if((yyvsp[-2].str)[0] == 'i' || (yyvsp[-2].str)[0] == 'e') {
        utstring_new(s);
        utstring_printf(s, "$%d", var_reg);

        var_dec_assign(utstring_body(s), "0");
      } else if((yyvsp[-2].str)[0] == 'f') {
        utstring_new(s);
        utstring_printf(s, "$%d", var_reg);

        var_dec_assign(utstring_body(s), "0.0");
      } else if((yyvsp[-2].str)[0] == 's') {
        utstring_new(s);
        utstring_printf(s, "$%d", var_reg);

        var_dec_assign(utstring_body(s), "0");
      }
      var_reg++;
      (yyval.tree_node) = create_node2("TYPE ID SEMIC", create_node0((yyvsp[-2].str)), create_node0((yyvsp[-1].str)));
    }
#line 3078 "newcParser.tab.c"
    break;

  case 47: /* io_ops: READ PARENL PARENR SEMIC  */
#line 367 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("READ PARENL PARENR SEMIC", create_node0((yyvsp[-3].str)));
    }
#line 3086 "newcParser.tab.c"
    break;

  case 48: /* io_ops: READ PARENL ID PARENR SEMIC  */
#line 370 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("READ PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), create_node0((yyvsp[-2].str)));
    }
#line 3094 "newcParser.tab.c"
    break;

  case 49: /* io_ops: WRITE PARENL expression PARENR SEMIC  */
#line 373 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("WRITE PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
      write_func((yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = (yyvsp[-2].tree_node) -> saved;
    }
#line 3104 "newcParser.tab.c"
    break;

  case 50: /* io_ops: WRITELN PARENL expression PARENR SEMIC  */
#line 378 "newcParser.y"
                                           {
      (yyval.tree_node) = create_node2("WRITELN PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
      writeln_func((yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = (yyvsp[-2].tree_node) -> saved;
    }
#line 3114 "newcParser.tab.c"
    break;

  case 51: /* expression: set_op  */
#line 386 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("set_op", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
      if ((yyvsp[0].tree_node) -> type == 'u') {
        printf("ERRO SEMATICO\n");
        printf("ERRO DE TIPOS ENCONTRADO, linha %d, coluna %d\n\n", line, word_position);
        semanticErrors += 1;
      }
    }
#line 3129 "newcParser.tab.c"
    break;

  case 52: /* expression: func_call  */
#line 396 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("func_call", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3138 "newcParser.tab.c"
    break;

  case 53: /* expression: assign_value  */
#line 400 "newcParser.y"
                 {
      (yyval.tree_node) = create_node1("assign_value", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3148 "newcParser.tab.c"
    break;

  case 54: /* term: math_term  */
#line 408 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("math_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3158 "newcParser.tab.c"
    break;

  case 55: /* term: str_term  */
#line 413 "newcParser.y"
             {
      (yyval.tree_node) = create_node1("str_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3168 "newcParser.tab.c"
    break;

  case 56: /* math_term: ID  */
#line 421 "newcParser.y"
       {
      struct symbol *s = check_is_in_scope((yyvsp[0].str), STACK_TOP(stack_scope) -> value);
      if (s != NULL) {
        (yyval.tree_node) = create_node1("ID", create_node0_string((yyvsp[0].str)));
        (yyval.tree_node) -> type = s -> returnFuncVarType[0];
        (yyval.tree_node) -> saved = utstring_body(s -> var_reg);
      }
      else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[0].str), line, word_position);
        semanticErrors += 1;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 3187 "newcParser.tab.c"
    break;

  case 57: /* math_term: INTEGER  */
#line 435 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("INTEGER", create_node0_int((yyvsp[0].integer), 'i'));
      (yyval.tree_node) -> type = 'i';
      UT_string *s = int_as_str((yyvsp[0].integer));
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3198 "newcParser.tab.c"
    break;

  case 58: /* math_term: DECIMAL  */
#line 441 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("DECIMAL", create_node0_dec((yyvsp[0].dec), 'f'));
      (yyval.tree_node) -> type = 'f';
      UT_string *s = float_as_str((yyvsp[0].dec));
      (yyval.tree_node) -> saved = utstring_body(s);
  }
#line 3209 "newcParser.tab.c"
    break;

  case 59: /* math_term: PARENL expression PARENR  */
#line 447 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("PARENL expression PARENR", (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[-1].tree_node) -> saved;
    }
#line 3219 "newcParser.tab.c"
    break;

  case 60: /* str_term: CHAR  */
#line 455 "newcParser.y"
         {
      (yyval.tree_node) = create_node1("CHAR", create_node0_char((yyvsp[0].str), 'c'));
      (yyval.tree_node) -> type = 'c';
      (yyval.tree_node) -> saved = (yyvsp[0].str);
    }
#line 3229 "newcParser.tab.c"
    break;

  case 61: /* str_term: STRING  */
#line 460 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("STRING", create_node0((yyvsp[0].str)));
      (yyval.tree_node) -> type = 't';
      (yyval.tree_node) -> saved = (yyvsp[0].str);
    }
#line 3239 "newcParser.tab.c"
    break;

  case 62: /* str_term: EMPTY  */
#line 465 "newcParser.y"
          {
      (yyval.tree_node) = create_node1("EMPTY", create_node0((yyvsp[0].str)));
      (yyval.tree_node) -> type = 's';
      (yyval.tree_node) -> saved = (yyvsp[0].str);
    }
#line 3249 "newcParser.tab.c"
    break;

  case 63: /* str_term: ERRORTOKEN  */
#line 470 "newcParser.y"
               {
      (yyval.tree_node) = create_node_empty();
    }
#line 3257 "newcParser.tab.c"
    break;

  case 64: /* math_op: math_op ADD math_op_muldiv  */
#line 476 "newcParser.y"
                               {
      (yyval.tree_node) = create_node3("math_op ADD math_op_muldiv", (yyvsp[-2].tree_node), create_node0("+"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("add", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3269 "newcParser.tab.c"
    break;

  case 65: /* math_op: math_op SUB math_op_muldiv  */
#line 483 "newcParser.y"
                               {
      (yyval.tree_node) = create_node3("math_op SUB math_op_muldiv", (yyvsp[-2].tree_node), create_node0("-"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("sub", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3281 "newcParser.tab.c"
    break;

  case 66: /* math_op: math_op_muldiv  */
#line 490 "newcParser.y"
                   {
      (yyval.tree_node) = create_node1("math_op_muldiv", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3291 "newcParser.tab.c"
    break;

  case 67: /* math_op_muldiv: math_op_muldiv DIV math_term  */
#line 498 "newcParser.y"
                                 {
      (yyval.tree_node) = create_node3("math_op_muldiv DIV term", (yyvsp[-2].tree_node), create_node0("/"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("div", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3303 "newcParser.tab.c"
    break;

  case 68: /* math_op_muldiv: math_op_muldiv MULT math_term  */
#line 505 "newcParser.y"
                                  {
      (yyval.tree_node) = create_node3("math_op_muldiv MULT term", (yyvsp[-2].tree_node), create_node0("*"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("mul", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3315 "newcParser.tab.c"
    break;

  case 69: /* math_op_muldiv: math_term  */
#line 512 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("math_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3325 "newcParser.tab.c"
    break;

  case 70: /* set_op: ADDSET PARENL set_op PARENR  */
#line 520 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("ADDSET PARENL set_op PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3334 "newcParser.tab.c"
    break;

  case 71: /* set_op: REMOVE PARENL set_op PARENR  */
#line 524 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("REMOVE PARENL set_op PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3343 "newcParser.tab.c"
    break;

  case 72: /* set_op: EXISTS PARENL set_op PARENR  */
#line 528 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("EXISTS PARENL set_op PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3352 "newcParser.tab.c"
    break;

  case 73: /* set_op: operation  */
#line 532 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3362 "newcParser.tab.c"
    break;

  case 74: /* operation: in_set  */
#line 540 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("in_set", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3371 "newcParser.tab.c"
    break;

  case 75: /* operation: ISTYPE PARENL expression PARENR  */
#line 544 "newcParser.y"
                                    {
      (yyval.tree_node) = create_node2("ISTYPE PARENL expression PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 3379 "newcParser.tab.c"
    break;

  case 76: /* operation: or_operation  */
#line 547 "newcParser.y"
                 {
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3388 "newcParser.tab.c"
    break;

  case 77: /* or_operation: or_operation OR and_operation  */
#line 554 "newcParser.y"
                                  {
      (yyval.tree_node) = create_node3("term OR expression", (yyvsp[-2].tree_node), create_node0("||"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("or", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3401 "newcParser.tab.c"
    break;

  case 78: /* or_operation: and_operation  */
#line 562 "newcParser.y"
                  {
      (yyval.tree_node) = create_node1("and_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3411 "newcParser.tab.c"
    break;

  case 79: /* and_operation: and_operation AND equality_operation  */
#line 570 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node3("term AND expression", (yyvsp[-2].tree_node), create_node0("&&"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("and", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3424 "newcParser.tab.c"
    break;

  case 80: /* and_operation: equality_operation  */
#line 578 "newcParser.y"
                       {
      (yyval.tree_node) = create_node1("equality_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3434 "newcParser.tab.c"
    break;

  case 81: /* equality_operation: equality_operation EQUALS relational_operation  */
#line 586 "newcParser.y"
                                                   {
      (yyval.tree_node) = create_node3("term EQUALS expression", (yyvsp[-2].tree_node), create_node0("=="), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("seq", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3447 "newcParser.tab.c"
    break;

  case 82: /* equality_operation: equality_operation DIFFERENT relational_operation  */
#line 594 "newcParser.y"
                                                      {
      (yyval.tree_node) = create_node3("term DIFFERENT expression", (yyvsp[-2].tree_node), create_node0("!="), (yyvsp[0].tree_node));
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("seq", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      not_func(s, s);
      (yyval.tree_node) -> saved = s;
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
    }
#line 3460 "newcParser.tab.c"
    break;

  case 83: /* equality_operation: relational_operation  */
#line 602 "newcParser.y"
                         {
      (yyval.tree_node) = create_node1("relational_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3470 "newcParser.tab.c"
    break;

  case 84: /* relational_operation: relational_operation SMALLER negation_operation  */
#line 610 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term SMALLER expression", (yyvsp[-2].tree_node), create_node0("<"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("slt", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3483 "newcParser.tab.c"
    break;

  case 85: /* relational_operation: relational_operation GREATER negation_operation  */
#line 618 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term GREATER expression", (yyvsp[-2].tree_node), create_node0(">"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("slt", s, (yyvsp[0].tree_node) -> saved, (yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3496 "newcParser.tab.c"
    break;

  case 86: /* relational_operation: relational_operation SMALLEQ negation_operation  */
#line 626 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term SMALLEQ expression", (yyvsp[-2].tree_node), create_node0("<="), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("sleq", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3509 "newcParser.tab.c"
    break;

  case 87: /* relational_operation: relational_operation GREATEQ negation_operation  */
#line 634 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term GREATEQ expression", (yyvsp[-2].tree_node), create_node0(">="), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("sleq", s, (yyvsp[0].tree_node) -> saved, (yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3522 "newcParser.tab.c"
    break;

  case 88: /* relational_operation: negation_operation  */
#line 642 "newcParser.y"
                       {
      (yyval.tree_node) = create_node1("negation_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3532 "newcParser.tab.c"
    break;

  case 89: /* negation_operation: NEG math_op  */
#line 650 "newcParser.y"
                {
      (yyval.tree_node) = create_node2("NEG math_op", create_node0("!"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      not_func((yyvsp[0].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3543 "newcParser.tab.c"
    break;

  case 90: /* negation_operation: math_op  */
#line 656 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("math_op", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3553 "newcParser.tab.c"
    break;

  case 91: /* func_call: ID PARENL args_list PARENR  */
#line 664 "newcParser.y"
                               {
      if (find_symbol_func((yyvsp[-3].str)) != NULL){
        if (check_number_of_params(args_params, (yyvsp[-3].str))){
          args_params = 0;
          (yyval.tree_node) = create_node2("ID PARENL args_list PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
          (yyval.tree_node) -> type = find_symbol_func((yyvsp[-3].str)) -> returnFuncVarType[0];
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
#line 3579 "newcParser.tab.c"
    break;

  case 92: /* func_call: str_term  */
#line 685 "newcParser.y"
             {
      (yyval.tree_node) = create_node1("str_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3588 "newcParser.tab.c"
    break;

  case 93: /* in_set: term IN expression  */
#line 692 "newcParser.y"
                       {
      (yyval.tree_node) = create_node3("term IN expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types_set((yyvsp[0].tree_node) -> type);
    }
#line 3597 "newcParser.tab.c"
    break;

  case 94: /* args_list: args_list COMMA term  */
#line 699 "newcParser.y"
                         {
      args_params++;
      (yyval.tree_node) = create_node2("args_list COMMA term", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 3606 "newcParser.tab.c"
    break;

  case 95: /* args_list: term  */
#line 703 "newcParser.y"
         {
      args_params++;
      (yyval.tree_node) = create_node1("term", (yyvsp[0].tree_node));
    }
#line 3615 "newcParser.tab.c"
    break;

  case 96: /* args_list: %empty  */
#line 707 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 3623 "newcParser.tab.c"
    break;

  case 97: /* assign_value: ID ASSIGN expression  */
#line 714 "newcParser.y"
                         {
      struct symbol *s = check_is_in_scope((yyvsp[-2].str), STACK_TOP(stack_scope) -> value);
      if (s != NULL){
        (yyval.tree_node) = create_node3("ID ASSIGN expression", create_node0((yyvsp[-2].str)), create_node0("="), (yyvsp[0].tree_node));
        var_dec_assign(utstring_body(s -> var_reg), (yyvsp[0].tree_node) -> saved);
        (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
        if (s -> returnFuncVarType[0] != 'e')
          (yyval.tree_node) -> type = s -> returnFuncVarType[0];
        else
          (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
        if(!check_types_var(s -> returnFuncVarType[0], (yyvsp[0].tree_node) -> type)) {
          printf("ERRO SEMATICO\n");
          printf("VARIAVEL %s DO TIPO %s RECEBENDO VALOR DE TIPO INVALIDO, linha %d, coluna %d\n\n", (yyvsp[-2].str), s -> returnFuncVarType, line, word_position);
          semanticErrors += 1;
        }
      }else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[-2].str), line, word_position);
        semanticErrors += 1;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 3650 "newcParser.tab.c"
    break;


#line 3654 "newcParser.tab.c"

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

#line 740 "newcParser.y"


int main(int argc, char *argv[]) {

  push_stack(0);

  tacfile = fopen("file.tac", "w");
  fprintf (tacfile, ".table\n");
  fprintf (tacfile, ".code\n");

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

  write_tac_file(current_line);

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

  free_codegen();

  fclose(yyin);

  fclose(tacfile);

  yylex_destroy();

  return 0;
}
