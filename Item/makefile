item_int: utils.o main.o item_int.o array.o
	gcc utils.o main.o item_int.o array.o -o interi
item_string: utils.o main.o item_string.o array.o
	gcc utils.o main.o item_string.o array.o -o stringhe
item_point: utils.o main.o item_point.o array.o point.o
	gcc utils.o main.o item_point.o array.o point.o -o point -lm
item_point.o:
	gcc -c item_point.c
item_string.o:
	gcc -c item_string.c
point.o:
	gcc -c point.c
array.o:
	gcc -c array.c
item_int.o:
	gcc -c item_int.c
utils.o:
	gcc -c utils.c
main.o:
	gcc -c main.c
clean:
	rm -f utils.o main.o interi item_int.o array.o array.o stringhe item_string.o point item_point.o point.o 
