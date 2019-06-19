#include"item.h"
#include"esame.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
Item input_item()
{
	char n[50],d[50];
	int v;	
	do{	
		printf("Inserisci il nome del corso: ");
		fgets(n,50,stdin);
		printf("Inserisci la data di conseguimento dell'esame: ");
		fgets(d,50,stdin);
		printf("Inserisci il voto(31=30L): ");
		scanf("%d",&v);
		if(v>31 || v<18)
			printf("Voto non valido\n");
	}while(v>31 || v<18);
	scanf("%*c");
	return new_esame(n,v,d);
}
void output_item(Item item)
{
	Esame e=item;
	printf("Esame: %sData: %sVoto: %d\n", get_course(e),get_date(e),get_vote(e));
}
int cmp_item(Item item1,Item item2)
{
	Esame e1=item1, e2=item2;
	return strcmp(get_course(e1),get_course(e2));
}
