CC=gcc
CFLAGS=-I

eulermake: euler.c
	$(CC) -o euler.o euler.c -lSDL2 -lm
