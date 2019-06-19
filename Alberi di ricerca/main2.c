#include"BST.h"
#include"array.h"
#include"item.h"
#include<stdio.h>
int main(int argc,char* argv[])
{
	Item v[argc-1];
	if(argc>1)
	{
		for(int i=1;i<argc;i++)
			v[i-1]=argv[i];
		ordina_array(v,argc-1);
		printf("Array ordinato: ");
		stampa(v,argc-1);
		printf("\n");
	}
	return 0;
}
