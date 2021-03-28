CC=gcc
CFLAGS= -Iinclude
LDFLAGS= -lraylib -lm
OUT = -o app

player.o: src/player.c include/player.h
	$(CC) $(CFLAGS) -c $<  -o $@

all: player.o
	$(CC) $(CFLAGS) main.c $^ $(OUT) $(LDFLAGS)

