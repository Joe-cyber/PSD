#include"playlist.h"
#include"item.h"
#include"song.h"
#include<stdio.h>

int main(void)
{
	Playlist p;
	char name[50], title[50];
	Item s;
	printf("Inserisci il nome della playlist: ");
	fgets(name,50,stdin);
	p=new_playlist(name);
	for(int i=0;i<3;i++)
	{
		s=input_item();
		p=insert_song(p,s);
	}
	p=sort_playlist(p);
	printf("Inserisci il titolo della canzone da eliminare: ");
	fgets(title,50,stdin);
	s=create_song(title,"",0);
	p=remove_song(p,s);
	print_playlist(p);
}
