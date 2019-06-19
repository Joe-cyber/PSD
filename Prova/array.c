#include "utils.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool confronta_array(int a[],int b[],int l1,int l2)
{
	if(l1!=l2)
		return false;
	for(int i=0;i<l1;i++)
		if(a[i]!=b[i])
			return false;
	return true;
}

int input_array_str(int *arr,char* line)
{
	int i=0,n=0;
	while(sscanf(line,"%d%n",&arr[i],&n)==1)
	{
		line+=n;
		i++;
	}
	return i;
}

int* input_array_str_dinamico(int *n,char* line)
{
	int *p=NULL;
	*n=conta_spazi(line)+1;
	if((*n)>1)
	{
		p=malloc((*n)*sizeof(int));
		input_array_str(p,line);
	}
	return p;
}

int minimo(int v[],int l)
{
	int min=0;
	for(int i=1;i<l;i++)
		if(v[i]<v[min])
			min=i;
	return min;
}

void selection_sort(int v[],int l)
{
	for(int i=0;i<l;i++)
		swap(&v[i],&v[minimo((v+i),(l-i))+i]);
}

void inserimento(int v[],int l)
{
	for(int i=0;i<l;i++)
	{
		printf("Inserisci il %d° numero: ",i+1);
		scanf("%d",&v[i]);
	}
}

void stampa(int v[],int l)
{
	for(int i=0;i<l;i++)
		printf("%d  ",v[i]);
	printf("\n");
}

void inserisci_elemento_ordinato(int v[],int *l,int n)
{
	int i;
	for(i=*l; i>0 && n<v[i-1]; i--)
		v[i]=v[i-1];
	v[i]=n;
	(*l)++;
}

void insertion_sort(int v[],int l)
{
	int i=1;
	while(i<l)
		inserisci_elemento_ordinato(v,&i,v[i]);
}

void bubble_sort(int v[],int l)
{
	bool ordinato=false;
	while(!ordinato)
	{
		ordinato=true;
		for(int i=0;i<l-1;i++)
			if(v[i]>v[i+1])
			{
				swap(&v[i],&v[i+1]);
				ordinato=false;
			}
	}
}

int somma_array(int v[],int l)
{
	if(l==0)
		return 0;
	if(l==1)
		return v[0];
	return v[0]+somma_array(v+1,l-1);
}

void elimina_elemento(int v[],int *l, int pos)
{
	if(pos>=0 && pos<*l)
		for(int i=pos;i<*l-1;i++)
			v[i]=v[i+1];
	(*l)--;
}

//randomizzazione
	
int ricerca_ingenua(int v[],int l, int n)
{
	int i=0;
	while(i<l && v[i]!=n)
		i++;
	return (v[i]==n ? i : -1);
}

int ricerca_array_ordinato(int v[], int l,int n)
{
	int i=0;
	while(i<l && v[i]<n)
		i++;
	return(v[i]==n ? i : -1);
}

int ricerca_binaria(int v[],int l,int n)
{
	int inizio=0, fine=l,centro=(inizio+fine)/2;
	while((inizio<fine) && (v[centro]!=n))
	{
		if(v[centro]>n)
			fine=centro-1;
		else if(v[centro]<n)
			inizio=centro+1;
		centro=(inizio+fine)/2;
	}
	return(v[centro]==n ? centro : -1);
}

int prodotto_scalare(int v1[],int v2[],int l1,int l2)
{
	int somma=0;
	if(l1==l2)
		for(int i=0;i<l1;i++)
			somma+=v1[i]*v2[i];
	return somma;
}

void somma_vettori(int v1[],int v2[],int v3[],int l)
{
	for(int i=0;i<l;i++)
		v3[i]=v1[i]+v2[i];
}




