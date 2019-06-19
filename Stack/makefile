stack: main.o list.o item_int.o stack_list.o utils.o
	gcc item_int.o stack_list.o main.o list.o utils.o -o stack
stack_array: main.o item_int.o stack_array.o 
	gcc item_int.o main.o stack_array.o -o stack
stack_array.o:
	gcc -c stack_array.c
utils.o:
	gcc -c utils.c
main.o:
	gcc -c main.c
item_int.o:
	gcc -c item_int.c
list.o:
	gcc -c list.c
stack_list.o:
	gcc -c stack_list.c
clean:
	rm -f main.o list.o stack_list.o item_int.o utils.o stack_array.o stack
