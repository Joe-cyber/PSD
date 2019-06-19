main: main.o equazione.o
	gcc equazione.c main.o -o equazione -lm
main.o:
	gcc -c main.c
equazione.o:
	gcc -c equazione.c
clean:
	rm -f equazione.o main.o equazione
