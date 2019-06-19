#include"item.h"
#include"song.h"
#include<stdio.h>
#include<string.h>

Item input_item()
{
	char title[50], artist[50];
	int durate;
	printf("Inserisci il titolo: ");
	fgets(title,50,stdin);
	printf("Inserisci l'artista: ");
	fgets(artist,50,stdin);
	printf("Inserisci la durata: ");
	scanf("%d",&durate);
	scanf("%*c");
	return create_song(title,artist,durate);
}

void output_item(Item s)
{
	printf("%s%s%d\n",get_title(s),get_artist(s),get_durate(s));
}

int cmp_item(Item item1,Item item2)
{
	Song s1=item1,s2=item2;
	return strcmp(get_title(s1),get_title(s2));
}
