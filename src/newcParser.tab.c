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
int var_reg = 0;
int if_id = 0;

extern Symbol *symbol_table;
Node *ast_tree = NULL;
extern Scope *stack_scope;
extern Scope *stack_ifelse;
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


#line 114 "newcParser.tab.c"

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
  YYSYMBOL_OUTERTHEN = 44,                 /* OUTERTHEN  */
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
  YYSYMBOL_math_term = 73,                 /* math_term  */
  YYSYMBOL_str_term = 74,                  /* str_term  */
  YYSYMBOL_math_op = 75,                   /* math_op  */
  YYSYMBOL_math_op_muldiv = 76,            /* math_op_muldiv  */
  YYSYMBOL_many_operations = 77,           /* many_operations  */
  YYSYMBOL_operation = 78,                 /* operation  */
  YYSYMBOL_or_operation = 79,              /* or_operation  */
  YYSYMBOL_and_operation = 80,             /* and_operation  */
  YYSYMBOL_equality_operation = 81,        /* equality_operation  */
  YYSYMBOL_relational_operation = 82,      /* relational_operation  */
  YYSYMBOL_negation_operation = 83,        /* negation_operation  */
  YYSYMBOL_func_call = 84,                 /* func_call  */
  YYSYMBOL_in_set = 85,                    /* in_set  */
  YYSYMBOL_args_list = 86,                 /* args_list  */
  YYSYMBOL_assign_value = 87               /* assign_value  */
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
#define YYLAST   6380

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  500

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
       0,    92,    92,    98,   101,   104,   112,   115,   121,   124,
     121,   147,   150,   147,   178,   181,   184,   187,   195,   204,
     211,   214,   220,   224,   228,   231,   234,   240,   247,   250,
     254,   258,   262,   269,   277,   285,   288,   291,   297,   300,
     304,   308,   314,   322,   322,   331,   331,   343,   350,   375,
     388,   393,   401,   411,   415,   423,   428,   436,   450,   456,
     462,   470,   475,   480,   488,   495,   502,   510,   517,   524,
     532,   536,   540,   544,   552,   556,   559,   566,   574,   582,
     590,   598,   606,   614,   622,   630,   638,   646,   654,   662,
     668,   676,   697,   704,   711,   715,   719,   726
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
  "OUTERTHEN", "$accept", "program", "declarations_list", "declaration",
  "func_dec", "$@1", "$@2", "$@3", "$@4", "params_list", "parameter",
  "statement_list", "statement", "expression_statement", "basic_ops",
  "for_statement", "forall_statement", "for_body", "if_ops",
  "if_statement", "else_statement", "$@5", "$@6", "ret_st", "var_dec",
  "io_ops", "expression", "term", "math_term", "str_term", "math_op",
  "math_op_muldiv", "many_operations", "operation", "or_operation",
  "and_operation", "equality_operation", "relational_operation",
  "negation_operation", "func_call", "in_set", "args_list", "assign_value", YY_NULLPTR
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

