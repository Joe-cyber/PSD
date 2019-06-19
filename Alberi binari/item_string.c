#include"item.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Item input_item()
{
	char*s=malloc(sizeof(char)*50);
	printf("Inserisci un carattere: ");
	scanf("%s",s);
	return s;
}

void output_item(Item item)
{
	char*s=item;
	printf("%s",s);
}

int cmp_item(Item item1,Item item2)
{
	char*s1=item1, *s2=item2;
	return strcmp(s1,s2);
}
