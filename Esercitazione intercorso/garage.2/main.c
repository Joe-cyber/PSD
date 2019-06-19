#include<stdio.h>
#include<stdlib.h>
#include"array.h"
Item* posizioni_pari(Item[],int,int*);
Item* input_array_str(int *,char*);
int main(void)
{
	/*int l=6,l2;
	Item array[l],*output;
	printf("Inserisci l'array\n");
	inserimento(array,l);
	printf("Array input: \n");
	stampa(array,l);
	output=posizioni_pari(array,l,&l2);
	printf("Array input: \n");
	stampa(output,l2);*/
	char s[100];
	Item *p;
	int l;
	scanf("%[^\n]",s);
	p=input_array_str(&l,s);
	stampa(p,l);
	return 0;
}

Item* posizioni_pari(Item a[],int l1,int* l2)
{
	Item *b=malloc(sizeof(Item));
	*l2=0;
	for(int i=1;i<l1;i+=2)
	{
		if(cmp_item(a[i],a[i-1])>0)
		{
			b=realloc(b,sizeof(Item)*(*l2+1));
			b[*l2]=a[i];
			(*l2)++;
		}
	}
	return b;
}

Item* input_array_str(int *l,char* str)
{
	Item *a=malloc(sizeof(Item));
	int i=0,n;
	*l=0;
	char *c;
	while((n=sscanf(str,"%[^\0]",c)))
	{
		scanf("%*c");
		a[i]=c;
		a=realloc(a,sizeof(Item)*(*l+1));
		str+=n;
		i++;
		(*l)++;
	}	
	return a;
}
