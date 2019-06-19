item_int: utils.o item_int.o array.o main.o
	gcc utils.o main.o item_int.o array.o -o interi
array.o:
	gcc -c array.c
item_int.o:
	gcc -c item_int.c
utils.o:
	gcc -c utils.c
main.o:
	gcc -c main.c
clean:
	rm -f main.o array.o utils.o item_int.o interi


