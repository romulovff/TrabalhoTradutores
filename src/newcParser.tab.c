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
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_declarations_list = 46,         /* declarations_list  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_func_dec = 48,                  /* func_dec  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_52_4 = 52,                      /* $@4  */
  YYSYMBOL_params_list = 53,               /* params_list  */
  YYSYMBOL_parameter = 54,                 /* parameter  */
  YYSYMBOL_statement_list = 55,            /* statement_list  */
  YYSYMBOL_statement = 56,                 /* statement  */
  YYSYMBOL_expression_statement = 57,      /* expression_statement  */
  YYSYMBOL_basic_ops = 58,                 /* basic_ops  */
  YYSYMBOL_for_statement = 59,             /* for_statement  */
  YYSYMBOL_forall_statement = 60,          /* forall_statement  */
  YYSYMBOL_for_body = 61,                  /* for_body  */
  YYSYMBOL_if_ops = 62,                    /* if_ops  */
  YYSYMBOL_if_statement = 63,              /* if_statement  */
  YYSYMBOL_else_statement = 64,            /* else_statement  */
  YYSYMBOL_65_5 = 65,                      /* $@5  */
  YYSYMBOL_ret_st = 66,                    /* ret_st  */
  YYSYMBOL_var_dec = 67,                   /* var_dec  */
  YYSYMBOL_io_ops = 68,                    /* io_ops  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_term = 70,                      /* term  */
  YYSYMBOL_math_op = 71,                   /* math_op  */
  YYSYMBOL_set_op = 72,                    /* set_op  */
  YYSYMBOL_operation = 73,                 /* operation  */
  YYSYMBOL_func_call = 74,                 /* func_call  */
  YYSYMBOL_in_set = 75,                    /* in_set  */
  YYSYMBOL_args_list = 76,                 /* args_list  */
  YYSYMBOL_assign_value = 77               /* assign_value  */
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
#define YYLAST   2345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

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
       0,    81,    81,    87,    90,    93,   101,   104,   110,   113,
     110,   120,   123,   120,   135,   138,   141,   144,   152,   160,
     163,   166,   172,   175,   178,   181,   184,   190,   196,   199,
     203,   207,   214,   222,   230,   233,   239,   243,   250,   258,
     258,   269,   275,   282,   285,   288,   291,   297,   300,   303,
     306,   312,   323,   326,   329,   332,   335,   338,   344,   347,
     350,   353,   356,   362,   365,   368,   374,   377,   380,   383,
     386,   389,   392,   395,   398,   401,   404,   407,   413,   435,
     441,   445,   449,   456
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
  "$accept", "program", "declarations_list", "declaration", "func_dec",
  "$@1", "$@2", "$@3", "$@4", "params_list", "parameter", "statement_list",
  "statement", "expression_statement", "basic_ops", "for_statement",
  "forall_statement", "for_body", "if_ops", "if_statement",
  "else_statement", "$@5", "ret_st", "var_dec", "io_ops", "expression",
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

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    15,    29,     3,    47,    70,    76,    77,   -15,   -37,
     -79,    78,     6,    97,     8,    41,    41,    86,    22,    99,
     100,   101,   109,     7,    28,    36,   114,    85,   600,   641,
     641,   741,   780,   819,   328,    81,   402,  1849,  1882,  1915,
    1948,  1755,    44,    46,    52,    63,    64,  1755,    65,    89,
     103,   105,   112,   123,  1768,   858,   897,   936,    72,   -12,
     975,   115,  1014,  1053,  1092,    74,  1981,   131,   150,   157,
     164,   165,   181,   155,  1755,    11,   182,   183,  1818,   243,
     680,  1768,  1768,   189,  1768,    93,    93,    93,    93,   135,
     641,   641,   190,   641,  1131,  1755,  1755,  1755,  1755,  1755,
    1755,  1755,  1755,  1755,  1755,  1755,  1755,  1755,   197,   122,
     124,   133,   201,  1755,  1755,   209,   211,   213,   214,   215,
    1170,   216,   207,   217,   218,   220,   221,  2014,  1209,  1248,
    1287,  1326,   222,   223,   225,   227,   228,   229,   230,   232,
     242,   244,   245,   260,   261,   126,   262,   158,  1768,  1768,
     160,  1365,   263,   264,   269,   270,   271,   272,   273,    -5,
    1404,  1443,   702,   134,   275,   276,  1482,  1521,  1560,   281,
    1599,   282,   641,  1638,  1677,  2047,  2079,  2111,  2143,  2175,
    2207,  1768,   286,   288,   289,   293,  1768,  2239,   280,   294,
     296,   311,   312,   313,   154,   156,   167,   168,   193,  1768,
    1716,  2271,   292,   324,   326,   327,   329,   330,   331,  1768,
    1768,  1768,    11,   322,  1768,    93,    93,    93,   323,  1768,
    1768,  1768,  1768,  1768,  1768,  1768,  1768,  1768,  1768,  1768,
    1768,   325,  1805,   344,   345,   346,   196,   351,   352,   353,
     354,  2303,   355,   358,   359,   360,   361,   363,   366,   383,
     384,   385,   386,   387,   199,   334,   388,   395,   396,   397,
     398
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   -79,   368,   -79,   -79,   -79,   -79,   -79,   248,
     347,   -22,   -79,   -78,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   161,   -79,   -41,   116,   400,   278,   357,
     443,   195,   187,   486
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    15,    29,    16,    30,    19,
      20,    32,    55,    56,    57,    58,    59,   115,    60,    61,
     170,   171,    62,    63,    64,    65,   187,   188,   189,   190,
     191,   192,   111,   193
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   114,     1,    10,    14,     2,    83,    -8,    33,   -11,
      -8,    18,   -11,    89,   109,    -5,   194,   195,   196,    -5,
     197,   198,    49,    50,    51,    22,    12,    91,    13,   -33,
     -33,   -33,     8,   108,   -33,   148,   149,     9,   202,   117,
     118,   119,    17,   121,    -8,    18,   -11,    -2,    -8,   -82,
     -11,     2,   199,   -82,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    27,   128,   129,
      -4,   131,   202,   202,    -4,    28,    -7,    -6,    -3,   -16,
      -7,    -6,    -3,   -16,    76,    78,    -9,    79,    -9,    -9,
      -9,    -9,    -9,    80,    -9,    -9,   203,   -42,   204,   205,
     206,   -42,   207,   208,    81,    82,    84,   164,   165,    -9,
      -9,    90,    -9,    -9,    -9,    -9,    -9,    94,    -9,    -9,
      -9,    -9,    -9,   -10,   -17,    -9,    -9,   -10,   -17,   109,
      85,   194,   195,   196,   209,   197,   198,    23,   -15,    23,
     213,    24,   -15,    25,    86,   218,    87,   -18,    66,    66,
     173,   -18,   -14,    88,    93,   -13,   -14,    66,   231,   -13,
     -51,     7,   -81,    66,   -51,     7,   -81,   199,   233,   234,
     235,   145,   -80,   237,   -66,   146,   -80,   127,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      66,   110,   -55,   -47,   -54,    66,   -55,   -38,   -54,   -32,
     -48,   122,   122,   122,   122,   -56,   -52,   -49,   -67,   -56,
     -52,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,   -50,   200,   -77,    71,    71,    66,
      66,   -53,   120,   130,   145,   -53,    71,   -57,   256,   210,
     -83,   -57,    71,   147,    66,    66,    34,    66,    36,    37,
      38,   150,    39,    40,   151,   152,   153,   154,   155,   156,
     157,   163,   158,   159,    21,   -60,   -61,    41,   -59,    71,
     -58,   -75,   -76,   -69,    71,   -70,    48,    49,    50,    51,
     123,   124,   125,   126,    54,   -71,   113,   -72,   -73,    66,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,   -74,   -79,   -78,   166,   167,    71,    71,
      68,    68,   168,   -68,   -63,   -64,   -65,   -35,   -34,    68,
     -39,   172,   -66,    71,    71,    68,    71,   214,   110,   215,
     216,   122,   122,   122,   217,   232,   -47,    92,   -48,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,    74,    68,   -49,   -67,   -50,   -51,    68,   -55,   -54,
     -51,   -56,   -52,   -53,   -77,   241,   -57,   254,    71,    75,
      26,   -51,    11,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,   255,   -79,   -83,    69,
      69,    68,    68,   257,   258,   259,   260,   -60,    69,   236,
     -61,   -59,   -58,   -75,    69,   -76,    68,    68,   -69,    68,
     238,   239,   240,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -70,   -71,   -72,   -73,   -74,
     -78,    69,    67,    67,   -55,   112,    69,   -68,   -63,   -64,
     -65,    67,     0,     0,     0,   -55,     0,    67,     0,     0,
       0,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,     0,     0,     0,     0,     0,
      69,    69,     0,     0,    67,    70,    70,     0,     0,    67,
       0,     0,     0,     0,    70,    69,    69,     0,    69,     0,
      70,     0,     0,     0,     0,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,     0,     0,
       0,     0,     0,    67,    67,     0,     0,    70,    72,    72,
       0,     0,    70,     0,     0,     0,     0,    72,    67,    67,
      69,    67,     0,    72,     0,     0,     0,     0,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,     0,     0,     0,     0,     0,    70,    70,     0,     0,
      72,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,    70,    70,    67,    70,     0,     0,     0,     0,     0,
       0,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,     0,     0,     0,     0,     0,    72,
      72,   -12,     0,   -12,   -12,   -12,   -12,   -12,     0,   -12,
     -12,     0,     0,     0,    72,    72,    70,    72,     0,     0,
       0,     0,     0,     0,   -12,   -12,     0,   -12,   -12,   -12,
     -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,     0,     0,
     -12,   -12,    31,     0,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   175,     0,   176,   177,   178,     0,   179,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   182,   183,   184,   185,     0,     0,     0,
       0,   186,   116,     0,     0,     0,   -36,   -36,   169,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,
       0,   -21,   -21,    34,    35,    36,    37,    38,     0,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,     0,     0,
      53,    54,    34,    35,    36,    37,    38,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     0,     0,    73,
      54,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -23,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -24,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,   -25,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -41,    34,    35,    36,    37,    38,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     0,     0,   160,
      54,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     0,     0,   161,    54,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,    34,
      35,    36,    37,    38,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    42,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     0,     0,   162,    54,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,     0,     0,   -43,   -43,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -31,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -44,   -44,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,   -45,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,
     -46,   -46,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
     -37,    34,    35,    36,    37,    38,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     0,     0,   174,    54,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -42,    34,     0,
      36,    37,    38,     0,    39,    40,     0,     0,     0,     0,
       0,   175,     0,   176,   177,   178,     0,   179,   180,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,   181,     0,     0,     0,    54,     0,     0,     0,
       0,   182,   183,   184,   185,     0,     0,     0,   -27,   186,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,
       0,   201,     0,   176,   177,   178,     0,   179,   180,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   181,     0,     0,     0,   -27,     0,     0,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,   186,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -52,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -62,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -57,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     211,     0,     0,     0,     0,     0,     0,     0,     0,   -51,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   -51,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -55,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -54,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -53,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -57
};

