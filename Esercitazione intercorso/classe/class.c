#include"class.h"
#include"student.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct class
{
	char* istituto;
	char* sezione;
	int max_pos;
	List studenti;
};

Class new_classe(char* istituto,char* sezione,int posti)
{
	Class c=malloc(sizeof(struct class));
	c->istituto=strdup(istituto);
	c->sezione=strdup(sezione);
	c->max_pos=posti;
	c->studenti=newList();
	return c;
}

void insert_alunno(Class c,Item s)
{
	if(c->max_pos>sizeList(c->studenti))
		addHead(c->studenti,s);
	else
		fprintf(stderr,"Posti esauriti\n");
}

void swap_alunni(Class c,int pos)
{
	if(pos>=0 && pos<sizeList(c->studenti)-1)
		addItem(c->studenti,removePos(c->studenti,pos),pos+1);
	else
		fprintf(stderr,"Posizione non valida\n");
}

void print_class(Class c)
{
	printf("Istituto: %s\nClasse: %s\tPosti: %d\n",c->istituto,c->sezione,c->max_pos);
	printList(c->studenti);
}

List get_anno(Class c,char* anno)
{
	if(!isEmpty(c->studenti))
	{
		char appoggio[15]="00/00/";
		strcat(appoggio,anno);
		Item item=new_student("",appoggio,""),app;
		List temp,l=newList();
		temp=cloneList(c->studenti);
		while((app=removeItem(temp,item))!=NULL)
			addHead(l,app);
		if(!isEmpty(l))
			return l;	
	}
	return NULL;
}
