int :	list.o main.o item-int.o
	gcc list.o main.o item-int.o -o list.exe
	
str :	list.o main.o item-string.o
	gcc list.o main.o item-string.o -o list.exe
		
list.o :
	gcc -c list.c
	
main.o :
	gcc -c main.c

item-int.o :
	gcc -c item-int.c
	
item-string.o :
	gcc -c item-string.c 
	
clean: 
	rm -f *.o *.exe