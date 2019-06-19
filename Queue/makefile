queue_list: list.o main.o queue.o item_int.o utils.o
	gcc list.o main.o queue.o item_int.o utils.o -o queue
queue_stack: list.o main.o queue_stack.o item_int.o utils.o stack_list.o
	gcc list.o main.o queue_stack.o item_int.o utils.o stack_list.o -o queue
queue_stack.o:
	gcc -c queue_stack.c
stack_list.o:
	gcc -c stack_list.c
list.o:
	gcc -c list.c
main.o:
	gcc -c main.c
queue.o:
	gcc -c queue.c
item_int.o:
	gcc -c item_int.c
utils.o:
	gcc -c utils.c
clean:
	rm -f list.o main.o queue.o item_int.o utils.o stack_list.o queue queue_stack.o
