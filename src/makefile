all: compile

runtests: all test

runvalgrind: all valgrind

compile: runflex runbison compilefile

runbison:
	bison -d -v -Wcounterexamples newcParser.y

runflex:
	flex newc.l

compilefile:
	gcc lex.yy.c -g newcParser.tab.c -ll -g -Wall -o parser

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./parser ../tests/test1.nc

test:
	./parser ../tests/test1.nc > ../results/test1result.txt
	./parser ../tests/test2.nc > ../results/test2result.txt
	./parser ../tests/test3.nc > ../results/test3result.txt
	./parser ../tests/test4.nc > ../results/test4result.txt
	./parser ../tests/test5.nc > ../results/test5result.txt
	./parser ../tests/test6.nc > ../results/test6result.txt
	./parser ../tests/test7.nc > ../results/test7result.txt
	./parser ../tests/test8.nc > ../results/test8result.txt
	./parser ../tests/test9.nc > ../results/test9result.txt