static const yytype_int16 yycheck[] =
{
      41,    79,     1,     0,    41,     4,    47,     1,    30,     1,
       4,     4,     4,    54,     3,     0,     5,     6,     7,     4,
       9,    10,    34,    35,    36,     3,    41,    39,    43,    34,
      35,    36,     3,    74,    39,   113,   114,     8,    79,    80,
      81,    82,     1,    84,    38,     4,    38,     0,    42,    38,
      42,     4,    41,    42,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    39,    90,    91,
       0,    93,   113,   114,     4,    39,     0,     0,     0,    38,
       4,     4,     4,    42,     3,    41,     1,    41,     3,     4,
       5,     6,     7,    41,     9,    10,     3,     0,     5,     6,
       7,     4,     9,    10,    41,    41,    41,   148,   149,    24,
      25,    39,    27,    28,    29,    30,    31,    43,    33,    34,
      35,    36,    37,     0,    38,    40,    41,     4,    42,     3,
      41,     5,     6,     7,    41,     9,    10,    38,    38,    38,
     181,    42,    42,    42,    41,   186,    41,    38,    32,    33,
     172,    42,    38,    41,    39,     0,    42,    41,   199,     4,
      38,     0,    38,    47,    42,     4,    42,    41,   209,   210,
     211,    38,    38,   214,    43,    42,    42,    42,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      74,    75,    38,    43,    38,    79,    42,    39,    42,    39,
      43,    85,    86,    87,    88,    38,    38,    43,    43,    42,
      42,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    43,    43,    43,    32,    33,   113,
     114,    38,    43,    43,    38,    42,    41,    38,    42,    32,
      43,    42,    47,    42,   128,   129,     3,   131,     5,     6,
       7,    42,     9,    10,    43,    42,    42,    42,    42,    42,
      42,   145,    42,    42,    16,    43,    43,    24,    43,    74,
      43,    43,    43,    43,    79,    43,    33,    34,    35,    36,
      85,    86,    87,    88,    41,    43,    43,    43,    43,   173,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    43,    43,    43,    43,    43,   113,   114,
      32,    33,    43,    43,    43,    43,    43,    42,    42,    41,
      39,    39,    42,   128,   129,    47,   131,    41,   212,    41,
      41,   215,   216,   217,    41,    43,    42,    59,    42,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    74,    42,    42,    42,    32,    79,    32,    32,
      32,    32,    32,    32,    42,    42,    32,    42,   173,    41,
      23,    43,     4,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    42,    42,    42,    32,
      33,   113,   114,    42,    42,    42,    42,    42,    41,   212,
      42,    42,    42,    42,    47,    42,   128,   129,    42,   131,
     215,   216,   217,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    42,    42,    42,    42,    42,
      42,    74,    32,    33,    32,    78,    79,    42,    42,    42,
      42,    41,    -1,    -1,    -1,    43,    -1,    47,    -1,    -1,
      -1,   173,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,    74,    32,    33,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    41,   128,   129,    -1,   131,    -1,
      47,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    74,    32,    33,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    41,   128,   129,
     173,   131,    -1,    47,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,   128,   129,   173,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,   113,
     114,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,   128,   129,   173,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,     3,     4,     5,     6,     7,
      -1,     9,    10,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    24,    25,    26,    27,
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
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    24,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,     3,    41,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    24,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    11,    12,    13,    14,
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
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    45,    46,    47,    48,    67,     3,     8,
       0,    47,    41,    43,    41,    49,    51,     1,     4,    53,
      54,    53,     3,    38,    42,    42,    54,    39,    39,    50,
      52,     1,    55,    55,     3,     4,     5,     6,     7,     9,
      10,    24,    25,    27,    28,    29,    30,    31,    33,    34,
      35,    36,    37,    40,    41,    56,    57,    58,    59,    60,
      62,    63,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    77,    40,    23,    41,     3,    69,    41,    41,
      41,    41,    41,    69,    41,    41,    41,    41,    41,    69,
      39,    39,    72,    39,    43,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    32,    69,     3,
      70,    76,    73,    43,    57,    61,    42,    69,    69,    69,
      43,    69,    70,    75,    75,    75,    75,    42,    55,    55,
      43,    55,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    38,    42,    42,    57,    57,
      42,    43,    42,    42,    42,    42,    42,    42,    42,    42,
      40,    40,    40,    70,    69,    69,    43,    43,    43,    26,
      64,    65,    39,    55,    40,     3,     5,     6,     7,     9,
      10,    24,    33,    34,    35,    36,    41,    70,    71,    72,
      73,    74,    75,    77,     5,     6,     7,     9,    10,    41,
      43,     3,    69,     3,     5,     6,     7,     9,    10,    41,
      32,    23,    41,    69,    41,    41,    41,    41,    69,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    69,    43,    69,    69,    69,    76,    69,    75,    75,
      75,    42,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    42,    42,    42,    42,    42,    42,
      42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    47,    47,    49,    50,
      48,    51,    52,    48,    53,    53,    53,    53,    54,    55,
      55,    55,    56,    56,    56,    56,    56,    57,    58,    58,
      58,    58,    59,    60,    61,    61,    62,    62,    63,    65,
      64,    66,    67,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      76,    76,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
      10,     0,     0,    10,     3,     1,     0,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       3,     4,     4,     4,     3,     3,     4,     5,     4,     0,
       5,     3,     3,     4,     5,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     1,     4,     4,     4,     1,     1,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     3,
       3,     1,     0,     3
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
#line 81 "newcParser.y"
                          {
                            ast_tree = (yyval.tree_node);
                          }
#line 2116 "newcParser.tab.c"
    break;

  case 3: /* declarations_list: declarations_list declaration  */
#line 87 "newcParser.y"
                                      {
                                        (yyval.tree_node) = create_node2("declarations_list declaration", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                                      }
#line 2124 "newcParser.tab.c"
    break;

  case 4: /* declarations_list: declaration  */
#line 90 "newcParser.y"
                                      {
                                        (yyval.tree_node) = create_node1("declaration", (yyvsp[0].tree_node));
                                      }
#line 2132 "newcParser.tab.c"
    break;

  case 5: /* declarations_list: error  */
#line 93 "newcParser.y"
                                      {
                                        (yyval.tree_node) = create_node_empty();
                                        errors += 1;
                                        yyerror(yymsg);
                                      }
#line 2142 "newcParser.tab.c"
    break;

  case 6: /* declaration: var_dec  */
#line 101 "newcParser.y"
                {
                  (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
                }
#line 2150 "newcParser.tab.c"
    break;

  case 7: /* declaration: func_dec  */
#line 104 "newcParser.y"
                {
                  (yyval.tree_node) = create_node1("func_dec", (yyvsp[0].tree_node));
                }
#line 2158 "newcParser.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 110 "newcParser.y"
                   {
      scope++;
      push_stack(scope);
    }
#line 2167 "newcParser.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 113 "newcParser.y"
                                {
      errors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters);
      parameters = 0;
    }
#line 2176 "newcParser.tab.c"
    break;

  case 10: /* func_dec: TYPE ID PARENL $@1 params_list PARENR STFUNC $@2 statement_list ENDFUNC  */
#line 116 "newcParser.y"
                              {
      (yyval.tree_node) = create_node4("TYPE ID PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0((yyvsp[-9].str)), create_node0((yyvsp[-8].str)), (yyvsp[-5].tree_node), (yyvsp[-1].tree_node));
      pop_stack();
    }
#line 2185 "newcParser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 120 "newcParser.y"
                     {
      scope++;
      push_stack(scope);
    }
#line 2194 "newcParser.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 123 "newcParser.y"
                                {
      semanticErrors += add_symbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stack_scope) -> value, parameters);
      parameters = 0;
    }
#line 2203 "newcParser.tab.c"
    break;

  case 13: /* func_dec: TYPE MAIN PARENL $@3 params_list PARENR STFUNC $@4 statement_list ENDFUNC  */
#line 126 "newcParser.y"
                             {
      symbolIdCounter++;
      (yyval.tree_node) = create_node4("TYPE MAIN PARENL params_list PARENR STFUNC statement_list ENDFUNC", create_node0((yyvsp[-9].str)), create_node0((yyvsp[-8].str)), (yyvsp[-5].tree_node), (yyvsp[-1].tree_node));
      has_main++;
      pop_stack();
    }
#line 2214 "newcParser.tab.c"
    break;

  case 14: /* params_list: params_list COMMA parameter  */
#line 135 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("params_list COMMA parameter", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2222 "newcParser.tab.c"
    break;

  case 15: /* params_list: parameter  */
#line 138 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("parameter", (yyvsp[0].tree_node));
    }
