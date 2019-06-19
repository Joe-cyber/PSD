#include"squadra.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct squadra
{
	char* nome;
	char* indirizzo_sede;
	int campi_disponibili;
	List tennisti;
};

Squadra new_squadra(char* nome,char* indirizzo, int posti)
{
	Squadra s=malloc(sizeof(struct squadra));
	s->nome=strdup(nome);
	s->indirizzo_sede=strdup(indirizzo);
	s->campi_disponibili=posti;
	if(s->tennisti!=NULL)
		s->tennisti=newList();
	return s;
}

void insert_tennista(Squadra s, Item item)
{
	if(s->campi_disponibili>sizeList(s->tennisti))
		addHead(s->tennisti,item);
	else
		fprintf(stderr,"Numero posti in squadra esauriti\n");
}

void print_squadra(Squadra s)
{
	printf("Nome squadra: %s\nIndirizzo: %s\nPosti disponibili: %d\n",s->nome,s->indirizzo_sede,s->campi_disponibili);
	printList(s->tennisti);
}

void remove_tennista(Squadra s,int pos)
{
	if(pos>=0 && pos<sizeList(s->tennisti))	
		removePos(s->tennisti,pos);
	else
		fprintf(stderr,"Posizione non valida\n");
}

List search_categoria(Squadra s,int c)
{
	if(c<1 || c>4)	
	{
		fprintf(stderr,"Categoria non valida\n");
		return NULL;
	}
	if(!isEmpty(s->tennisti))
	{
		List l1=cloneList(s->tennisti),l2=newList();
		Item item=new_tennista("","",c),temp;
		while((temp=removeItem(l1,item))!=NULL)
			addHead(l2,temp);
		if(sizeList(l2)>0)
			return l2;
	}
	return NULL;
}


void swap_tennisti(Squadra s,int pos)
{
	if(pos>=0 && pos<sizeList(s->tennisti)-1)
		addItem(s->tennisti,removePos(s->tennisti,pos),pos+1);
	else
		fprintf(stderr,"Posizione non valida\n");
}


































