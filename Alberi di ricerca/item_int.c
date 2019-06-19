#include"item.h"
#include<stdlib.h>
#include<stdio.h>

Item input_item()
{
	int*p=malloc(sizeof(int));
	printf("Inserisci un numero: ");
	scanf("%d",p);
	return p;
}

void output_item(Item item)
{
	int *p=item;
	printf("%d",*p);
}

int cmp_item(Item item1,Item item2)
{
	int *p=item1,*q=item2;
	if(p!=NULL && q!=NULL)
		return *p-*q;
	else if(p!=NULL)
		return 1;
	return -1;
}
