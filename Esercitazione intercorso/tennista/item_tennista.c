#include"item.h"
#include"tennista.h"
#include<stdio.h>

Item inputItem()
{
	char nome[50],data[50];
	int cat;
	printf("Inserisci il nome e il cognome: ");
	scanf("%[^\n]",nome);
	scanf("%*c");
	printf("Inserisci la data di nascita: ");
	scanf("%[^\n]",data);
	scanf("%*c");
	printf("Inserisci la categoria: ");
	scanf("%d",&cat);
	scanf("%*c");
	if(cat>=1 && cat<=4)
		return new_tennista(nome,data,cat);	
	fprintf(stderr,"Categoria non valida\n");
	return NULL;
}

void outputItem(Item item)
{
	Tennista t=item;
	printf("Nome: %s\nData di nascita: %s\t Categoria: %d\n",get_nome(t),get_data(t),get_categoria(t));
}

int cmpItem(Item item1,Item item2)
{
	Tennista t1=item1,t2=item2;
	return get_categoria(t1)-get_categoria(t2);
}
