int: main.o btree.o item_int.o stack_list.o list.o utils.o
	gcc main.o btree.o item_int.o stack_list.o list.o utils.o -o albero 
string: main.o btree.o item_string.o stack_list.o list.o utils.o
	gcc main.o btree.o item_string.o stack_list.o list.o utils.o -o albero
list.o:
	gcc -c list.c
utils.o:
	gcc -c utils.c
stack_list.o:
	gcc -c stack_list.c
main.o:
	gcc -c main.c
item_string.o:
	gcc -c item_string.c
item_int.o:
	gcc -c item_int.c
btree.o:
	gcc -c btree.c
clean:
	rm -f btree.o main.o item_int.o albero item_string.o stack_list.o list.o utils.o
