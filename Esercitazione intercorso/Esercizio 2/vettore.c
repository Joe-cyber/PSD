#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "item.h"
#define N 100

int minimo(Item *a, int n) {   
	int min = 0, i;
	
	for(i=1; i<n; i++)
		if (cmpItem(a[i],a[min])<0) 
			min=i;
		
    return min;	
}

void selection_sort(Item a[], int n) {
	int i = 0,
		min;
	
	for(; i < n - 1; i++) {
		min = minimo(a + i, n - i);
		
		swap(&a[i], &a[min + i]);
	}
}

void input_array(Item a[], int n) {
	int i=0;
	
	for (; i<n; i++)
		a[i]=inputItem();
}


void output_array(Item *a, int n) {
	int i;
	
	for(i = 0; i < n; i++)
		outputItem(a[i]);
	
	printf("\n");
}

//codice delle funzioni