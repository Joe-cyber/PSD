#include"btree.h"
#include<stdio.h>
int main(void)
{
	Btree o=buildBtree(NULL,NULL,input_item());
	Btree q=buildBtree(NULL,NULL,input_item());
	Btree s=buildBtree(NULL,NULL,input_item());
	Btree p=buildBtree(NULL,NULL,input_item());
	Btree l=buildBtree(o,q,input_item());
	Btree d=buildBtree(NULL,NULL,input_item());
	Btree c=buildBtree(p,s,input_item());
	Btree a=buildBtree(d,l,input_item());
	Btree h=buildBtree(a,c,input_item());
	printf("Visita preordine: ");
	printPreordine(h);
	printf("\n");
	printf("Visita preordine stack: ");
	printPreordine_stack(h);
	printf("\n");
	printf("Visita postordine: ");
	printPostordine(h);
	printf("\n");
	printf("Visita postordine stack: ");
	printPostordine_stack(h);
	printf("\n");
	printf("Visita simmetrica: ");
	printSimmetrica(h);
	printf("\n");
	printf("Visita simmetrica stack: ");
	printSimmetrica_stack(h);
	printf("\n");
	return 0;
}
