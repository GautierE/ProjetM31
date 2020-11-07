main: main.o main.h
	gcc -Wall -o main main.c

main.h:
	gcc -Wall -o main main.h