#line 2230 "newcParser.tab.c"
    break;

  case 16: /* params_list: %empty  */
#line 141 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2238 "newcParser.tab.c"
    break;

  case 17: /* params_list: error  */
#line 144 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
      errors += 1;
      yyerror(yymsg);
    }
#line 2248 "newcParser.tab.c"
    break;

  case 18: /* parameter: TYPE ID  */
#line 152 "newcParser.y"
            {
      parameters++;
      (yyval.tree_node) = create_node2("TYPE ID", create_node0((yyvsp[-1].str)), create_node0((yyvsp[0].str)));
      semanticErrors += add_symbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stack_scope) -> value, 0);
    }
#line 2258 "newcParser.tab.c"
    break;

  case 19: /* statement_list: statement_list statement  */
#line 160 "newcParser.y"
                             {
      (yyval.tree_node) = create_node2("statement_list statement", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2266 "newcParser.tab.c"
    break;

  case 20: /* statement_list: %empty  */
#line 163 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2274 "newcParser.tab.c"
    break;

  case 21: /* statement_list: error  */
#line 166 "newcParser.y"
          {
      (yyval.tree_node) = create_node_empty();
    }
#line 2282 "newcParser.tab.c"
    break;

  case 22: /* statement: expression_statement  */
#line 172 "newcParser.y"
                         {
      (yyval.tree_node) = create_node1("expression_statement", (yyvsp[0].tree_node));
    }
#line 2290 "newcParser.tab.c"
    break;

  case 23: /* statement: ret_st  */
#line 175 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("ret_st", (yyvsp[0].tree_node));
    }
#line 2298 "newcParser.tab.c"
    break;

  case 24: /* statement: var_dec  */
#line 178 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("var_dec", (yyvsp[0].tree_node));
    }
