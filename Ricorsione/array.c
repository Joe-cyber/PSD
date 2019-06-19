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
	if(l==1)
		output_item(v[0]);
	else if(l>1)
	{
		output_item(v[0]);
		stampa(v+1,l-1);
	}
}

int pos_minimo(Item v[],int l)
{
	int pos=0;
	for(int i=1;i<l;i++)
		if(cmp_item(v[i],v[pos])<0)
			pos=i;
	return pos;
}

/*	
	t(l)=a1t(l-1)+bg(l)+a2t(l-2)bg(l-1).....ant(l-i) per l>i
	t(l-i)+bn
	lineare
*/

void selection_sort_ricorsive(Item v[],int l)
{
	if(l>1)
	{
		swap(&v[0],&v[pos_minimo(v,l)]);
		selection_sort_ricorsive(v+1,l-1);
	}
}

Item ricerca_binaria_ricorsive(Item v[],int l,Item item)
{
	if(cmp_item(item,v[0])<0||cmp_item(item,v[l-1])>0||l==0)
		return NULL;
	if(cmp_item(v[l/2],item)==0)
		return v[l/2];
	if(cmp_item(v[l/2],item)>0)
		return ricerca_binaria_ricorsive(v,l/2,item);
	if(cmp_item(v[l/2],item)<0)
		return ricerca_binaria_ricorsive(v+l/2,l/2+1,item);
}

void merge(Item v1[],int n1,Item v2[],int n2,Item v3[])
{
	int i=0,j=0,k=0,l=n1+n2;
	Item v[l];
	for(;i<n1 && j<n2;k++)
	{
		if(cmp_item(v1[i],v2[j])<0)
			v[k]=v1[i++];
		else
			v[k]=v2[j++];
	}
	for(;i<n1;i++,k++)
		v[k]=v1[i];
	for(;j<n2;j++,k++)
		v[k]=v2[j];
	for(i=0;i<l;i++)
		v3[i]=v[i];
}

void mergeSort(Item v[], int l)
{
	if(l>1)
	{
		mergeSort(v,l/2);
		mergeSort(v+l/2,l-l/2);
		merge(v,l/2,v+l/2,l-l/2,v);
	}
}








































