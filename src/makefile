# runtests: all test

all: compile

compile: runflex runbison compilefile

runbison:
	bison -d newcParser.y

runflex:
	flex newc.l

compilefile:
	gcc lex.yy.c newcParser.tab.c -ll -o parser

# test:
# 	./newc < ../tests/test1.txt > ../results/test1result.txt
# 	./newc < ../tests/test2.txt > ../results/test2result.txt
# 	./newc < ../tests/test3.txt > ../results/test3result.txt
# 	./newc < ../tests/test4.txt > ../results/test4result.txt
# 	./newc < ../tests/test5.txt > ../results/test5result.txt

