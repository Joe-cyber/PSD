typedef struct esame *Esame;
Esame new_esame(char*,int,char*);
char* get_course(Esame);
int get_vote(Esame);
char* get_date(Esame);

