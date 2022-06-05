%{
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "calc3.tab.h"  /* We want the tokens defined in calc1.y. */
%}

%option noyywrap

%%

                        /* 'val' in 'yylval.val' is the field declared in
                           calc1.y with the %union directive. [0-9]+ (\.[0-9]+)?      { yylval.val_f = atoi(yytext); return NUMF; } */
[0-9]+(\.[0-9]+)?      { yylval.val = atoi(yytext); return NUM; }
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return MUL; }
"/"                     { return DIV; }
"sin"|"SIN"             { return SIN; }
"!"                     { return FACTORIAL; }

"("                     { return LPAREN; }
")"                     { return RPAREN; }

[ \t\r\n]+              { /* Ignore white characters. */ }
.                       { std::cerr << "Invalid token" << std::endl; exit(1); }

%%
