esercizio04-03.exe : esercizio04-03.o utils.o array.o
	gcc esercizio04-03.o utils.o array.o -o esercizio.exe
esercizio18-03.exe: esercizio18-03.o utils.o array.o
	gcc esercizio18-03.o utils.o array.o -o esercizio2.exe
driver_ordinamento.exe: utils.o array.o driver_ordinamento.o
	gcc utils.o array.o driver_ordinamento.o -o driver_ordinamento.exe
driver_somma.exe: utils.o array.o driver_somma.o
	gcc utils.o array.o driver_somma.o -o driver_somma.exe
driver_cancellazione.exe: utils.o array.o driver_cancellazione.o
	gcc utils.o array.o driver_cancellazione.o -o driver_cancellazione.exe
driver_prodotto_scalare.exe: utils.o array.o driver_prodotto_scalare.o
	gcc utils.o array.o driver_prodotto_scalare.o -o driver_prodotto_scalare.exe
driver_somma_array.exe: utils.o array.o driver_somma_array.o
	gcc utils.o array.o driver_somma_array.o -o driver_somma_array.exe
esercizio18-03.o:
	gcc -c esercizio18-03.c
driver_somma_array.o:
	gcc -c driver_somma_array.c
driver_prodotto_scalare.o:
	gcc -c driver_prodotto_scalare.c
driver_cancellazione.o:
	gcc -c driver_cancellazione.c
driver_somma.o:
	gcc -c driver_somma.c
driver_ordinamento.o:
	gcc -c driver_ordinamento.c
esercizio04-03.o :
	gcc -c esercizio04-03.c
utils.o :
	gcc -c utils.c
array.o:
	gcc -c array.c
clean :
	rm -f esercizio04-03.o utils.o array.o esercizio.exe driver_ordinamento.exe driver_ordinamento.o driver_somma.o driver_somma.exe output.txt output2.txt output3.txt output4.txt output5.txt driver_cancellazione.o driver_cancellazione.exe driver_prodotto_scalare.exe driver_prodotto_scalare.o driver_somma_array.exe driver_somma_array.o esercizio18-03.o esercizio2.exe

