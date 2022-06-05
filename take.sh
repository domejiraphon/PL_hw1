#!/bin/sh


bison -d calc3.y
flex calc3.l


g++ lex.yy.c calc3.tab.c -o test_f

#rm lex.yy.c $1.tab.h $1.tab.c
