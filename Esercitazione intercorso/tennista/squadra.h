#include"list.h"
#include"tennista.h"
typedef struct squadra *Squadra;
Squadra new_squadra(char*,char*,int);
void insert_tennista(Squadra, Item);
void print_squadra(Squadra);
void remove_tennista(Squadra,int);
List search_categoria(Squadra,int);
void swap_tennisti(Squadra,int);

