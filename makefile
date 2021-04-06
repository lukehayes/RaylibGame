CC=gcc
CFLAGS= -Iinclude
LDFLAGS= -lraylib -lm
OUT = -o bin/app
OBJS= obj/player.o obj/Math.o obj/Sprite.o

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) main.c $^ $(OUT) $(LDFLAGS)

clean:
	rm obj/*
	rm bin/*

