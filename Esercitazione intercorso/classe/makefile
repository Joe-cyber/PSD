classe: student.o main.o item_student.o list.o class.o utils.o
	gcc student.o main.o item_student.o list.o class.o utils.o -o classe
item_student.o:
	gcc -c item_student.c
student.o:
	gcc -c student.c
main.o:
	gcc -c main.c
list.o:
	gcc -c list.c
class.o:	
	gcc -c class.c
utils.o:
	gcc -c utils.c
clean:
	rm -f main.o student.o item_student.o classe list.o class.o utils.o
