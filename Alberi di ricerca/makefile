interi: BST.o main.o item_int.o utils.o array.o list.o queue.o
	gcc main.o item_int.o BST.o utils.o array.o list.o queue.o -o albero
stringhe:  BST.o main2.o item_string.o utils.o array.o BST.o
	gcc main2.o item_string.o utils.o array.o BST.o -o albero
queue.o:
	gcc -c queue.c
list.o:
	gcc -c list.c
main2.o:
	gcc -c main2.c
item_string.o:
	gcc -c item_string.c
utils.o:
	gcc -c utils.c
array.o:
	gcc -c array.c
item_int.o:
	gcc -c item_int.c
main.o:
	gcc -c main.c
BST.o:
	gcc -c BST.c
clean:
	rm -f *.o albero