#define YYPACT_NINF (-284)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     189,    71,    21,    37,   192,   235,   291,   292,   172,   -24,
    -284,   415,    17,   422,    22,    30,    30,    75,    50,   413,
     435,   471,   504,    66,    52,    93,   516,   361,   497,   732,
     732,  2288,  3515,  3554,  1629,   146,     1,    57,    60,   473,
    1872,    87,   100,   124,   157,   173,   175,   546,   181,   190,
     248,   256,   261,   535,   626,  3593,  3632,  3671,  3710,  3749,
    3788,  3827,  3866,  3905,  3944,   262,   275,  2478,   113,   866,
    1099,   286,   289,     5,   105,   108,   227,  1647,   332,   339,
     341,   559,   546,   231,   344,  5397,  5430,   899,   626,   128,
     324,   626,   626,   350,   626,   678,   678,   678,   109,   293,
     732,  3983,   732,  4022,   732,   898,  4061,   546,    87,    87,
      87,    87,    33,    33,    33,    33,    33,    33,    33,    33,
     357,   536,   550,   366,   546,   546,   372,    83,   378,   400,
     423,  4100,   426,   371,   428,   434,   457,   480,   494,  5217,
    4139,  4178,  4217,  4256,  4295,   502,  5442,  5475,  5487,  5520,
     208,   438,  2052,  2090,  2245,  2436,  2555,  2590,  1148,   514,
    4334,   626,   626,  4373,   517,   519,   534,   540,   541,   542,
     547,  4412,  4451,  4490,   983,  5114,   552,   577,   560,   563,
    4529,  4568,  4607,  4646,  4685,   732,  4724,  4763,  5532,  5565,
     626,  2361,   -17,    63,   185,  5738,  5770,    98,   567,   572,
     612,   614,   626,   615,  5802,   226,  1407,  2632,   621,   635,
      -4,   143,   391,  1219,  2668,   638,   644,   650,   653,   652,
     662,   665,   546,  2246,  2631,  4802,  4841,  2672,  4880,  2770,
    2809,  2848,   672,  1280,    24,   169,   319,  5610,  5642,   137,
     675,   676,   677,   679,   626,   721,  5674,   437,  1501,  5834,
     578,   583,    31,   318,   588,  5202,  5595,   599,   601,   604,
    4919,  2005,  1743,  2072,   179,   693,   704,   723,   729,   626,
     728,   757,  2722,  1333,   764,   211,     7,    -2,   288,   707,
    1016,   310,  5846,   758,   759,   760,   761,   762,   763,   626,
     756,   626,   231,  6098,  6130,  6142,   626,  6174,  1804,   626,
     678,   678,   678,   766,   626,    98,    98,    98,    98,   133,
     133,   133,   133,   133,   133,   133,   133,   754,   796,   626,
     626,   772,   732,  2891,   732,  2930,   732,  2969,  3008,  1148,
     231,  5878,  5890,  5922,   626,  5934,  1565,   626,   678,   678,
     678,   775,  1148,   137,   137,   137,   137,   247,   247,   247,
     247,   247,   247,   247,   247,  2188,  2849,  5250,   626,  5262,
    1468,   626,   678,   678,   678,   776,  1187,  1332,   179,   179,
     179,   179,   284,   284,   284,   284,   284,   284,   284,   284,
     778,  5577,   779,   606,   780,   781,   783,   784,   785,  5966,
     786,  6186,  6218,  6230,  6262,   244,   551,  2805,  2887,  2926,
    2965,  3004,  3043,  3047,   797,   798,   799,  3086,  4958,  4997,
    5036,  4256,  3125,   607,   616,   800,   801,   803,   804,   805,
    5706,   640,  5998,  6010,  6042,  6054,   334,   596,  5756,  5788,
    6290,  6302,  6330,  6338,   806,   808,   809,   810,   811,  5184,
    2525,   220,   258,   367,   316,   429,   331,   385,   407,  5295,
    5307,  5340,  5352,   138,   402,  1045,  1662,  1791,  1933,  1946,
    2014,   768,   821,  6274,   822,   823,   824,   833,   846,   850,
     851,  3164,  3203,  3242,  5153,   765,   667,  6086,   702,   705,
     710,   713,  5385,   440,   468,   475,   477,  1332,   231,  3281,
    3320,  3359,  3398,  3437,   732,   526,   716,  5075,   533,  3476
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,  -284,   872,  -284,  -284,  -284,  -284,  -284,   787,
     782,     2,   -53,   -26,   -58,   -49,   -42,  -284,   -22,   -16,
    -167,   390,   487,    -7,     0,     4,  1853,  1513,   -31,  2067,
     482,   322,  2144,  1642,  1771,  1222,  1091,   915,   755,  2260,
    1384,  -283,  2426
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    15,    29,    16,    30,    19,
      20,    32,    55,    56,    57,    58,    59,   126,    60,    61,
     144,   175,   176,    62,    63,    64,    65,   203,   204,    68,
     206,   207,    71,   209,   210,   211,   212,   213,   214,    78,
     216,   122,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    67,    67,   224,     7,   101,   103,   183,   105,   383,
      86,   309,   225,   -78,   373,   -62,    67,    14,    -8,   226,
     112,    -8,   372,   -11,     8,   -62,   -11,    67,    67,     9,
      67,    17,    33,   -62,    18,   223,    85,    10,   -76,   227,
     -78,   -78,   188,   189,   -62,   228,   347,   414,   -76,   -76,
     -76,    67,   246,    22,   229,    -8,   -62,    41,   272,    -8,
     -11,   230,   -62,   125,   -11,   231,   -62,   137,   -16,   -76,
      18,    -5,   -16,   -76,   190,    -5,    67,    86,    86,   148,
     149,    86,    86,    86,    86,    86,    86,    86,    86,   -61,
      85,    27,   -63,    67,    67,   -61,   188,   189,   161,   162,
     -61,   293,   140,   -63,   141,   -61,   142,   294,   295,    67,
      67,    67,   286,   -17,   283,   284,   285,   -17,   287,   288,
     -78,   113,   184,   -80,   -80,   -37,   -52,   246,   190,   114,
     115,   261,    28,    36,    37,    38,   293,   262,   263,   296,
     331,    88,   294,   295,    67,   -56,   332,   333,   -78,    84,
     289,   -80,   264,   -77,   373,    67,   -92,   197,   -78,   310,
     412,   265,   266,   267,   268,    89,   297,   224,   224,   269,
     224,   124,   323,   325,   296,   327,   225,   225,   334,   225,
     -77,   -77,   355,   226,   226,   -78,   226,   186,   356,   357,
       1,    67,    -2,     2,    67,    67,     2,    67,    90,   223,
     223,   -61,   223,   227,   227,   496,   227,   -61,   335,   228,
     228,   -61,   228,    12,    91,    13,    92,   -63,   229,   229,
     358,   229,    94,   -77,   113,   230,   230,   -63,   230,   231,
     231,    95,   231,   359,   233,    -4,   234,   235,   236,    -4,
     237,   238,   -83,   -83,   116,   117,   118,   119,   -83,   -83,
     331,   -77,   -62,   -73,   -73,   239,   332,   333,   -56,   -77,
     310,   246,   -62,   -62,   240,   241,   242,   243,   -92,   -96,
     -83,   239,   244,   -96,   297,   297,   393,   394,   297,   297,
     297,   297,   297,   297,   297,   297,   -77,   355,   334,    96,
     -61,    -7,    -6,   356,   357,    -7,    -6,    97,   246,   246,
     -61,   -61,    98,   -80,   -80,   106,   492,   107,   264,   374,
     375,   246,   335,   335,   424,   425,   335,   335,   335,   335,
     335,   335,   335,   335,   408,   358,   409,   128,   410,   -52,
     -80,   -80,   -73,   -78,   348,   139,   272,   359,   359,   451,
     452,   359,   359,   359,   359,   359,   359,   359,   359,   -77,
     348,   -63,   -74,   -74,    70,    70,   -78,   -63,   -93,   -93,
     -78,   -63,    -9,    70,    -9,    -9,    -9,    -9,    -9,    70,
      -9,    -9,   -77,   -52,   -52,   -53,   -77,    67,    67,    67,
      70,    70,   -74,    70,   -54,    -9,    -9,   260,    -9,    -9,
      -9,    -9,    -9,   131,    -9,    -9,    -9,    -9,    -9,   -63,
     -97,    -9,    -9,   -56,    70,   249,   -80,   -80,   160,   -63,
     -63,   274,   311,   312,   163,    -3,   224,   -79,   -79,    -3,
     164,   493,   -48,   374,   375,   225,   -48,   -53,   -53,    70,
     146,   147,   226,   -80,    70,    70,    70,    70,    70,    70,
      70,    70,   165,    67,   -79,   -79,    70,    70,   223,   -54,
     -54,    23,   227,   -79,   -79,    24,   272,   246,   228,   114,
     115,   -56,    70,    70,    70,   166,    67,   229,   167,   -56,
     168,   -92,   -92,   -15,   230,   -92,   169,   -15,   231,   -92,
     249,   -79,   -75,   -75,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   497,    70,   -12,   170,
     -12,   -12,   -12,   -12,   -12,   -58,   -12,   -12,    70,    23,
     -70,   -70,   -55,    25,    69,    69,   -58,   -71,   -71,   -72,
     -72,   -12,   -12,    87,   -12,   -12,   -12,   -12,   -12,    69,
     -12,   -12,   -12,   -12,   -12,   -10,   171,   -12,   -12,   -10,
      69,    69,   -18,    69,    70,   -93,   -18,    70,    70,    34,
      70,    36,    37,    38,   -14,    39,    40,   -91,   -14,   -13,
     180,   249,   181,   -13,    69,   248,   -79,   -79,   -97,   -97,
      41,   273,   311,   312,   -95,   -91,   -91,   182,   -95,    48,
      49,    50,    51,   -75,   -70,   -71,   274,    54,   158,    69,
     -72,   185,   159,   -79,    69,    69,    69,    69,    69,    69,
      69,    69,   -36,   -80,   -80,   -35,    69,    69,   299,   349,
     350,   -79,   -79,   300,   249,   -94,   -52,   349,   350,   -94,
     -52,   -73,    69,    69,    69,   -73,   -80,   391,   392,   191,
     -80,   192,   193,   194,   -79,   195,   196,   -53,   -79,   -74,
     248,   -53,   -54,   -74,   158,   -97,   -54,   304,   462,   -97,
     197,   249,   249,   301,   158,   302,   317,    69,   476,   198,
     199,   200,   201,   -52,   249,   422,   423,   202,    69,   249,
     249,   249,   249,   249,   249,   249,   249,   -73,   -93,   298,
     -53,   282,   -93,   283,   284,   285,   -74,   195,   196,   274,
     449,   450,   -54,   318,   274,   274,   274,   274,   274,   274,
     274,   274,   197,   319,    69,   -91,   320,    69,    69,   -91,
      69,   198,   199,   200,   201,   328,   337,   338,   339,   202,
     340,   336,   -83,   -83,   376,   377,   378,   379,   -83,   -83,
      70,    70,    70,    31,   361,   -20,   -20,   -20,   -20,   -20,
     -75,   -20,   -20,   -70,   -75,   362,   360,   -70,   -71,   -83,
     -83,   -72,   -71,   342,   158,   -72,   -20,   -20,   498,   -20,
     -20,   -20,   -20,   -20,   363,   -20,   -20,   -20,   -20,   -20,
     364,   366,   -20,   -20,   248,   -66,   -66,   370,   371,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,    77,    77,   367,
     -62,   -61,   -63,   -57,   -58,   -59,    70,   403,   381,   404,
     -60,   474,    77,    21,   494,    26,   -66,   -66,   389,   274,
     249,   248,   248,    77,    77,   407,    77,   420,   439,    70,
     461,   -97,   463,   464,   248,   465,   466,   467,   -93,   248,
     248,   248,   248,   248,   248,   248,   248,    77,   256,   468,
     469,   470,   477,   478,   280,   479,   480,   481,   482,   273,
     483,   484,   485,   486,   273,   273,   273,   273,   273,   273,
     273,   273,    77,   -91,   -75,   -70,   -71,    77,    77,    77,
      77,   154,   155,   156,   157,   -72,    11,   108,   109,    77,
      77,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   489,
      69,    69,    69,   490,   491,    77,    77,    77,   475,     0,
       0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -90,
     108,   109,     0,   256,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -38,   -38,   143,   -38,   -38,   -38,   -38,   -38,
      77,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,
       0,    77,   -89,     0,     0,     0,     0,    76,    76,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,   273,
     248,     0,     0,    76,    76,     0,    76,    77,     0,    69,
      77,    77,     0,    77,     0,     0,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   -40,     0,     0,     0,    76,   255,     0,
       0,     0,     0,     0,   279,     0,     0,   -40,   -40,   143,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,    76,   -40,   -40,     0,     0,    76,    76,   152,
     153,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    76,
      76,     0,     0,     0,     0,     0,     0,   256,     0,     0,
       0,     0,     0,     0,     0,    76,    76,    76,   -88,   -88,
     -81,   -81,   376,   377,   378,   379,   -81,   -81,   399,   400,
     401,   402,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,   256,     0,   -81,   -81,     0,
      76,     0,     0,     0,     0,     0,     0,   256,     0,     0,
       0,    76,   256,   256,   256,   256,   430,   431,   432,   433,
     -66,   -66,   110,   111,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   280,    75,    75,     0,     0,   280,   280,   280,
     280,   457,   458,   459,   460,     0,     0,    76,    75,     0,
      76,    76,   -66,    76,     0,     0,     0,     0,     0,    75,
      75,   233,    75,   234,   235,   236,     0,   237,   238,     0,
       0,     0,     0,    77,    77,    77,     0,     0,     0,     0,
       0,     0,   239,    75,   254,     0,     0,     0,     0,     0,
     278,   240,   241,   242,   243,     0,     0,     0,     0,   244,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,    75,     0,
       0,     0,     0,    75,   151,     0,     0,   255,     0,     0,
       0,   -27,     0,     0,     0,    75,    75,     0,     0,     0,
     -27,   -27,   -27,   -27,     0,     0,   397,   398,   -27,    77,
       0,    75,    75,    75,   -83,   -83,   313,   314,   315,   316,
     -83,   -83,   280,   256,   255,   255,     0,     0,     0,   254,
       0,     0,    77,     0,    74,    74,     0,   255,     0,     0,
       0,   -83,   255,   255,   428,   429,    75,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      74,    74,   279,    74,     0,     0,     0,   279,   279,   455,
     456,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   329,    74,   253,     0,     0,     0,     0,
       0,   277,   -57,    75,     0,     0,    75,    75,   -57,    75,
       0,   330,   -57,    76,    76,    76,     0,     0,     0,    74,
       0,     0,     0,     0,   150,   440,     0,   441,   442,   443,
       0,   262,   263,     0,   368,   369,    74,    74,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   264,     0,     0,     0,
       0,     0,    74,    74,    74,   265,   266,   267,   268,     0,
       0,     0,     0,   269,     0,   -90,   -90,     0,     0,     0,
     253,     0,     0,   254,     0,     0,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,   396,   279,   255,     0,     0,     0,     0,    74,     0,
       0,     0,    76,     0,     0,     0,    79,    79,   305,   306,
     254,   254,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,    79,     0,   254,     0,     0,     0,     0,   254,   427,
       0,     0,    79,    79,    74,    79,     0,    74,    74,   -90,
      74,     0,     0,     0,     0,     0,     0,     0,   278,     0,
       0,     0,     0,   278,   454,     0,    79,   258,     0,     0,
       0,     0,     0,   281,     0,     0,     0,     0,     0,   368,
     369,     0,   138,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    79,     0,     0,     0,     0,     0,     0,     0,    75,
      75,    75,     0,     0,     0,     0,     0,     0,    79,    79,
     -89,   -89,   343,   344,   253,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,    79,    79,    79,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,   258,   -90,     0,    66,    66,     0,     0,     0,
       0,   253,   253,     0,     0,     0,     0,     0,     0,    79,
      66,     0,     0,     0,   253,    75,     0,     0,     0,   426,
      79,    66,    66,     0,    66,     0,   343,   344,   278,   254,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,    75,   277,
       0,     0,     0,     0,   453,    66,   245,     0,     0,     0,
       0,     0,   271,   -89,     0,     0,    79,   -89,     0,    79,
      79,     0,    79,     0,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    74,    74,     0,     0,     0,     0,    66,    66,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,    82,    66,    66,    66,     0,     0,     0,     0,
       0,   -57,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
      83,   245,   -57,     0,    72,    72,   258,   -82,   -82,   376,
     377,   378,   379,   -82,   -82,     0,     0,     0,    66,    72,
     -88,     0,     0,     0,     0,     0,    74,     0,     0,    66,
      72,    72,     0,    72,   -82,   -82,     0,     0,     0,   277,
     253,     0,     0,   258,   258,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    72,   251,   258,     0,     0,     0,
       0,   275,     0,     0,     0,    66,     0,     0,    66,    66,
       0,    66,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   281,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,    72,    72,     0,     0,
       0,     0,     0,     0,     0,   -58,     0,     0,     0,     0,
       0,     0,    72,    72,    72,   -58,   -58,     0,     0,     0,
       0,     0,    79,    79,    79,     0,     0,     0,     0,     0,
     251,     0,     0,    73,    73,   245,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   305,   306,    72,    73,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,    72,    73,
      73,     0,    73,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,   245,   245,     0,     0,   -89,     0,     0,     0,
       0,     0,     0,    73,   252,   245,     0,     0,    79,     0,
     276,     0,     0,     0,    72,     0,     0,    72,    72,     0,
      72,   281,   258,     0,     0,     0,     0,     0,    73,     0,
     271,    79,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,    73,    73,     0,     0,     0,
      93,     0,     0,     0,   -59,     0,     0,    99,     0,     0,
       0,    73,    73,    73,   232,   -59,     0,     0,     0,     0,
       0,    66,    66,    66,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,   251,   120,   121,     0,     0,     0,
       0,   123,   270,     0,   129,   130,    73,   132,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,    73,     0,     0,
     145,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   251,   251,     0,     0,   -85,   -85,   270,   270,     0,
       0,     0,     0,     0,   251,     0,     0,    66,   -86,   -86,
       0,     0,     0,    73,     0,     0,    73,    73,     0,    73,
     271,   245,     0,     0,     0,     0,     0,     0,     0,   275,
      66,   177,     0,     0,   178,   179,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,    82,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -57,     0,     0,
       0,     0,     0,   290,     0,     0,    83,   -57,   -57,     0,
      72,    72,    72,     0,     0,   303,   -87,   -87,     0,     0,
       0,     0,     0,   252,     0,     0,     0,   -81,   -81,   116,
     117,   118,   119,   -81,   -81,   321,     0,     0,   232,   232,
       0,   232,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -81,     0,   341,     0,     0,
     252,   252,     0,     0,   -59,   -82,   -82,   116,   117,   118,
     119,   -82,   -82,   252,   -59,   -59,    72,     0,     0,     0,
       0,   205,   365,     0,     0,     0,     0,     0,     0,   275,
     251,     0,     0,   -82,     0,     0,     0,     0,   276,    72,
       0,     0,   380,     0,   382,   121,     0,     0,     0,   384,
     247,     0,   385,     0,     0,   205,     0,   390,   205,   205,
       0,   205,   133,   133,   133,   133,     0,     0,     0,     0,
       0,     0,   405,   406,     0,     0,     0,     0,     0,    73,
      73,    73,   413,   121,     0,     0,     0,   415,     0,     0,
     416,     0,     0,     0,     0,   421,     0,     0,   208,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   434,     0,     0,   435,     0,     0,     0,     0,     0,
     444,     0,     0,     0,     0,   247,     0,   250,   205,   205,
     -57,   -57,   208,   127,     0,   208,   208,     0,   208,   134,
     135,   136,     0,     0,     0,    73,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   205,   276,   252,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,    73,   205,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -84,     0,
       0,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,
       0,     0,   250,     0,     0,   208,   208,     0,     0,     0,
       0,   205,   -21,   -21,   215,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,     0,   232,   -21,   -21,
       0,     0,     0,     0,   208,     0,   205,     0,     0,     0,
     495,   121,     0,   257,     0,     0,   208,     0,   215,     0,
       0,   215,   215,     0,   215,     0,   205,     0,   205,   247,
       0,     0,     0,   205,     0,     0,   205,   133,   133,   133,
       0,   205,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   291,     0,   205,   205,   208,     0,
       0,     0,     0,   -57,     0,     0,   247,   247,     0,     0,
       0,   205,   292,   -57,   205,   133,   133,   133,     0,   247,
       0,     0,     0,   208,     0,     0,     0,     0,   257,     0,
       0,   215,   215,     0,     0,   205,     0,     0,   205,   133,
     133,   133,     0,   208,   445,   208,   250,     0,     0,     0,
     208,     0,     0,   208,   386,   387,   388,     0,   208,     0,
     215,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,   215,   208,   208,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   250,     0,     0,     0,   208,   -85,
     217,   208,   417,   418,   419,     0,   250,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   208,     0,   215,   208,   436,   437,   438,   259,
     -55,   446,     0,     0,   217,     0,     0,   217,   217,     0,
     217,   -69,     0,     0,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   487,   215,
       0,   215,   257,     0,   445,   247,   215,   -57,     0,   215,
       0,     0,     0,     0,   215,     0,   488,   -57,   -57,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   215,
     215,     0,     0,     0,   259,     0,     0,   217,   217,   257,
     257,     0,     0,     0,   215,     0,     0,   215,   -86,     0,
       0,     0,   257,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,   217,     0,   215,     0,
       0,   215,     0,     0,     0,     0,     0,   447,   217,     0,
       0,   446,   250,   -87,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,   -66,   -66,   307,   308,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
     217,   -26,   -26,     0,   -66,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,   217,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -88,     0,   -28,   -28,     0,   217,     0,   217,   259,     0,
       0,     0,   217,     0,     0,   217,     0,     0,     0,     0,
     217,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   217,   217,   447,   257,     0,
       0,     0,     0,     0,   -55,   259,   259,     0,     0,     0,
     217,     0,     0,   217,   -69,   -69,     0,     0,   259,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,     0,     0,     0,   217,     0,     0,   217,     0,     0,
       0,     0,     0,   448,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -81,   -81,   313,   314,   315,   316,   -81,   -81,     0,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -81,     0,   -24,
     -24,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
       0,   -58,   -58,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -82,   -82,   313,   314,   315,   316,   -82,   -82,
       0,     0,     0,   448,   259,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -82,
       0,   -30,   -30,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -84,     0,
     -31,   -31,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,   -38,   -38,   411,   -38,   -38,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -85,     0,   -38,
     -38,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -86,     0,   -27,   -27,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -87,     0,   -48,   -48,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,     0,     0,   -47,   -47,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -39,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -40,   411,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,   -40,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,
       0,   -49,   -49,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,     0,     0,
     -50,   -50,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,
     -51,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,     0,   -44,   -44,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,   -46,    34,    35,
      36,    37,    38,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,     0,     0,    53,    54,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     0,     0,    81,    54,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,     0,     0,   -19,   -19,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,   -22,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,     0,   100,
       0,    54,    34,    35,    36,    37,    38,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     0,   102,     0,
      54,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
      34,   218,    36,    37,    38,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,     0,    43,   219,   220,   221,   222,     0,
      48,    49,    50,    51,    52,     0,   104,     0,    54,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -25,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -30,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -31,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -47,   -47,    34,    35,    36,    37,    38,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     0,     0,   172,
      54,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     0,     0,   173,    54,
      34,    35,    36,    37,    38,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,     0,     0,   174,    54,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -45,     0,   -43,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -39,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,   -42,     0,   -42,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,   -33,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,   -34,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -29,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,
     -32,   -32,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,   -49,
     -49,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,     0,     0,   -50,   -50,
     -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,     0,
     -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,   -41,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,     0,     0,   -44,   -44,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     0,     0,   187,    54,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,     0,     0,   -46,   -46,    34,   218,    36,    37,    38,
       0,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,     0,    43,
     219,   220,   221,   222,     0,    48,    49,    50,    51,    52,
       0,   322,     0,    54,    34,   218,    36,    37,    38,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    42,     0,    43,   219,
     220,   221,   222,     0,    48,    49,    50,    51,    52,     0,
     324,     0,    54,    34,   218,    36,    37,    38,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,     0,    43,   219,   220,
     221,   222,     0,    48,    49,    50,    51,    52,     0,   326,
       0,    54,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,     0,   -48,   -48,   -48,   -48,   -48,     0,     0,   -48,
     -48,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     0,     0,   471,    54,
      34,    35,    36,    37,    38,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,     0,     0,   472,    54,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    42,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     0,     0,   473,    54,    34,    35,
      36,    37,    38,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,     0,     0,   499,    54,    34,    35,    36,
      37,    38,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,     0,     0,     0,    54,    34,   218,    36,    37,
      38,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,     0,
      43,   219,   220,   221,   222,     0,    48,    49,    50,    51,
      52,     0,     0,     0,    54,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,   -83,   -83,   351,
     352,   353,   354,   -83,   -83,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -83,     0,     0,     0,   -83,     0,     0,     0,     0,   -60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,   -59,   -59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -64,   -64,   370,   371,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,
     370,   371,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,     0,   -64,   -64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -65,
     -65,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,     0,     0,     0,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -64,   -64,   110,   111,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -64,   -65,   -65,   110,   111,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,   -65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,     0,
       0,     0,     0,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,     0,     0,   -59,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -60,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -88,     0,     0,     0,   -88,     0,     0,
       0,     0,   -58,     0,     0,     0,     0,     0,   -58,     0,
       0,     0,   -58,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
     -59,     0,     0,     0,   -59,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -55,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,   -69,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,     0,
       0,     0,     0,     0,   -60,     0,     0,     0,   -60,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,   -81,   -81,   351,   352,   353,   354,   -81,   -81,     0,
     -58,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   -81,     0,     0,     0,   -81,     0,
       0,     0,   -59,   -82,   -82,   351,   352,   353,   354,   -82,
     -82,     0,   -59,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -82,     0,     0,     0,
     -82,     0,     0,     0,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,   -66,   -66,   345,   346,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
       0,     0,   -66,     0,     0,     0,   -66,     0,   -57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,   -57,     0,     0,     0,
     -57,     0,     0,     0,     0,     0,     0,     0,   -58,     0,
       0,     0,   -58,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
     -59,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,   -69,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,   -64,
     -64,   345,   346,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -65,   -65,   345,   346,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -64,     0,     0,     0,
     -64,     0,     0,     0,     0,     0,     0,     0,   -65,     0,
       0,     0,   -65,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
     -68,     0,     0,     0,   -68,     0,     0,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,   -67,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,   -60,     0,     0,     0,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,     0,
       0,     0,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -59,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -64,   -64,   307,
     308,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -65,
     -65,   307,   308,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,   -67,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,   -60,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,   -84,     0,
       0,     0,   -84,     0,     0,     0,     0,     0,     0,     0,
     -85,     0,     0,     0,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,   -86,     0,     0,     0,   -87,     0,     0,     0,
     -87
};

