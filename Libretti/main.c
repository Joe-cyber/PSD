#include<stdio.h>
#include"libretto.h"
#include"studente.h"
#include"item.h"
#include"esame.h"
int main(void)
{
	Studente s;
	Libretto l;
	Item exam,search;
	char n[50],c[50],m[50],course[50];
	printf("Inserisci il nome: ");
	fgets(n,50,stdin);
	printf("Inserisci il cognome: ");
	fgets(c,50,stdin);
	printf("Inserisci la matricola: ");
	fgets(m,50,stdin);
	s=new_studente(n,c,m);
	l=new_libretto(s);
	for(int i=0;i<3;i++)
	{
		exam=input_item();
		l=inserisci_esame(l,exam);
	}
	printf("Inserisci il nome del corso da ricercare: ");
	fgets(course,50,stdin);
	search=new_esame(course,0,"");
	printf("\n\n");
	output_item(search_esame(l,search));
	printf("\n\n");
	print_libretto(l);
	return 0;
}
