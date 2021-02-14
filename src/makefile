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

