#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"array.h"
int main(void)
{
	FILE *input,*oracle,*output;
	char s1[50],s2[50];
	int v[20],l;
	if((input=fopen("input2.txt","r"))==NULL || (oracle=fopen("oracle2.txt","r"))==NULL || (output=fopen("output2.txt","w"))==NULL)
	{
		fprintf(stderr,"Impossibile aprire i file\n");
		exit(EXIT_FAILURE);
	}
	while(fgets(s1,50,input)&&fgets(s2,50,oracle))
	{
		l=input_array_str(v,s1);
		if(somma_array(v,l)==atoi(s2))
			fprintf(output,"DONE\n");
		else
			fprintf(output,"FAIL\n");
	}
	fclose(input);
	fclose(output);
	fclose(oracle);
	return 0;
}
