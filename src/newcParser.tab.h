/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     TYPE = 259,
     ELEMTYPE = 260,
     INTEGER = 261,
     DECIMAL = 262,
     STRING = 263,
     CHAR = 264,
     EMPTY = 265,
     MAIN = 266,
     RETURN = 267,
     ADD = 268,
     SUB = 269,
     MULT = 270,
     DIV = 271,
     OR = 272,
     AND = 273,
     NEG = 274,
     SMALLER = 275,
     GREATER = 276,
     SMALLEQ = 277,
     GREATEQ = 278,
     EQUALS = 279,
     DIFFERENT = 280,
     ASSIGN = 281,
     IF = 282,
     ELSE = 283,
     FOR = 284,
     READ = 285,
     WRITE = 286,
     WRITELN = 287,
     IN = 288,
     ISTYPE = 289,
     ADDSET = 290,
     REMOVE = 291,
     EXISTS = 292,
     FORALL = 293,
     SEMIC = 294,
     COMMA = 295,
     STFUNC = 296,
     ENDFUNC = 297,
     PARENL = 298,
     PARENR = 299
   };
#endif
/* Tokens.  */
#define ID 258
#define TYPE 259
#define ELEMTYPE 260
#define INTEGER 261
#define DECIMAL 262
#define STRING 263
#define CHAR 264
#define EMPTY 265
#define MAIN 266
#define RETURN 267
#define ADD 268
#define SUB 269
#define MULT 270
#define DIV 271
#define OR 272
#define AND 273
#define NEG 274
#define SMALLER 275
#define GREATER 276
#define SMALLEQ 277
#define GREATEQ 278
#define EQUALS 279
#define DIFFERENT 280
#define ASSIGN 281
#define IF 282
#define ELSE 283
#define FOR 284
#define READ 285
#define WRITE 286
#define WRITELN 287
#define IN 288
#define ISTYPE 289
#define ADDSET 290
#define REMOVE 291
#define EXISTS 292
#define FORALL 293
#define SEMIC 294
#define COMMA 295
#define STFUNC 296
#define ENDFUNC 297
#define PARENL 298
#define PARENR 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "newcParser.y"
{
  char* str;
  int integer;
  float dec;

  struct node *ast;
}
/* Line 1529 of yacc.c.  */
#line 145 "newcParser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
