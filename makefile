CC=gcc
CFLAGS= -Iinclude
LDFLAGS= -lraylib -lm
OUT = -o app

%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: player.o
	$(CC) $(CFLAGS) main.c $^ $(OUT) $(LDFLAGS)

clean:
	rm *.o
	rm app

