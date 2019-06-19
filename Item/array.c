#include "utils.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void inserimento(Item v[],int l)
{
	for(int i=0;i<l;i++)
		v[i]=input_item();
}

void stampa(Item v[],int l)
{
	if(l==0)
		return;
	if(l==1)
		output_item(v[0]);
	else
	{
		output_item(v[0]);
		stampa(v+1,l-1);
	}
}


void bubble_sort(Item v[],int l)
{
	bool ordinato=false;
	while(!ordinato)
	{
		ordinato=true;
		for(int i=0;i<l-1;i++)
			if(cmp_item(v[i],v[i+1])>0)
			{
				swap(&v[i],&v[i+1]);
				ordinato=false;
			}
	}
}
