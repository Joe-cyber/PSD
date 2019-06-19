#include"item.h"
#include"student.h"
#include<stdio.h>
#include<string.h>
Item inputItem()
{
	char n[100],d[15],m[10];
	printf("Nome e cognome: ");
	scanf("%[^\n]%*c",n);
	printf("Data di nascita: ");
	scanf("%[^\n]%*c",d);
	printf("Matricola: ");
	scanf("%[^\n]%*c",m);
	return new_student(n,d,m);
}

void outputItem(Item item)
{
	Student s=item;
	printf("Nome: %s\nData di nascita: %s\tMatricola: %s\n",get_nome(s),get_data(s),get_matricola(s));
}

int cmpItem(Item item1, Item item2)
{
	Student s1=item1,s2=item2;
	return strcmp(get_data(s2)+6,get_data(s1)+6);
}
