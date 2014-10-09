CC= gcc
FLAGS= -ggdb -Wall -std=c99 -Werror

main:	main_rese.o graf_lib.o
	$(CC) -g main_rese.o graf_lib.o -o  main

main_rese.o: main_reseplanerare.c graf_lib.h
	$(CC) $(FLAGS) -c main_reseplanerare.c -o main_rese.o

graf_lib.o:	graf_lib.c graf_lib.h
	$(CC) $(FLAGS) -c graf_lib.c

clean:
	rm -f main_rese.o
	rm -f graf_lib.o
	rm -f *~
	rm -f main

.PHONY: clean