#include"studente.h"
#include"item.h"
typedef struct libretto *Libretto;
Libretto new_libretto(Studente);
Libretto inserisci_esame(Libretto,Item);
Item search_esame(Libretto,Item);
void print_libretto(Libretto);
