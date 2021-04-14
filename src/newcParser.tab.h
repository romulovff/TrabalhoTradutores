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
    INTEGER = 264,                 /* INTEGER  */
    DECIMAL = 265,                 /* DECIMAL  */
    ADD = 266,                     /* ADD  */
    SUB = 267,                     /* SUB  */
    MULT = 268,                    /* MULT  */
    DIV = 269,                     /* DIV  */
    OR = 270,                      /* OR  */
    AND = 271,                     /* AND  */
    SMALLER = 272,                 /* SMALLER  */
    GREATER = 273,                 /* GREATER  */
    SMALLEQ = 274,                 /* SMALLEQ  */
    GREATEQ = 275,                 /* GREATEQ  */
    EQUALS = 276,                  /* EQUALS  */
    DIFFERENT = 277,               /* DIFFERENT  */
    ASSIGN = 278,                  /* ASSIGN  */
    NEG = 279,                     /* NEG  */
    IF = 280,                      /* IF  */
    ELSE = 281,                    /* ELSE  */
    FOR = 282,                     /* FOR  */
    READ = 283,                    /* READ  */
    WRITE = 284,                   /* WRITE  */
    WRITELN = 285,                 /* WRITELN  */
    RETURN = 286,                  /* RETURN  */
    IN = 287,                      /* IN  */
    ISTYPE = 288,                  /* ISTYPE  */
    ADDSET = 289,                  /* ADDSET  */
    REMOVE = 290,                  /* REMOVE  */
    EXISTS = 291,                  /* EXISTS  */
    FORALL = 292,                  /* FORALL  */
    COMMA = 293,                   /* COMMA  */
    STFUNC = 294,                  /* STFUNC  */
    ENDFUNC = 295,                 /* ENDFUNC  */
    PARENL = 296,                  /* PARENL  */
    PARENR = 297,                  /* PARENR  */
    SEMIC = 298                    /* SEMIC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "newcParser.y"

  int integer;
  char *str;
  char character;
  float dec;

  struct node *tree_node;

#line 116 "newcParser.tab.h"

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
