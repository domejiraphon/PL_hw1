#!/bin/sh


bison -d jy3694.calc.y
flex jy3694.calc.l


g++ lex.yy.c jy3694.calc.tab.c -o test

#rm lex.yy.c $1.tab.h $1.tab.c
