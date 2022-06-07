
output: bison.o lex.o
	g++ lex.yy.c jy3694.calc.tab.c -o calculator

bison.o: jy3694.calc.y
	bison -d jy3694.calc.y

lex.o: jy3694.calc.l
	flex jy3694.calc.l

