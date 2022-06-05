/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_JY3694_CALC_TAB_H_INCLUDED
# define YY_YY_JY3694_CALC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOL = 258,
    PI = 259,
    NUMBER = 260,
    SUB = 261,
    ADD = 262,
    MUL = 263,
    DIV = 264,
    POW = 265,
    MOD = 266,
    L_BRACKET = 267,
    R_BRACKET = 268,
    FACTORIAL = 269,
    SQRT = 270,
    ABS = 271,
    FLOOR = 272,
    CEIL = 273,
    COS = 274,
    SIN = 275,
    TAN = 276,
    LOG2 = 277,
    LOG10 = 278,
    GBP_TO_USD = 279,
    USD_TO_GBP = 280,
    GBP_TO_EURO = 281,
    EURO_TO_GBP = 282,
    USD_TO_EURO = 283,
    EURO_TO_USD = 284,
    CEL_TO_FAH = 285,
    FAH_TO_CEL = 286,
    MI_TO_KM = 287,
    KM_TO_MI = 288,
    VAR_KEYWORD = 289,
    VARIABLE = 290,
    EQUALS = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "jy3694.calc.y"

    double val;
    /* You may include additional fields as you want. */
    /* char op; */

#line 100 "jy3694.calc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JY3694_CALC_TAB_H_INCLUDED  */
