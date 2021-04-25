/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_NEWCPARSER_TAB_H_INCLUDED
# define YY_YY_NEWCPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    TYPE = 259,                    /* TYPE  */
    STRING = 260,                  /* STRING  */
    CHAR = 261,                    /* CHAR  */
    EMPTY = 262,                   /* EMPTY  */
    MAIN = 263,                    /* MAIN  */
    ERRORTOKEN = 264,              /* ERRORTOKEN  */
    INTEGER = 265,                 /* INTEGER  */
    DECIMAL = 266,                 /* DECIMAL  */
    ADD = 267,                     /* ADD  */
    SUB = 268,                     /* SUB  */
    MULT = 269,                    /* MULT  */
    DIV = 270,                     /* DIV  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    SMALLER = 273,                 /* SMALLER  */
    GREATER = 274,                 /* GREATER  */
    SMALLEQ = 275,                 /* SMALLEQ  */
    GREATEQ = 276,                 /* GREATEQ  */
    EQUALS = 277,                  /* EQUALS  */
    DIFFERENT = 278,               /* DIFFERENT  */
    ASSIGN = 279,                  /* ASSIGN  */
    NEG = 280,                     /* NEG  */
    IF = 281,                      /* IF  */
    ELSE = 282,                    /* ELSE  */
    FOR = 283,                     /* FOR  */
    READ = 284,                    /* READ  */
    WRITE = 285,                   /* WRITE  */
    WRITELN = 286,                 /* WRITELN  */
    RETURN = 287,                  /* RETURN  */
    IN = 288,                      /* IN  */
    ISTYPE = 289,                  /* ISTYPE  */
    ADDSET = 290,                  /* ADDSET  */
    REMOVE = 291,                  /* REMOVE  */
    EXISTS = 292,                  /* EXISTS  */
    FORALL = 293,                  /* FORALL  */
    COMMA = 294,                   /* COMMA  */
    STFUNC = 295,                  /* STFUNC  */
    ENDFUNC = 296,                 /* ENDFUNC  */
    PARENL = 297,                  /* PARENL  */
    PARENR = 298,                  /* PARENR  */
    SEMIC = 299,                   /* SEMIC  */
    OUTERTHEN = 300                /* OUTERTHEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "newcParser.y"

  int integer;
  char *str;
  char character;
  float dec;

  struct node *tree_node;

#line 118 "newcParser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_NEWCPARSER_TAB_H_INCLUDED  */