static const yytype_int16 yycheck[] =
{
       0,    32,    33,    61,     4,    58,    59,   174,    61,   292,
      41,    15,    61,    15,    16,    32,    47,    41,     1,    61,
      15,     4,    15,     1,     3,    42,     4,    58,    59,     8,
      61,     1,    30,    32,     4,    61,     3,     0,    42,    61,
      42,    43,     9,    10,    43,    61,    15,   330,    43,    42,
      43,    82,    83,     3,    61,    38,    32,    24,    89,    42,
      38,    61,    38,    89,    42,    61,    42,    98,    38,    38,
       4,     0,    42,    42,    41,     4,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    32,
       3,    39,    32,   124,   125,    32,     9,    10,   124,   125,
      43,     3,   100,    43,   102,    42,   104,     9,    10,   140,
     141,   142,     3,    38,     5,     6,     7,    42,     9,    10,
      15,    16,   175,    15,    16,    42,    43,   158,    41,    21,
      22,     3,    39,     5,     6,     7,     3,     9,    10,    41,
       3,    41,     9,    10,   175,    32,     9,    10,    43,     3,
      41,    43,    24,    15,    16,   186,    43,    24,    15,    16,
     327,    33,    34,    35,    36,    41,   197,   225,   226,    41,
     228,    43,   225,   226,    41,   228,   225,   226,    41,   228,
      42,    43,     3,   225,   226,    42,   228,   185,     9,    10,
       1,   222,     0,     4,   225,   226,     4,   228,    41,   225,
     226,    32,   228,   225,   226,   488,   228,    38,   239,   225,
     226,    42,   228,    41,    41,    43,    41,    32,   225,   226,
      41,   228,    41,    15,    16,   225,   226,    42,   228,   225,
     226,    41,   228,   264,     3,     0,     5,     6,     7,     4,
       9,    10,    15,    16,    17,    18,    19,    20,    21,    22,
       3,    43,    32,    42,    43,    24,     9,    10,    32,    15,
      16,   292,    42,    43,    33,    34,    35,    36,    42,    38,
      43,    24,    41,    42,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,    42,     3,    41,    41,
      32,     0,     0,     9,    10,     4,     4,    41,   329,   330,
      42,    43,    41,    15,    16,    43,   473,    32,    24,    21,
      22,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   322,    41,   324,     3,   326,    43,
      42,    43,    43,    15,    16,    42,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,    15,
      16,    32,    42,    43,    32,    33,    38,    38,    42,    43,
      42,    42,     1,    41,     3,     4,     5,     6,     7,    47,
       9,    10,    38,    42,    43,    43,    42,   408,   409,   410,
      58,    59,    43,    61,    43,    24,    25,    43,    27,    28,
      29,    30,    31,    43,    33,    34,    35,    36,    37,    32,
      43,    40,    41,    32,    82,    83,    15,    16,    42,    42,
      43,    89,    21,    22,    42,     0,   474,    15,    16,     4,
      42,   474,     0,    21,    22,   474,     4,    42,    43,   107,
     108,   109,   474,    42,   112,   113,   114,   115,   116,   117,
     118,   119,    42,   474,    42,    43,   124,   125,   474,    42,
      43,    38,   474,    15,    16,    42,   487,   488,   474,    21,
      22,    32,   140,   141,   142,    42,   497,   474,    42,    32,
      42,    42,    43,    38,   474,    38,    42,    42,   474,    42,
     158,    43,    42,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   494,   175,     1,    42,
       3,     4,     5,     6,     7,    32,     9,    10,   186,    38,
      42,    43,    32,    42,    32,    33,    43,    42,    43,    42,
      43,    24,    25,    41,    27,    28,    29,    30,    31,    47,
      33,    34,    35,    36,    37,     0,    42,    40,    41,     4,
      58,    59,    38,    61,   222,    43,    42,   225,   226,     3,
     228,     5,     6,     7,    38,     9,    10,    43,    42,     0,
      43,   239,    43,     4,    82,    83,    15,    16,    42,    43,
      24,    89,    21,    22,    38,    42,    43,    43,    42,    33,
      34,    35,    36,    43,    43,    43,   264,    41,    38,   107,
      43,    39,    42,    42,   112,   113,   114,   115,   116,   117,
     118,   119,    42,    15,    16,    42,   124,   125,    41,    21,
      22,    15,    16,    41,   292,    38,    38,    21,    22,    42,
      42,    38,   140,   141,   142,    42,    38,   305,   306,     3,
      42,     5,     6,     7,    38,     9,    10,    38,    42,    38,
     158,    42,    38,    42,    38,    38,    42,    32,    42,    42,
      24,   329,   330,    41,    38,    41,     3,   175,    42,    33,
      34,    35,    36,    42,   342,   343,   344,    41,   186,   347,
     348,   349,   350,   351,   352,   353,   354,    42,    38,   197,
      42,     3,    42,     5,     6,     7,    42,     9,    10,   367,
     368,   369,    42,    41,   372,   373,   374,   375,   376,   377,
     378,   379,    24,    41,   222,    38,    41,   225,   226,    42,
     228,    33,    34,    35,    36,    43,    41,    41,    41,    41,
      41,   239,    15,    16,    17,    18,    19,    20,    21,    22,
     408,   409,   410,     1,    41,     3,     4,     5,     6,     7,
      38,     9,    10,    38,    42,    41,   264,    42,    38,    42,
      43,    38,    42,    32,    38,    42,    24,    25,    42,    27,
      28,    29,    30,    31,    41,    33,    34,    35,    36,    37,
      41,    43,    40,    41,   292,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    32,    33,    32,
      32,    32,    32,    32,    32,    32,   474,    43,    42,     3,
      32,   411,    47,    16,    39,    23,    42,    43,    42,   487,
     488,   329,   330,    58,    59,    43,    61,    42,    42,   497,
      42,    42,    42,    42,   342,    42,    42,    42,    42,   347,
     348,   349,   350,   351,   352,   353,   354,    82,    83,    42,
      42,    42,    42,    42,    89,    42,    42,    42,    42,   367,
      42,    42,    42,    42,   372,   373,   374,   375,   376,   377,
     378,   379,   107,    42,    42,    42,    42,   112,   113,   114,
     115,   116,   117,   118,   119,    42,     4,    11,    12,   124,
     125,    15,    16,    17,    18,    19,    20,    21,    22,    43,
     408,   409,   410,    43,    43,   140,   141,   142,   411,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    43,
      11,    12,    -1,   158,    15,    16,    17,    18,    19,    20,
      21,    22,    24,    25,    26,    27,    28,    29,    30,    31,
     175,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      -1,   186,    43,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,   487,
     488,    -1,    -1,    58,    59,    -1,    61,   222,    -1,   497,
     225,   226,    -1,   228,    -1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,   107,    40,    41,    -1,    -1,   112,   113,   114,
     115,    15,    16,    17,    18,    19,    20,    21,    22,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,    42,    43,
      15,    16,    17,    18,    19,    20,    21,    22,   313,   314,
     315,   316,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,   330,    -1,    42,    43,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,   186,   347,   348,   349,   350,   351,   352,   353,   354,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   367,    32,    33,    -1,    -1,   372,   373,   374,
     375,   376,   377,   378,   379,    -1,    -1,   222,    47,    -1,
     225,   226,    43,   228,    -1,    -1,    -1,    -1,    -1,    58,
      59,     3,    61,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,   408,   409,   410,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    82,    83,    -1,    -1,    -1,    -1,    -1,
      89,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,
       3,    -1,     5,     6,     7,    -1,     9,    10,   107,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,   292,    -1,    -1,
      -1,    24,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,   311,   312,    41,   474,
      -1,   140,   141,   142,    15,    16,    17,    18,    19,    20,
      21,    22,   487,   488,   329,   330,    -1,    -1,    -1,   158,
      -1,    -1,   497,    -1,    32,    33,    -1,   342,    -1,    -1,
      -1,    42,   347,   348,   349,   350,   175,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      58,    59,   367,    61,    -1,    -1,    -1,   372,   373,   374,
     375,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    82,    83,    -1,    -1,    -1,    -1,
      -1,    89,    32,   222,    -1,    -1,   225,   226,    38,   228,
      -1,    41,    42,   408,   409,   410,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,   112,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    11,    12,   124,   125,    15,    16,
      17,    18,    19,    20,    21,    22,    24,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    42,    43,    -1,    -1,    -1,
     158,    -1,    -1,   292,    -1,    -1,    -1,    -1,    -1,   474,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,   310,   487,   488,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    32,    33,    11,    12,
     329,   330,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    47,    -1,   342,    -1,    -1,    -1,    -1,   347,   348,
      -1,    -1,    58,    59,   222,    61,    -1,   225,   226,    42,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    -1,   372,   373,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    11,
      12,    -1,    98,    15,    16,    17,    18,    19,    20,    21,
      22,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,
     409,   410,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
      42,    43,    11,    12,   292,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,   140,   141,   142,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,   158,    42,    -1,    32,    33,    -1,    -1,    -1,
      -1,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      47,    -1,    -1,    -1,   342,   474,    -1,    -1,    -1,   347,
     186,    58,    59,    -1,    61,    -1,    11,    12,   487,   488,
      15,    16,    17,    18,    19,    20,    21,    22,   497,   367,
      -1,    -1,    -1,    -1,   372,    82,    83,    -1,    -1,    -1,
      -1,    -1,    89,    38,    -1,    -1,   222,    42,    -1,   225,
     226,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,   409,   410,    -1,    -1,    -1,    -1,   124,   125,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   140,   141,   142,    -1,    -1,    -1,    -1,
      -1,    32,    15,    16,    17,    18,    19,    20,    21,    22,
      41,   158,    43,    -1,    32,    33,   292,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,   175,    47,
      43,    -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,   186,
      58,    59,    -1,    61,    42,    43,    -1,    -1,    -1,   487,
     488,    -1,    -1,   329,   330,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,    82,    83,   342,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,   222,    -1,    -1,   225,   226,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   367,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,    42,    43,    -1,    -1,    -1,
      -1,    -1,   408,   409,   410,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    32,    33,   292,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    11,    12,   175,    47,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,   186,    58,
      59,    -1,    61,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,   330,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,   342,    -1,    -1,   474,    -1,
      89,    -1,    -1,    -1,   222,    -1,    -1,   225,   226,    -1,
     228,   487,   488,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     367,   497,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   124,   125,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    32,    -1,    -1,    54,    -1,    -1,
      -1,   140,   141,   142,    61,    43,    -1,    -1,    -1,    -1,
      -1,   408,   409,   410,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,   292,    82,    83,    -1,    -1,    -1,
      -1,    88,    89,    -1,    91,    92,   175,    94,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,   186,    -1,    -1,
     107,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,   329,   330,    -1,    -1,    42,    43,   124,   125,    -1,
      -1,    -1,    -1,    -1,   342,    -1,    -1,   474,    42,    43,
      -1,    -1,    -1,   222,    -1,    -1,   225,   226,    -1,   228,
     487,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,
     497,   158,    -1,    -1,   161,   162,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    15,
      16,    17,    18,    19,    20,    21,    22,    32,    -1,    -1,
      -1,    -1,    -1,   190,    -1,    -1,    41,    42,    43,    -1,
     408,   409,   410,    -1,    -1,   202,    42,    43,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,   222,    -1,    -1,   225,   226,
      -1,   228,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    43,    -1,   244,    -1,    -1,
     329,   330,    -1,    -1,    32,    15,    16,    17,    18,    19,
      20,    21,    22,   342,    42,    43,   474,    -1,    -1,    -1,
      -1,    54,   269,    -1,    -1,    -1,    -1,    -1,    -1,   487,
     488,    -1,    -1,    43,    -1,    -1,    -1,    -1,   367,   497,
      -1,    -1,   289,    -1,   291,   292,    -1,    -1,    -1,   296,
      83,    -1,   299,    -1,    -1,    88,    -1,   304,    91,    92,
      -1,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   319,   320,    -1,    -1,    -1,    -1,    -1,   408,
     409,   410,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
     337,    -1,    -1,    -1,    -1,   342,    -1,    -1,    54,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   358,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
     367,    -1,    -1,    -1,    -1,   158,    -1,    83,   161,   162,
      42,    43,    88,    89,    -1,    91,    92,    -1,    94,    95,
      96,    97,    -1,    -1,    -1,   474,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,   190,   487,   488,
      15,    16,    17,    18,    19,    20,    21,    22,   497,   202,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    43,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,    -1,    -1,    -1,
      -1,   244,    24,    25,    54,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,   474,    40,    41,
      -1,    -1,    -1,    -1,   190,    -1,   269,    -1,    -1,    -1,
     487,   488,    -1,    83,    -1,    -1,   202,    -1,    88,    -1,
      -1,    91,    92,    -1,    94,    -1,   289,    -1,   291,   292,
      -1,    -1,    -1,   296,    -1,    -1,   299,   300,   301,   302,
      -1,   304,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,   319,   320,   244,    -1,
      -1,    -1,    -1,    32,    -1,    -1,   329,   330,    -1,    -1,
      -1,   334,    41,    42,   337,   338,   339,   340,    -1,   342,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,    -1,    -1,   358,    -1,    -1,   361,   362,
     363,   364,    -1,   289,   367,   291,   292,    -1,    -1,    -1,
     296,    -1,    -1,   299,   300,   301,   302,    -1,   304,    -1,
     190,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,   202,   319,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,   330,    -1,    -1,    -1,   334,    43,
      54,   337,   338,   339,   340,    -1,   342,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,   358,    -1,   244,   361,   362,   363,   364,    83,
      32,   367,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,
      94,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   289,
      -1,   291,   292,    -1,   487,   488,   296,    32,    -1,   299,
      -1,    -1,    -1,    -1,   304,    -1,    41,    42,    43,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,   319,
     320,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   329,
     330,    -1,    -1,    -1,   334,    -1,    -1,   337,    43,    -1,
      -1,    -1,   342,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,   190,    -1,   358,    -1,
      -1,   361,    -1,    -1,    -1,    -1,    -1,   367,   202,    -1,
      -1,   487,   488,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
     244,    40,    41,    -1,    42,     3,     4,     5,     6,     7,
      -1,     9,    10,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,   269,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      42,    -1,    40,    41,    -1,   289,    -1,   291,   292,    -1,
      -1,    -1,   296,    -1,    -1,   299,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   319,   320,   487,   488,    -1,
      -1,    -1,    -1,    -1,    32,   329,   330,    -1,    -1,    -1,
     334,    -1,    -1,   337,    42,    43,    -1,    -1,   342,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,   358,    -1,    -1,   361,    -1,    -1,
      -1,    -1,    -1,   367,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    42,    -1,    40,
      41,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      -1,    42,    43,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,   487,   488,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    42,
      -1,    40,    41,     3,     4,     5,     6,     7,    -1,     9,
      10,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    42,    -1,
      40,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    42,    -1,    40,
      41,     3,     4,     5,     6,     7,    -1,     9,    10,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    42,    -1,    40,    41,
       3,     4,     5,     6,     7,    -1,     9,    10,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    42,    -1,    40,    41,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
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
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,     3,
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
      34,    35,    36,    37,    -1,    39,    -1,    41,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,     3,     4,     5,     6,     7,    -1,
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
      -1,    39,    -1,    41,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,     3,     4,     5,     6,     7,    -1,     9,    10,
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
      36,    37,    -1,    -1,    -1,    41,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    42,    43,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      43,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      42,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    32,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    42,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    15,    16,    17,    18,    19,
      20,    21,    22,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    46,    47,    48,    49,    69,     3,     8,
       0,    48,    41,    43,    41,    50,    52,     1,     4,    54,
      55,    54,     3,    38,    42,    42,    55,    39,    39,    51,
      53,     1,    56,    56,     3,     4,     5,     6,     7,     9,
      10,    24,    25,    27,    28,    29,    30,    31,    33,    34,
      35,    36,    37,    40,    41,    57,    58,    59,    60,    61,
      63,    64,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      87,    40,    23,    41,     3,     3,    73,    75,    41,    41,
      41,    41,    41,    71,    41,    41,    41,    41,    41,    71,
      39,    57,    39,    57,    39,    57,    43,    32,    11,    12,
      13,    14,    15,    16,    21,    22,    17,    18,    19,    20,
      71,    71,    86,    71,    43,    58,    62,    77,     3,    71,
      71,    43,    71,    74,    77,    77,    77,    73,    85,    42,
      56,    56,    56,    26,    65,    71,    76,    76,    73,    73,
      80,    81,    82,    82,    83,    83,    83,    83,    38,    42,
      42,    58,    58,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    40,    40,    40,    66,    67,    71,    71,    71,
      43,    43,    43,    65,    57,    39,    56,    40,     9,    10,
      41,     3,     5,     6,     7,     9,    10,    24,    33,    34,
      35,    36,    41,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    87,     4,    28,
      29,    30,    31,    58,    59,    60,    61,    63,    64,    68,
      69,    70,    71,     3,     5,     6,     7,     9,    10,    24,
      33,    34,    35,    36,    41,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    87,
      43,     3,     9,    10,    24,    33,    34,    35,    36,    41,
      71,    72,    73,    75,    76,    78,    79,    80,    81,    82,
      83,    85,     3,     5,     6,     7,     3,     9,    10,    41,
      71,    23,    41,     3,     9,    10,    41,    73,    75,    41,
      41,    41,    41,    71,    32,    11,    12,    13,    14,    15,
      16,    21,    22,    17,    18,    19,    20,     3,    41,    41,
      41,    71,    39,    57,    39,    57,    39,    57,    43,    23,
      41,     3,     9,    10,    41,    73,    75,    41,    41,    41,
      41,    71,    32,    11,    12,    13,    14,    15,    16,    21,
      22,    17,    18,    19,    20,     3,     9,    10,    41,    73,
      75,    41,    41,    41,    41,    71,    43,    32,    11,    12,
      13,    14,    15,    16,    21,    22,    17,    18,    19,    20,
      71,    42,    71,    86,    71,    71,    77,    77,    77,    42,
      71,    76,    76,    73,    73,    80,    81,    82,    82,    83,
      83,    83,    83,    43,     3,    71,    71,    43,    56,    56,
      56,    26,    65,    71,    86,    71,    71,    77,    77,    77,
      42,    71,    76,    76,    73,    73,    80,    81,    82,    82,
      83,    83,    83,    83,    71,    71,    77,    77,    77,    42,
       3,     5,     6,     7,    71,    74,    77,    84,    87,    76,
      76,    73,    73,    80,    81,    82,    82,    83,    83,    83,
      83,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    40,    40,    40,    66,    67,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    23,    41,    43,
      43,    43,    65,    57,    39,    71,    86,    56,    42,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    51,
      49,    52,    53,    49,    54,    54,    54,    54,    55,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    59,    59,
      59,    59,    59,    60,    61,    62,    62,    62,    63,    63,
      63,    63,    64,    66,    65,    67,    65,    68,    69,    70,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    86,    86,    86,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
      10,     0,     0,    10,     3,     1,     0,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       2,     2,     4,     4,     4,     3,     3,     1,     2,     3,
       4,     5,     4,     0,     3,     0,     5,     3,     3,     5,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     3,     1,     3,     3,     1,
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
#line 92 "newcParser.y"
                      {
      ast_tree = (yyval.tree_node);
    }
#line 3019 "newcParser.tab.c"
    break;

  case 3: /* declarations_list: declarations_list declaration  */
#line 98 "newcParser.y"
                                  {
      (yyval.tree_node) = create_node2("declarations_list declaration", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3027 "newcParser.tab.c"
    break;

  case 4: /* declarations_list: declaration  */
#line 101 "newcParser.y"
                {
      (yyval.tree_node) = create_node1("declaration", (yyvsp[0].tree_node));
    }
#line 3035 "newcParser.tab.c"
    break;

  case 5: /* declarations_list: error  */
#line 104 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
#line 3045 "newcParser.tab.c"
    break;

  case 6: /* declaration: var_dec  */
#line 112 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
    }
#line 3053 "newcParser.tab.c"
    break;

  case 7: /* declaration: func_dec  */
#line 115 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("func_dec", (yyvsp[0].tree_node));
    }
#line 3061 "newcParser.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 121 "newcParser.y"
                   {
      scope++;
      push_stack(scope);
    }
#line 3070 "newcParser.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 124 "newcParser.y"
                                {
      UT_string *r;
      utstring_new(r);
      errors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters, r);
      add_func((yyvsp[-5].str));
      parameters = 0;
    }
