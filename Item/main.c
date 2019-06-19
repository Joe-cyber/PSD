#include<stdio.h>
#include<stdlib.h>
#include"array.h"
int main(void)
{
	Item a[5];
	inserimento(a,5);
	bubble_sort(a,5);
	stampa(a,5);
	return 0;
}
