all: main.c
	gcc -o parse_args main.c

run: all
	./parse_args