#line 3082 "newcParser.tab.c"
    break;

  case 10: /* func_dec: TYPE ID PARENL $@1 params_list PARENR STFUNC $@2 statement_list ENDFUNC  */
#line 130 "newcParser.y"
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
#line 3104 "newcParser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 147 "newcParser.y"
                     {
      scope++;
      push_stack(scope);
    }
#line 3113 "newcParser.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 150 "newcParser.y"
                                {
      UT_string *r;
      utstring_new(r);
      semanticErrors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters, r);
      add_func((yyvsp[-5].str));
      parameters = 0;
    }
#line 3125 "newcParser.tab.c"
    break;

  case 13: /* func_dec: TYPE MAIN PARENL $@3 params_list PARENR STFUNC $@4 statement_list ENDFUNC  */
#line 156 "newcParser.y"
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
#line 3149 "newcParser.tab.c"
    break;

  case 14: /* params_list: params_list COMMA parameter  */
#line 178 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("params_list COMMA parameter", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 3157 "newcParser.tab.c"
    break;

  case 15: /* params_list: parameter  */
#line 181 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("parameter", (yyvsp[0].tree_node));
    }
#line 3165 "newcParser.tab.c"
    break;

  case 16: /* params_list: %empty  */
#line 184 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 3173 "newcParser.tab.c"
    break;

  case 17: /* params_list: error  */
