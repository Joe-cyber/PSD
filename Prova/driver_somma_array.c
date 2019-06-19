#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"array.h"
int main(void)
{
	FILE *input,*oracle,*output;
	char s1[50],s2[50];
	int v1[20],v2[20],v3[20],v4[20],l1,l2,l3,risultato;
	if((input=fopen("input5.txt","r"))==NULL || (oracle=fopen("oracle5.txt","r"))==NULL || (output=fopen("output5.txt","w"))==NULL)
	{
		fprintf(stderr,"Impossibile aprire i file\n");
		exit(EXIT_FAILURE);
	}
	while(fgets(s1,50,input)&&fgets(s2,50,oracle))
	{	
		l1=input_array_str(v1,s1);
		fgets(s1,50,input);
		l2=input_array_str(v2,s1);
		l3=input_array_str(v4,s2);
		somma_vettori(v1,v2,v3,l1);
		if(confronta_array(v3,v4,l1,l3))
			fprintf(output,"DONE\n");
		else
			fprintf(output,"FAIL\n");
	}
	fclose(input);
	fclose(output);
	fclose(oracle);
	return 0;
}
