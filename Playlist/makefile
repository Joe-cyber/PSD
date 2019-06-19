playlist: main.o song.o item_song.o list.o utils.o playlist.o
	gcc main.o song.o item_song.o list.o utils.o playlist.o -o playlist
playlist.o:
	gcc -c playlist.c
list.o:
	gcc -c list.c
utils.o:
	gcc -c utils.c
item_song.o:
	gcc -c item_song.c
main.o:
	gcc -c main.c
song.o:
	gcc -c song.c
clean:
	rm -f main.o song.o item_song.o list.o utils.o playlist.o playlist
	
