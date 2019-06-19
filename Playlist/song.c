#include"song.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
struct song{
	char *title;
	char *artist;
	int durate;
};

char* get_title(Song s)
{
	return s->title;
}

char* get_artist(Song s)
{
	return s->artist;
}

int get_durate(Song s)
{
	return s->durate;
}

Song create_song(char* t, char* a, int d)
{
	Song s=malloc(sizeof(struct song));
	s->title=strdup(t);
	s->artist=strdup(a);
	s->durate=d;
	return s;
}
