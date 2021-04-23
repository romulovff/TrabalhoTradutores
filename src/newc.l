%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include "newcParser.tab.h"
  #include "newc.h"

  int line = 1;
  int word_position = 1;

%}

%option nounput
%option noinput
%option noyywrap

newline   "\n"
space     " "
tab       "\t"
carriage  "\r"

letter    [a-zA-Z]
digit     [0-9]
empty     "EMPTY"
id        {letter}+({letter}|{digit}|_|-)*
integer   -?{digit}+
decimal   -?{digit}*[.]{digit}+
elem      {integer}|{decimal}
set       "{"({elem}","?)*"}"
char      (\'([^(\"\')])?\')|(\'\\b\')|(\'\\f\')|(\'\\n\')|(\'\\r\')|(\'\\t\')|(\'\\v\')|(\'\\x\')|(\'\\\\')
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
istype    "is_set"
addset    "add"
rmset     "remove"
exists    "exists"
forall    "forall"

%%

{semic}   {
            word_position += yyleng;
            return SEMIC;
          }

{comma}   {
            word_position += yyleng;
            return COMMA;
          }

{add}     {
            word_position += yyleng;
            return ADD;
          }

{sub}     {
            word_position += yyleng;
            return SUB;
          }

{mult}    {
            word_position += yyleng;
            return MULT;
          }

{div}     {
            word_position += yyleng;
            return DIV;
          }

{negate}  {
            word_position += yyleng;
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
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return TYPE;
          }

{main}    {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return MAIN;
          }

{stfunc}  {
            word_position += yyleng;
            return STFUNC;
          }

{endfunc} {
            word_position += yyleng;
            return ENDFUNC;
          }

{parenl}  {
            word_position += yyleng;
            return PARENL;
          }

{parenr}  {
            word_position += yyleng;
            return PARENR;
          }

{empty}   {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return EMPTY;
          }

{assign}  {
            word_position += yyleng;
            return ASSIGN;
          }

{comment} {
            word_position += yyleng;
          }

{and}     {
            word_position += yyleng;
            return AND;
          }

{or}      {
            word_position += yyleng;
            return OR;
          }

{smaller} {
            word_position += yyleng;
            return SMALLER;
          }

{greater} {
            word_position += yyleng;
            return GREATER;
          }

{smalleq} {
            word_position += yyleng;
            return SMALLEQ;
          }

{greateq} {
            word_position += yyleng;
            return GREATEQ;
          }

{equals}  {
            word_position += yyleng;
            return EQUALS;
          }

{diff}    {
            word_position += yyleng;
            return DIFFERENT;
          }

{if}      {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return IF;
          }

{else}    {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ELSE;
          }

{for}     {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return FOR;
          }

{return}  {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return RETURN;
          }

{read}    {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return READ;
          }

{write}   {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return WRITE;
          }

{writeln} {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return WRITELN;
          }

{inkey}   {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return IN;
          }

{istype}  {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ISTYPE;
          }

{addset}  {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ADDSET;
          }

{rmset}   {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return REMOVE;
          }

{exists}  {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return EXISTS;
          }

{forall}  {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return FORALL;
          }

{decimal} {
            word_position += yyleng;
            yylval.dec = atof(yytext);
            return DECIMAL;
          }

{integer}  {
            word_position += yyleng;
            yylval.integer = atoi(yytext);
            return INTEGER;
          }

{id}      {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ID;
          }

{char}    {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return CHAR;
          }

{string}  {
            word_position += yyleng;
            yylval.str = (char *) strdup(yytext);
            return STRING;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line: %d, column: %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
            return ERRORTOKEN;
          }

%%
