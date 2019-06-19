#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"array.h"
#include"utils.h"
int main(void)
{
	int l=5;
	Item v[l];
	inserimento(v,l);
	mergeSort(v,l);
	stampa(v,l);
	return 0;
}
