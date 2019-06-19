#include"playlist.h"
#include"list.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct playlist
{
	char *title;
	List music;
};

Playlist new_playlist(char* name)
{
	Playlist p=malloc(sizeof(struct playlist));
	p->title=strdup(name);
	p->music=new_list();
	return p;
}

void print_playlist(Playlist p)
{
	printf("Playlist name: %s",p->title);
	print_list(p->music);
}

Playlist insert_song(Playlist p,Item item)
{
	p->music=add_head(p->music,item);
	return p;
}

Playlist sort_playlist(Playlist p)
{
	p->music=sort_list(p->music);
	return p;
}

Playlist remove_song(Playlist p,Item item)
{
	remove_item(p->music,item);
	return p;
}
