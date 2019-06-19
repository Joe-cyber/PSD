#include"item.h"
typedef struct playlist *Playlist;
Playlist new_playlist(char*);
Playlist insert_song(Playlist,Item);
Playlist remove_song(Playlist,Item);
Playlist sort_playlist(Playlist);
void print_playlist(Playlist);
