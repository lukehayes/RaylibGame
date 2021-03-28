CC=gcc
CFLAGS= -Iinclude

player.o: src/player.c include/player.h
	$(CC) $(CFLAGS) -c $<  -o $@

all: player.o
	gcc main.c player.o -o app -Iinclude -lraylib -lm