#line 187 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
#line 3183 "newcParser.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 195 "newcParser.y"
            {
      parameters++;
      (yyval.tree_node) = create_node2("TYPE ID", create_node0((yyvsp[-1].str)), create_node0((yyvsp[0].str)));
      semanticErrors += add_symbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stack_scope) -> value, 0, create_new_reg(var_reg));
      var_reg++;
    }
#line 3194 "newcParser.tab.c"
    break;

  case 19: /* statement_list: statement_list statement  */
#line 204 "newcParser.y"
                             {
      (yyval.tree_node) = create_node2("statement_list statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
      if((yyvsp[-1].tree_node) -> returnType == 'x')
        (yyval.tree_node) -> returnType = (yyvsp[0].tree_node) -> returnType;
      else
        (yyval.tree_node) -> returnType = (yyvsp[-1].tree_node) -> returnType;
    }
#line 3206 "newcParser.tab.c"
    break;

  case 20: /* statement_list: %empty  */
#line 211 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 3214 "newcParser.tab.c"
    break;

  case 21: /* statement_list: error  */
#line 214 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
    }
#line 3222 "newcParser.tab.c"
    break;

  case 22: /* statement: expression_statement  */
#line 220 "newcParser.y"
                         {
      (yyval.tree_node) = create_node1("expression_statement", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3231 "newcParser.tab.c"
    break;

  case 23: /* statement: ret_st  */
#line 224 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("ret_st", (yyvsp[0].tree_node));
      (yyval.tree_node) -> returnType = (yyvsp[0].tree_node) -> returnType;
    }
#line 3240 "newcParser.tab.c"
    break;

  case 24: /* statement: var_dec  */
#line 228 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
    }
