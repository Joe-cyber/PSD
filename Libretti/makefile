libretto: main.o esame.o studente.o item_esame.o list.o utils.o libretto.o utils.o
	gcc esame.o main.o studente.o item_esame.o list.o libretto.o utils.o -o libretto
libretto.o:
	gcc -c libretto.c
utils.o:
	gcc -c utils.c
list.o:
	gcc -c list.c
main.o:
	gcc -c main.c
esame.o: 
	gcc -c esame.c
studente.o:
	gcc -c studente.c
item_esame.o:
	gcc -c item_esame.c
clean:
	rm -f main.o esame.o studente.o item_esame.o list.o utils.o libretto.o libretto