#line 2306 "newcParser.tab.c"
    break;

  case 25: /* statement: io_ops  */
#line 181 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("io_ops", (yyvsp[0].tree_node));
    }
#line 2314 "newcParser.tab.c"
    break;

  case 26: /* statement: basic_ops  */
#line 184 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("basic_ops", (yyvsp[0].tree_node));
    }
#line 2322 "newcParser.tab.c"
    break;

  case 27: /* expression_statement: expression SEMIC  */
#line 190 "newcParser.y"
                     {
      (yyval.tree_node) = create_node1("expression SEMIC", (yyvsp[-1].tree_node));
    }
#line 2330 "newcParser.tab.c"
    break;

  case 28: /* basic_ops: if_ops  */
#line 196 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("if_ops", (yyvsp[0].tree_node));
    }
#line 2338 "newcParser.tab.c"
    break;

  case 29: /* basic_ops: for_statement STFUNC statement_list ENDFUNC  */
#line 199 "newcParser.y"
                                                {
      pop_stack();
      (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2347 "newcParser.tab.c"
    break;

  case 30: /* basic_ops: forall_statement set_op SEMIC  */
#line 203 "newcParser.y"
                                  {
      pop_stack();
      (yyval.tree_node) = create_node2("FORALL PARENL in_set PARENR set_op SEMIC ", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node));
    }
#line 2356 "newcParser.tab.c"
    break;

  case 31: /* basic_ops: forall_statement STFUNC statement_list ENDFUNC  */
#line 207 "newcParser.y"
                                                   {
      pop_stack();
      (yyval.tree_node) = create_node2("FORALL PARENL in_set PARENR STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2365 "newcParser.tab.c"
    break;

  case 32: /* for_statement: FOR PARENL for_body PARENR  */
#line 214 "newcParser.y"
                             {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FOR PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 2375 "newcParser.tab.c"
    break;

  case 33: /* forall_statement: FORALL PARENL in_set PARENR  */
#line 222 "newcParser.y"
                              {
    scope++;
    push_stack(scope);
    (yyval.tree_node) = create_node2("FORALL PARENL for_body PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
  }
#line 2385 "newcParser.tab.c"
    break;

  case 34: /* for_body: expression_statement expression_statement expression  */
#line 230 "newcParser.y"
                                                         {
      (yyval.tree_node) = create_node3("expression_statement expression_statement expression", (yyvsp[-2].tree_node), (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2393 "newcParser.tab.c"
    break;

  case 35: /* for_body: SEMIC expression_statement expression  */
#line 233 "newcParser.y"
                                          {
      (yyval.tree_node) = create_node2("SEMIC expression_statement expression", (yyvsp[-1].tree_node), (yyvsp[0].tree_node));
    }
#line 2401 "newcParser.tab.c"
    break;

  case 36: /* if_ops: if_statement STFUNC statement_list ENDFUNC  */
#line 239 "newcParser.y"
                                               {
      pop_stack();
      (yyval.tree_node) = create_node2("if_statement STFUNC statement_list ENDFUNC", (yyvsp[-3].tree_node), (yyvsp[-1].tree_node));
    }
#line 2410 "newcParser.tab.c"
    break;

  case 37: /* if_ops: if_statement STFUNC statement_list ENDFUNC else_statement  */
#line 243 "newcParser.y"
                                                              {
      pop_stack();
      (yyval.tree_node) = create_node3("if_statement STFUNC statement_list ENDFUNC else_statement", (yyvsp[-4].tree_node), (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2419 "newcParser.tab.c"
    break;

  case 38: /* if_statement: IF PARENL operation PARENR  */
#line 250 "newcParser.y"
                               {
      scope++;
      push_stack(scope);
      (yyval.tree_node) = create_node2("IF PARENL operation PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2429 "newcParser.tab.c"
    break;

  case 39: /* $@5: %empty  */
#line 258 "newcParser.y"
         {
      scope++;
      push_stack(scope);
    }
#line 2438 "newcParser.tab.c"
    break;

  case 40: /* else_statement: ELSE $@5 STFUNC statement_list ENDFUNC  */
#line 261 "newcParser.y"
                                    {
      pop_stack();
      (yyval.tree_node) = create_node2("ELSE STFUNC statement_list ENDFUNC", create_node0((yyvsp[-4].str)), (yyvsp[-1].tree_node));
    }
#line 2447 "newcParser.tab.c"
    break;

  case 41: /* ret_st: RETURN expression SEMIC  */
#line 269 "newcParser.y"
                            {
      (yyval.tree_node) = create_node2("RETURN expression SEMIC", create_node0((yyvsp[-2].str)), (yyvsp[-1].tree_node));
    }
#line 2455 "newcParser.tab.c"
    break;

  case 42: /* var_dec: TYPE ID SEMIC  */
#line 275 "newcParser.y"
                  {
      semanticErrors += add_symbol((yyvsp[-1].str), "var", (yyvsp[-2].str), STACK_TOP(stack_scope) -> value, 0);
      (yyval.tree_node) = create_node2("TYPE ID SEMIC", create_node0((yyvsp[-2].str)), create_node0((yyvsp[-1].str)));
    }
#line 2464 "newcParser.tab.c"
    break;

  case 43: /* io_ops: READ PARENL PARENR SEMIC  */
#line 282 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("READ PARENL PARENR SEMIC", create_node0((yyvsp[-3].str)));
    }
#line 2472 "newcParser.tab.c"
    break;

  case 44: /* io_ops: READ PARENL expression PARENR SEMIC  */
#line 285 "newcParser.y"
                                        {
      (yyval.tree_node) = create_node2("READ PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
    }
#line 2480 "newcParser.tab.c"
    break;

  case 45: /* io_ops: WRITE PARENL expression PARENR SEMIC  */
#line 288 "newcParser.y"
                                         {
      (yyval.tree_node) = create_node2("WRITE PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
    }
#line 2488 "newcParser.tab.c"
    break;

  case 46: /* io_ops: WRITELN PARENL expression PARENR SEMIC  */
#line 291 "newcParser.y"
                                           {
      (yyval.tree_node) = create_node2("WRITELN PARENL expression PARENR SEMIC", create_node0((yyvsp[-4].str)), (yyvsp[-2].tree_node));
    }
#line 2496 "newcParser.tab.c"
    break;

  case 47: /* expression: set_op  */
#line 297 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("set_op", (yyvsp[0].tree_node));
    }
#line 2504 "newcParser.tab.c"
    break;

  case 48: /* expression: operation  */
#line 300 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("operation", (yyvsp[0].tree_node));
    }
#line 2512 "newcParser.tab.c"
    break;

  case 49: /* expression: func_call  */
#line 303 "newcParser.y"
              {
      (yyval.tree_node) = create_node1("func_call", (yyvsp[0].tree_node));
    }
#line 2520 "newcParser.tab.c"
    break;

  case 50: /* expression: assign_value  */
#line 306 "newcParser.y"
                 {
      (yyval.tree_node) = create_node1("assign_value", (yyvsp[0].tree_node));
    }
#line 2528 "newcParser.tab.c"
    break;

  case 51: /* term: ID  */
#line 312 "newcParser.y"
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
#line 2544 "newcParser.tab.c"
    break;

  case 52: /* term: INTEGER  */
#line 323 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("INTEGER", create_node0_int((yyvsp[0].integer), 'i'));
    }
#line 2552 "newcParser.tab.c"
    break;

  case 53: /* term: DECIMAL  */
#line 326 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("DECIMAL", create_node0_dec((yyvsp[0].dec), 'd'));
    }
#line 2560 "newcParser.tab.c"
    break;

  case 54: /* term: CHAR  */
#line 329 "newcParser.y"
         {
      (yyval.tree_node) = create_node1("CHAR", create_node0_char((yyvsp[0].str), 'c'));
    }
#line 2568 "newcParser.tab.c"
    break;

  case 55: /* term: STRING  */
#line 332 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("STRING", create_node0((yyvsp[0].str)));
    }
#line 2576 "newcParser.tab.c"
    break;

  case 56: /* term: EMPTY  */
#line 335 "newcParser.y"
          {
      (yyval.tree_node) = create_node1("EMPTY", create_node0((yyvsp[0].str)));
    }
#line 2584 "newcParser.tab.c"
    break;

  case 57: /* term: PARENL expression PARENR  */
#line 338 "newcParser.y"
                             {
      (yyval.tree_node) = create_node1("PARENL expression PARENR", (yyvsp[-1].tree_node));
    }
#line 2592 "newcParser.tab.c"
    break;

  case 58: /* math_op: term DIV expression  */
#line 344 "newcParser.y"
                        {
      (yyval.tree_node) = create_node3("term DIV expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2600 "newcParser.tab.c"
    break;

  case 59: /* math_op: term MULT expression  */
#line 347 "newcParser.y"
                         {
      (yyval.tree_node) = create_node3("term MULT expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2608 "newcParser.tab.c"
    break;

  case 60: /* math_op: term ADD expression  */
#line 350 "newcParser.y"
                        {
      (yyval.tree_node) = create_node3("term ADD expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2616 "newcParser.tab.c"
    break;

  case 61: /* math_op: term SUB expression  */
#line 353 "newcParser.y"
                        {
      (yyval.tree_node) = create_node3("term SUB expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2624 "newcParser.tab.c"
    break;

  case 62: /* math_op: term  */
#line 356 "newcParser.y"
         {
      (yyval.tree_node) = create_node1("term", (yyvsp[0].tree_node));
    }
#line 2632 "newcParser.tab.c"
    break;

  case 63: /* set_op: ADDSET PARENL in_set PARENR  */
#line 362 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("ADDSET PARENL in_set PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2640 "newcParser.tab.c"
    break;

  case 64: /* set_op: REMOVE PARENL in_set PARENR  */
#line 365 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("REMOVE PARENL in_set PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2648 "newcParser.tab.c"
    break;

  case 65: /* set_op: EXISTS PARENL in_set PARENR  */
#line 368 "newcParser.y"
                                {
      (yyval.tree_node) = create_node2("EXISTS PARENL in_set PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2656 "newcParser.tab.c"
    break;

  case 66: /* operation: math_op  */
#line 374 "newcParser.y"
            {
      (yyval.tree_node) = create_node1("math_op", (yyvsp[0].tree_node));
    }
#line 2664 "newcParser.tab.c"
    break;

  case 67: /* operation: in_set  */
#line 377 "newcParser.y"
           {
      (yyval.tree_node) = create_node1("in_set", (yyvsp[0].tree_node));
    }
#line 2672 "newcParser.tab.c"
    break;

  case 68: /* operation: ISTYPE PARENL expression PARENR  */
#line 380 "newcParser.y"
                                    {
      (yyval.tree_node) = create_node2("ISTYPE PARENL expression PARENR", create_node0((yyvsp[-3].str)), (yyvsp[-1].tree_node));
    }
#line 2680 "newcParser.tab.c"
    break;

  case 69: /* operation: term SMALLER expression  */
#line 383 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term SMALLER expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2688 "newcParser.tab.c"
    break;

  case 70: /* operation: term GREATER expression  */
#line 386 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term GREATER expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2696 "newcParser.tab.c"
    break;

  case 71: /* operation: term SMALLEQ expression  */
#line 389 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term SMALLEQ expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2704 "newcParser.tab.c"
    break;

  case 72: /* operation: term GREATEQ expression  */
#line 392 "newcParser.y"
                            {
      (yyval.tree_node) = create_node3("term GREATEQ expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2712 "newcParser.tab.c"
    break;

  case 73: /* operation: term EQUALS expression  */
#line 395 "newcParser.y"
                           {
      (yyval.tree_node) = create_node3("term EQUALS expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2720 "newcParser.tab.c"
    break;

  case 74: /* operation: term DIFFERENT expression  */
#line 398 "newcParser.y"
                              {
      (yyval.tree_node) = create_node3("term DIFFERENT expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2728 "newcParser.tab.c"
    break;

  case 75: /* operation: term OR expression  */
#line 401 "newcParser.y"
                       {
      (yyval.tree_node) = create_node3("term OR expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2736 "newcParser.tab.c"
    break;

  case 76: /* operation: term AND expression  */
#line 404 "newcParser.y"
                        {
      (yyval.tree_node) = create_node3("term AND expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2744 "newcParser.tab.c"
    break;

  case 77: /* operation: NEG expression  */
#line 407 "newcParser.y"
                   {
      (yyval.tree_node) = create_node2("NEG expression", create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2752 "newcParser.tab.c"
    break;

  case 78: /* func_call: ID PARENL args_list PARENR  */
#line 413 "newcParser.y"
                               {
      if (find_symbol_func((yyvsp[-3].str)) != NULL){
        if (check_number_of_params(args_params, (yyvsp[-3].str))){
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
#line 2776 "newcParser.tab.c"
    break;

  case 79: /* in_set: term IN expression  */
#line 435 "newcParser.y"
                       {
      (yyval.tree_node) = create_node3("term IN expression", (yyvsp[-2].tree_node), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
    }
#line 2784 "newcParser.tab.c"
    break;

  case 80: /* args_list: args_list COMMA term  */
#line 441 "newcParser.y"
                         {
      args_params++;
      (yyval.tree_node) = create_node2("args_list COMMA term", (yyvsp[-2].tree_node), (yyvsp[0].tree_node));
    }
#line 2793 "newcParser.tab.c"
    break;

  case 81: /* args_list: term  */
#line 445 "newcParser.y"
         {
      args_params++;
      (yyval.tree_node) = create_node1("term", (yyvsp[0].tree_node));
    }
#line 2802 "newcParser.tab.c"
    break;

  case 82: /* args_list: %empty  */
#line 449 "newcParser.y"
    {
      (yyval.tree_node) = create_node0("vazio");
    }
#line 2810 "newcParser.tab.c"
    break;

  case 83: /* assign_value: ID ASSIGN expression  */
#line 456 "newcParser.y"
                         {
      if (check_is_in_scope((yyvsp[-2].str), STACK_TOP(stack_scope) -> value))
        (yyval.tree_node) = create_node3("ID ASSIGN expression", create_node0((yyvsp[-2].str)), create_node0((yyvsp[-1].str)), (yyvsp[0].tree_node));
      else{
        printf("ERRO SEMATICO\n");
        printf("VARIAVEL %s NAO DECLARADA, linha %d, coluna %d\n\n", (yyvsp[-2].str), line, word_position);
        semanticErrors += 1;
        (yyval.tree_node) = create_node_empty();
      }
    }
#line 2825 "newcParser.tab.c"
    break;


#line 2829 "newcParser.tab.c"

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

#line 470 "newcParser.y"


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

  fclose(yyin);

  yylex_destroy();

  return 0;
}
