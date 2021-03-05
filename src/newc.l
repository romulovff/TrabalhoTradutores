%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include "newcParser.tab.h"

  int line = 1;
  int word_position = 1;

%}

%option nounput
%option noinput
%option noyywrap

newline   "\n"
space     " "
tab       "\t"

letter    [a-zA-Z]
digit     [0-9]
empty     "EMPTY"
id        {letter}+({letter}|{digit}|_|-)*
integer   {digit}+
decimal   {digit}*[.]{digit}+
elem      {integer}|{decimal}
set       "{"({elem}","?)*"}"
char      '{letter}'
string    \"(\\.|[^"\\])*\"
type      "int"|"float"|"set"|"elem"
comment   "//".*

add       [+]
sub       [-]
mult      [*]
div       [/]

stfunc    [{]
endfunc   [}]
parenl    [(]
parenr    [)]
semic     [;]
comma     [,]

negate    [!]
or        "||"
and       "&&"

smaller   [<]
greater   [>]
assign    [=]
smalleq   "<="
greateq   ">="
equals    "=="
diff      "!="

main      "main"

if        "if"
else      "else"
for       "for"
return    "return"

read      "read"
write     "write"
writeln   "writeln"

inkey     "in"
istype    "is_"{type}
addset    "add"
rmset     "remove"
exists    "exists"
forall    "forall"

%%

{semic}   {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{comma}   {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{add}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ADD;
          }

{sub}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return SUB;
          }

{mult}    {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return MULT;
          }

{div}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return DIV;
          }

{negate}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return NEG;
          }

{tab}     {
            word_position += 2;
          }

{space}   {
            word_position += 1;
          }

{newline} {
            line += 1;
            word_position = 1;
          }

{type}    {
            printf("Type: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return TYPE;
          }

{main}    {
            printf("Main: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return MAIN;
          }

{stfunc}  {
            printf("'%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{endfunc} {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{parenl}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{parenr}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{empty}   {
            printf("Constant: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return EMPTY;
          }

{assign}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ASSIGN;
          }

{comment} {
            word_position += yyleng;
          }

{and}     {
            printf("OP [AND]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return AND;
          }

{or}      {
            printf("OP [OR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return OR;
          }

{smaller} {
            printf("OP [SMALLER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return SMALLER;
          }

{greater} {
            printf("OP [GREATER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return GREATER;
          }

{smalleq} {
            printf("OP [SMALLER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return SMALLEQ;
          }

{greateq} {
            printf("OP [GREATER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return GREATEQ;
          }

{equals}  {
            printf("OP [EQUALS]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return EQUALS;
          }

{diff}    {
            printf("OP [IS DIFFERENT]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return DIFFERENT;
          }

{if}      {
            printf("Keyword [IF]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return IF;
          }

{else}    {
            printf("Keyword [ELSE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ELSE;
          }

{for}     {
            printf("Keyword [FOR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return FOR;
          }

{return}  {
            printf("Keyword [RETURN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return RETURN;
          }

{read}    {
            printf("Keyword [READ]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return READ;
          }

{write}   {
            printf("Keyword [WRITE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return WRITE;
          }

{writeln} {
            printf("Keyword [WRITELN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return WRITELN;
          }

{inkey}   {
            printf("Keyword [IN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return IN;
          }

{istype}  {
            printf("Keyword [IS_TYPE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ISTYPE;
          }

{addset}  {
            printf("Keyword [ADD]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ADDSET;
          }

{rmset}   {
            printf("Keyword [REMOVE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return REMOVE;
          }

{exists}  {
            printf("Keyword [EXISTS]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return EXISTS;
          }

{forall}  {
            printf("Keyword [FORALL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return FORALL;
          }

{decimal} {
            printf("Decimal: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            yylval.dec = atof(yytext);
            return DECIMAL;
          }

{integer}  {
            printf("Integer: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            yylval.integer = atoi(yytext);
            return INTEGER;
          }

{id}      {
            printf("Id: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ID;
          }

{char}    {
            printf("Char: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return CHAR;
          }

{string}  {
            printf("String: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return STRING;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line: %d, column: %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
          }

%%