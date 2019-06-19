typedef struct song *Song;
char* get_title(Song);
char* get_artist(Song);
int get_durate(Song);
Song create_song(char*, char*, int);
