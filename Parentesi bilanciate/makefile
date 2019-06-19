stack_array: main.o item_int.o stack_array.o 
	gcc item_int.o main.o stack_array.o -o stack
stack_array.o:
	gcc -c stack_array.c
main.o:
	gcc -c main.c
item_int.o:
	gcc -c item_int.c
clean:
	rm -f main.o list.o item_int.o utils.o stack_array.o stack
