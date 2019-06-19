int: item_int.o list.o main.o utils.o
	gcc item_int.o list.o main.o utils.o -o lista
string: item_string.o list.o main.o utils.o
	gcc item_string.o list.o main.o utils.o -o lista
point: item_point.o list.o main.o utils.o point.o
	gcc item_point.o list.o main.o utils.o point.o -o lista -lm
point.o:
	gcc -c point.c
item_int.o:
	gcc -c item_int.c
item_string.o:
	gcc -c item_string.c
item_point.o:
	gcc -c item_point.c
utils.o:
	gcc -c utils.c
list.o:
	gcc -c list.c
main.o:
	gcc -c main.c
clean:
	rm -f lista item_int.o list.o main.o utils.o item_string.o item_point.o point.o
