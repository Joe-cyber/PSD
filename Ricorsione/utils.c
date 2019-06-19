#include"utils.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void swap(Item* a,Item* b)
{
	Item temp=*b;
	*b=*a;
	*a=temp;
}

int fattoriale(int n)
{
	if(n==0) return 1;
	else if(n>0) return (n*fattoriale(n-1));
	else return 0;
}

int fibonacci(int pos)
{
	if(pos==0) return 0;
	else if(pos==1) return 1;
	else return fibonacci(pos-1)+fibonacci(pos-2);
}

int euclide(int a,int b)
{
	if(b==0) return a;
	if(a%b==0) return b;
	else return euclide(b,a%b);
}

int count_space(char* s)
{
	int cont=0;
	for(;*s;s++)
		if(*s==' ') cont++;
	return cont;
}

char* delete_space(char* s,int* l)
{
	char* s2=malloc(sizeof(char)*(*l=*l-count_space(s)));
	for(int i=0;*s;s++)
		if(*s!=' ') 
		{
			s2[i]=*s;
			i++;
		}
	s2[*l]='\0';
	return s2;
}

int palindrome(char* s,int l)
{
	if(count_space(s)>0) s=delete_space(s,&l);
	if(l==0 || l==1) return 1;
	else return ((s[0]==s[l-1])*palindrome(s+1,l-2));
}

void print_reverse(char *s)
{
	if(*s!='\0')
	{
		print_reverse(s+1);
		printf("%c",*s);
	}
}