#line 3248 "newcParser.tab.c"
    break;

  case 25: /* statement: io_ops  */
#line 231 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("io_ops", (yyvsp[0].tree_node));
    }
#line 3256 "newcParser.tab.c"
    break;

  case 26: /* statement: basic_ops  */
#line 234 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("basic_ops", (yyvsp[0].tree_node));
    }
#line 3264 "newcParser.tab.c"
    break;

  case 27: /* expression_statement: expression SEMIC  */
#line 240 "newcParser.y"
                     {
      (yyval.tree_node) = create_node1("expression SEMIC", (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3273 "newcParser.tab.c"
    break;

  case 28: /* basic_ops: if_ops  */
#line 247 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("if_ops", (yyvsp[0].tree_node));
    }
#line 3281 "newcParser.tab.c"
    break;

  case 29: /* basic_ops: for_statement STFUNC statement_list ENDFUNC  */
#line 250 "newcParser.y"
                                                {
      pop_stack();
      (yyval.tree_node) = create_node2("for_statement STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 3290 "newcParser.tab.c"
    break;

  case 30: /* basic_ops: for_statement statement  */
#line 254 "newcParser.y"
                            {
      pop_stack();
      (yyval.tree_node) = create_node2("for_statement statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3299 "newcParser.tab.c"
    break;

  case 31: /* basic_ops: forall_statement statement  */
#line 258 "newcParser.y"
                               {
      pop_stack();
      (yyval.tree_node) = create_node2("forall_statement many_operations SEMIC ", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3308 "newcParser.tab.c"
    break;

  case 32: /* basic_ops: forall_statement STFUNC statement_list ENDFUNC  */
#line 262 "newcParser.y"
                                                   {
      pop_stack();
      (yyval.tree_node) = create_node2("forall_statement STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 3317 "newcParser.tab.c"
    break;

  case 33: /* for_statement: FOR PARENL for_body PARENR  */
#line 269 "newcParser.y"
                             {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 3327 "newcParser.tab.c"
    break;

  case 34: /* forall_statement: FORALL PARENL in_set PARENR  */
#line 277 "newcParser.y"
                              {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FORALL PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 3337 "newcParser.tab.c"
    break;

  case 35: /* for_body: expression_statement expression_statement expression  */
#line 285 "newcParser.y"
                                                         {
      (yyval.tree_node) = create_node3("expression_statement expression_statement expression", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3345 "newcParser.tab.c"
    break;

  case 36: /* for_body: SEMIC expression_statement expression  */
#line 288 "newcParser.y"
                                          {
      (yyval.tree_node) = create_node2("SEMIC expression_statement expression", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3353 "newcParser.tab.c"
    break;

  case 37: /* for_body: many_operations  */
#line 291 "newcParser.y"
                    {
      (yyval.tree_node) = create_node1("many_operations", (yyvsp[0].tree_node));
    }
#line 3361 "newcParser.tab.c"
    break;

  case 38: /* if_ops: if_statement statement  */
#line 297 "newcParser.y"
                                           {
      (yyval.tree_node) = create_node2("if_statement statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3369 "newcParser.tab.c"
    break;

  case 39: /* if_ops: if_statement statement else_statement  */
#line 300 "newcParser.y"
                                          {
      pop_stack();
      (yyval.tree_node) = create_node3("if_statement statement else_statement", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 3378 "newcParser.tab.c"
    break;

  case 40: /* if_ops: if_statement STFUNC statement_list ENDFUNC  */
#line 304 "newcParser.y"
                                                               {
      pop_stack();
      (yyval.tree_node) = create_node2("if_statement STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 3387 "newcParser.tab.c"
    break;

  case 41: /* if_ops: if_statement STFUNC statement_list ENDFUNC else_statement  */
#line 308 "newcParser.y"
                                                              {
      (yyval.tree_node) = create_node3("if_statement STFUNC statement_list ENDFUNC else_statement", (yyvsp[-4].tree_node), (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 3395 "newcParser.tab.c"
    break;

  case 42: /* if_statement: IF PARENL expression PARENR  */
#line 314 "newcParser.y"
                                {
      scope++;
      push_stack(scope);
      (yyval.tree_node) = create_node2("IF PARENL expression PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 3405 "newcParser.tab.c"
    break;

  case 43: /* $@5: %empty  */
#line 322 "newcParser.y"
         {
      pop_stack();
      scope++;
      push_stack(scope);
    }
#line 3415 "newcParser.tab.c"
    break;

  case 44: /* else_statement: ELSE $@5 statement  */
#line 327 "newcParser.y"
              {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE statement_list", create_node0((yyvsp[-2].str)), (yyvsp[0].tree_node));
    }
#line 3424 "newcParser.tab.c"
    break;

  case 45: /* $@6: %empty  */
#line 331 "newcParser.y"
         {
      pop_stack();
      scope++;
      push_stack(scope);
    }
#line 3434 "newcParser.tab.c"
    break;

  case 46: /* else_statement: ELSE $@6 STFUNC statement_list ENDFUNC  */
#line 335 "newcParser.y"
                                    {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE STFUNC statement_list ENDFUNC", create_node0((yyvsp[-4].str)), (yyvsp[-1].tree_node));
    }
#line 3443 "newcParser.tab.c"
    break;

  case 47: /* ret_st: RETURN expression SEMIC  */
#line 343 "newcParser.y"
                            {
      (yyval.tree_node) = create_node2("RETURN expression SEMIC", create_node0((yyvsp[-2].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> returnType = (yyvsp[-1].tree_node) -> type;
    }
#line 3452 "newcParser.tab.c"
    break;

  case 48: /* var_dec: TYPE ID SEMIC  */
#line 350 "newcParser.y"
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

        var_dec_assign(utstring_body(s), "EMPTY");
      }
      var_reg++;
      (yyval.tree_node) = create_node2("TYPE ID SEMIC", create_node0((yyvsp[-2].str)), create_node0((yyvsp[-1].str)));
    }
#line 3479 "newcParser.tab.c"
    break;

  case 49: /* io_ops: READ PARENL ID PARENR SEMIC  */
#line 375 "newcParser.y"
                                {
      struct symbol *s = check_is_in_scope((yyvsp[-2].str), STACK_TOP(stack_scope) -> value);
      if (s != NULL) {
        (yyval.tree_node) = create_node2("READ PARENL ID PARENR SEMIC", create_node0((yyvsp[-4].str)), create_node0((yyvsp[-2].str)));
        read_func(utstring_body(s -> var_reg), s -> returnFuncVarType[0]);
        (yyval.tree_node) -> saved = utstring_body(s -> var_reg);
      } else {
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[-4].str), line, word_position);
        semanticErrors += 1;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 3497 "newcParser.tab.c"
    break;

  case 50: /* io_ops: WRITE PARENL expression PARENR SEMIC  */
#line 388 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("WRITE PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
      write_func((yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = (yyvsp[-2].tree_node) -> saved;
    }
#line 3507 "newcParser.tab.c"
    break;

  case 51: /* io_ops: WRITELN PARENL expression PARENR SEMIC  */
#line 393 "newcParser.y"
                                           {
      (yyval.tree_node) = create_node2("WRITELN PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
      writeln_func((yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = (yyvsp[-2].tree_node) -> saved;
    }
#line 3517 "newcParser.tab.c"
    break;

  case 52: /* expression: many_operations  */
#line 401 "newcParser.y"
                    {
      (yyval.tree_node) = create_node1("many_operations", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
      if ((yyvsp[0].tree_node) -> type == 'u') {
        printf("ERRO SEMATICO\n");
        printf("ERRO DE TIPOS ENCONTRADO, linha %d, coluna %d\n\n", line, word_position);
        semanticErrors += 1;
      }
    }
#line 3532 "newcParser.tab.c"
    break;

  case 53: /* expression: func_call  */
#line 411 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("func_call", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3541 "newcParser.tab.c"
    break;

  case 54: /* expression: assign_value  */
#line 415 "newcParser.y"
                 {
      (yyval.tree_node) = create_node1("assign_value", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3551 "newcParser.tab.c"
    break;

  case 55: /* term: math_term  */
#line 423 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("math_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3561 "newcParser.tab.c"
    break;

  case 56: /* term: str_term  */
#line 428 "newcParser.y"
             {
      (yyval.tree_node) = create_node1("str_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3571 "newcParser.tab.c"
    break;

  case 57: /* math_term: ID  */
#line 436 "newcParser.y"
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
#line 3590 "newcParser.tab.c"
    break;

  case 58: /* math_term: INTEGER  */
#line 450 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("INTEGER", create_node0_int((yyvsp[0].integer), 'i'));
      (yyval.tree_node) -> type = 'i';
      UT_string *s = int_as_str((yyvsp[0].integer));
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3601 "newcParser.tab.c"
    break;

  case 59: /* math_term: DECIMAL  */
#line 456 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("DECIMAL", create_node0_dec((yyvsp[0].dec), 'f'));
      (yyval.tree_node) -> type = 'f';
      UT_string *s = float_as_str((yyvsp[0].dec));
      (yyval.tree_node) -> saved = utstring_body(s);
  }
#line 3612 "newcParser.tab.c"
    break;

  case 60: /* math_term: PARENL expression PARENR  */
#line 462 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("PARENL expression PARENR", (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[-1].tree_node) -> saved;
    }
#line 3622 "newcParser.tab.c"
    break;

  case 61: /* str_term: CHAR  */
#line 470 "newcParser.y"
         {
      (yyval.tree_node) = create_node1("CHAR", create_node0_char((yyvsp[0].str), 'c'));
      (yyval.tree_node) -> type = 'c';
      (yyval.tree_node) -> saved = (yyvsp[0].str);
    }
#line 3632 "newcParser.tab.c"
    break;

  case 62: /* str_term: STRING  */
#line 475 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("STRING", create_node0((yyvsp[0].str)));
      (yyval.tree_node) -> type = 't';
      (yyval.tree_node) -> saved = (yyvsp[0].str);
    }
#line 3642 "newcParser.tab.c"
    break;

  case 63: /* str_term: EMPTY  */
#line 480 "newcParser.y"
          {
      (yyval.tree_node) = create_node1("EMPTY", create_node0((yyvsp[0].str)));
      (yyval.tree_node) -> type = 's';
      (yyval.tree_node) -> saved = (yyvsp[0].str);
    }
#line 3652 "newcParser.tab.c"
    break;

  case 64: /* math_op: math_op ADD math_op_muldiv  */
#line 488 "newcParser.y"
                               {
      (yyval.tree_node) = create_node3("math_op ADD math_op_muldiv", (yyvsp[-2].tree_node), create_node0("+"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("add", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3664 "newcParser.tab.c"
    break;

  case 65: /* math_op: math_op SUB math_op_muldiv  */
#line 495 "newcParser.y"
                               {
      (yyval.tree_node) = create_node3("math_op SUB math_op_muldiv", (yyvsp[-2].tree_node), create_node0("-"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("sub", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3676 "newcParser.tab.c"
    break;

  case 66: /* math_op: math_op_muldiv  */
#line 502 "newcParser.y"
                   {
      (yyval.tree_node) = create_node1("math_op_muldiv", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3686 "newcParser.tab.c"
    break;

  case 67: /* math_op_muldiv: math_op_muldiv DIV math_term  */
#line 510 "newcParser.y"
                                 {
      (yyval.tree_node) = create_node3("math_op_muldiv DIV term", (yyvsp[-2].tree_node), create_node0("/"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("div", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3698 "newcParser.tab.c"
    break;

  case 68: /* math_op_muldiv: math_op_muldiv MULT math_term  */
#line 517 "newcParser.y"
                                  {
      (yyval.tree_node) = create_node3("math_op_muldiv MULT term", (yyvsp[-2].tree_node), create_node0("*"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types((yyvsp[-2].tree_node) -> type, (yyvsp[0].tree_node) -> type);
      UT_string *s = create_new_reg(var_reg);
      math_op_file("mul", utstring_body(s), (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = utstring_body(s);
    }
#line 3710 "newcParser.tab.c"
    break;

  case 69: /* math_op_muldiv: math_term  */
#line 524 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("math_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3720 "newcParser.tab.c"
    break;

  case 70: /* many_operations: ADDSET PARENL many_operations PARENR  */
#line 532 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("ADDSET PARENL many_operations PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3729 "newcParser.tab.c"
    break;

  case 71: /* many_operations: REMOVE PARENL many_operations PARENR  */
#line 536 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("REMOVE PARENL many_operations PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3738 "newcParser.tab.c"
    break;

  case 72: /* many_operations: EXISTS PARENL many_operations PARENR  */
#line 540 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("EXISTS PARENL many_operations PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-1].tree_node) -> type;
    }
#line 3747 "newcParser.tab.c"
    break;

  case 73: /* many_operations: operation  */
#line 544 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3757 "newcParser.tab.c"
    break;

  case 74: /* operation: in_set  */
#line 552 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("in_set", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3766 "newcParser.tab.c"
    break;

  case 75: /* operation: ISTYPE PARENL expression PARENR  */
#line 556 "newcParser.y"
                                    {
      (yyval.tree_node) = create_node2("ISTYPE PARENL expression PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 3774 "newcParser.tab.c"
    break;

  case 76: /* operation: or_operation  */
#line 559 "newcParser.y"
                 {
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3783 "newcParser.tab.c"
    break;

  case 77: /* or_operation: or_operation OR and_operation  */
#line 566 "newcParser.y"
                                  {
      (yyval.tree_node) = create_node3("term OR expression", (yyvsp[-2].tree_node), create_node0("||"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("or", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3796 "newcParser.tab.c"
    break;

  case 78: /* or_operation: and_operation  */
#line 574 "newcParser.y"
                  {
      (yyval.tree_node) = create_node1("and_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3806 "newcParser.tab.c"
    break;

  case 79: /* and_operation: and_operation AND equality_operation  */
#line 582 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node3("term AND expression", (yyvsp[-2].tree_node), create_node0("&&"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("and", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3819 "newcParser.tab.c"
    break;

  case 80: /* and_operation: equality_operation  */
#line 590 "newcParser.y"
                       {
      (yyval.tree_node) = create_node1("equality_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3829 "newcParser.tab.c"
    break;

  case 81: /* equality_operation: equality_operation EQUALS relational_operation  */
#line 598 "newcParser.y"
                                                   {
      (yyval.tree_node) = create_node3("term EQUALS expression", (yyvsp[-2].tree_node), create_node0("=="), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("seq", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3842 "newcParser.tab.c"
    break;

  case 82: /* equality_operation: equality_operation DIFFERENT relational_operation  */
#line 606 "newcParser.y"
                                                      {
      (yyval.tree_node) = create_node3("term DIFFERENT expression", (yyvsp[-2].tree_node), create_node0("!="), (yyvsp[0].tree_node));
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("seq", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      not_func(s, s);
      (yyval.tree_node) -> saved = s;
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
    }
#line 3855 "newcParser.tab.c"
    break;

  case 83: /* equality_operation: relational_operation  */
#line 614 "newcParser.y"
                         {
      (yyval.tree_node) = create_node1("relational_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3865 "newcParser.tab.c"
    break;

  case 84: /* relational_operation: relational_operation SMALLER negation_operation  */
#line 622 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term SMALLER expression", (yyvsp[-2].tree_node), create_node0("<"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("slt", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3878 "newcParser.tab.c"
    break;

  case 85: /* relational_operation: relational_operation GREATER negation_operation  */
#line 630 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term GREATER expression", (yyvsp[-2].tree_node), create_node0(">"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("slt", s, (yyvsp[0].tree_node) -> saved, (yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3891 "newcParser.tab.c"
    break;

  case 86: /* relational_operation: relational_operation SMALLEQ negation_operation  */
#line 638 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term SMALLEQ expression", (yyvsp[-2].tree_node), create_node0("<="), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("sleq", s, (yyvsp[-2].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3904 "newcParser.tab.c"
    break;

  case 87: /* relational_operation: relational_operation GREATEQ negation_operation  */
#line 646 "newcParser.y"
                                                    {
      (yyval.tree_node) = create_node3("term GREATEQ expression", (yyvsp[-2].tree_node), create_node0(">="), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[-2].tree_node) -> type;
      char *s = utstring_body(create_new_reg(var_reg));
      math_op_file("sleq", s, (yyvsp[0].tree_node) -> saved, (yyvsp[-2].tree_node) -> saved);
      (yyval.tree_node) -> saved = s;
      var_reg++;
    }
#line 3917 "newcParser.tab.c"
    break;

  case 88: /* relational_operation: negation_operation  */
#line 654 "newcParser.y"
                       {
      (yyval.tree_node) = create_node1("negation_operation", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3927 "newcParser.tab.c"
    break;

  case 89: /* negation_operation: NEG math_op  */
#line 662 "newcParser.y"
                {
      (yyval.tree_node) = create_node2("NEG math_op", create_node0("!"), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      not_func((yyvsp[0].tree_node) -> saved, (yyvsp[0].tree_node) -> saved);
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3938 "newcParser.tab.c"
    break;

  case 90: /* negation_operation: math_op  */
#line 668 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("math_op", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
      (yyval.tree_node) -> saved = (yyvsp[0].tree_node) -> saved;
    }
#line 3948 "newcParser.tab.c"
    break;

  case 91: /* func_call: ID PARENL args_list PARENR  */
#line 676 "newcParser.y"
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
#line 3974 "newcParser.tab.c"
    break;

  case 92: /* func_call: str_term  */
#line 697 "newcParser.y"
             {
      (yyval.tree_node) = create_node1("str_term", (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = (yyvsp[0].tree_node) -> type;
    }
#line 3983 "newcParser.tab.c"
    break;

  case 93: /* in_set: term IN expression  */
#line 704 "newcParser.y"
                       {
      (yyval.tree_node) = create_node3("term IN expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
      (yyval.tree_node) -> type = check_types_set((yyvsp[0].tree_node) -> type);
    }
#line 3992 "newcParser.tab.c"
    break;

  case 94: /* args_list: args_list COMMA expression  */
#line 711 "newcParser.y"
                               {
      args_params++;
      (yyval.tree_node) = create_node2("args_list COMMA term", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 4001 "newcParser.tab.c"
    break;

  case 95: /* args_list: expression  */
#line 715 "newcParser.y"
               {
      args_params++;
      (yyval.tree_node) = create_node1("term", (yyvsp[0].tree_node));
    }
#line 4010 "newcParser.tab.c"
    break;

  case 96: /* args_list: %empty  */
#line 719 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 4018 "newcParser.tab.c"
    break;

  case 97: /* assign_value: ID ASSIGN expression  */
#line 726 "newcParser.y"
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
#line 4045 "newcParser.tab.c"
    break;


#line 4049 "newcParser.tab.c"

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

#line 752 "newcParser.y"


int main(int argc, char *argv[]) {

  push_stack(0);

  char s[100] = "";
  char *file = argv[1];

  strcat(s, file);
  strcat(s, ".tac");

  ast_tree = NULL;

  yyin = fopen(file, "r");

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

  if(errors == 0) {
    tacfile = fopen(s, "w");
    fprintf (tacfile, ".table\n");
    fprintf (tacfile, ".code\n");
    write_tac_file(current_line);
    fclose(tacfile);
  }

  if (errors == 0 && semanticErrors == 0) {
    printf("\n\n#### INICIO DA ÁRVORE SINTÁTICA ####\n\n");
    print_tree(ast_tree);
    printf("\n\n#### FIM DA ÁRVORE SINTÁTICA ####\n\n");
    if (semanticErrors > 0) {
      printf("\n\nFORAM ENCONTRADAS %d AVISOS NO CODIGO\n\n", semanticErrors);
    }
  } else {
    printf("\n\nFORAM ENCONTRADOS %d ERROS E %d AVISOS NO CODIGO\n\n", errors, semanticErrors);
    free_tree(ast_tree);
  }

  free_symbol_table();

  free_stack();

  free_codegen();

  fclose(yyin);

  yylex_destroy();

  return 0;
}
