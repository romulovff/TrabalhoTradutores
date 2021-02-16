%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>

  int line = 1;
  int word_position = 1;
%}

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
smalleq    "<="
greateq   ">="
equals    "=="
diff      "!="

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
          }

{sub}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{mult}    {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{div}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{negate}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
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
          }

{assign}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{comment} {
            word_position += yyleng;
          }

{and}     {
            printf("OP [AND]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{or}      {
            printf("OP [OR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{smaller} {
            printf("OP [SMALLER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{greater} {
            printf("OP [GREATER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{smalleq} {
            printf("OP [SMALLER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{greateq} {
            printf("OP [GREATER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{equals}  {
            printf("OP [EQUALS]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{diff}    {
            printf("OP [IS DIFFERENT]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{if}      {
            printf("Keyword [IF]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{else}    {
            printf("Keyword [ELSE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{for}     {
            printf("Keyword [FOR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{return}  {
            printf("Keyword [RETURN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{read}    {
            printf("Keyword [READ]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{write}   {
            printf("Keyword [WRITE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{writeln} {
            printf("Keyword [WRITELN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{inkey}   {
            printf("Keyword [IN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{istype}  {
            printf("Keyword [IS_TYPE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{addset}  {
            printf("Keyword [ADD]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{rmset}   {
            printf("Keyword [REMOVE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{exists}  {
            printf("Keyword [EXISTS]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{forall}  {
            printf("Keyword [FORALL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{decimal} {
            printf("Decimal: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{integer}  {
            printf("Integer: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{id}      {
            printf("Id: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{char}    {
            printf("Char: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{string}  {
            printf("String: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line: %d, column: %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
          }

%%

int main(int argc, char *argv[]) {
  printf("\n\n#### INICIANDO TESTE ####\n\n");

  FILE *file;

  yyin = fopen(argv[1], "r");
  yylex();

  printf("\n\n#### FIM DO ARQUIVO ####\n\n");

  return 0;
}
