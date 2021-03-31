CC=gcc
CFLAGS= -Iinclude
LDFLAGS= -lraylib -lm
OUT = -o app
OBJS= player.o Math.o Sprite.o

%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) main.c $^ $(OUT) $(LDFLAGS)

clean:
	rm *.o
	rm app

