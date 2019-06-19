#include"libretto.h"
#include"list.h"
#include<stdlib.h>
#include<stdio.h>
struct libretto
{
	Studente s;
	List esami;
};

Libretto new_libretto(Studente s)
{
	Libretto l=malloc(sizeof(struct libretto));
	l->s=s;
	l->esami=new_list();
	return l;
}

Libretto inserisci_esame(Libretto l,Item item)
{
	l->esami=add_head(l->esami,item);
	return l;
}

Item search_esame(Libretto l,Item item)
{
	int pos;
	return search_item(l->esami,item,&pos);
}

void print_libretto(Libretto l)
{	
	printf("Studente: %s\t  %sMatricola: %s",get_nome(l->s),get_cognome(l->s),get_matricola(l->s));
	print_list(l->esami);
}
