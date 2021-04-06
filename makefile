CC=gcc
CFLAGS= -Iinclude
LDFLAGS= -lraylib -lm
BIN = -o bin/app
OBJ=obj
OBJS= $(OBJ)/player.o $(OBJ)/Math.o $(OBJ)/Sprite.o

$(OBJ)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) main.c $^ $(BIN) $(LDFLAGS)

clean:
	rm obj/*
	rm bin/*

