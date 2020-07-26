
all:

	gcc main.c -o app -Iusr/local/include -Iinclude -lraylib -lm
