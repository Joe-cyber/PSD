#include<stdio.h>
#include"array.h"
int main(void)
{
	int *p,l;
	char line[]="1 2 3 4 5";
	p=input_array_str_dinamico(&l,line);
	if(p)
		stampa(p,l);
	return 0;
}
