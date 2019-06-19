main: array.o utils.o main.o item_string.o
	gcc array.o utils.o main.o item_string.o -o esercizio
array.o:
	gcc -c array.c
main.o:
	gcc -c main.c
item_string.o:
	gcc -c item_string.c
utils.o:
	gcc -c utils.c
clean:
	rm -f utils.o main.o item_string.o array.o esercizio
