main: main.o main.h
	gcc -Wall -o main main.c -lm

main.h:
	gcc -Wall -o main main.h