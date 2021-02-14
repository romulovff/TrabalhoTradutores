runtests: all test

all: compile

compile: runflex compilefile

runflex:
	flex newc.l

compilefile:
	gcc lex.yy.c -o newc -ll

test:
	./newc ../tests/test1.txt
	./newc ../tests/test2.txt
	./newc ../tests/test3.txt
	./newc ../tests/test4.txt
	./newc ../tests/test5.txt

