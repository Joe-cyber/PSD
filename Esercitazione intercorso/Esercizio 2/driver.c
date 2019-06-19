#include<stdio.h>
#include<stdlib.h>
#include "vettore.h"

#define N 50

int main(void)
{
	FILE *fp_input, *fp_oracolo, *fp_output;
	
	if((fp_input=fopen("input.txt", "r"))==NULL){
		fprintf(stderr, "Errore apertura file input.txt\n");
		exit(EXIT_FAILURE);
	}
	
	if((fp_oracolo=fopen("oracolo.txt", "r"))==NULL){
		fprintf(stderr, "Errore apertura file oracolo.txt\n");
		exit(EXIT_FAILURE);
	}
	
	if((fp_output=fopen("output.txt", "w"))==NULL){
		printf("Errore apertura file output.txt\n");
		exit(EXIT_FAILURE);
	}
	
	//Codice di testing
	
	fclose(fp_input);
	fclose(fp_output);
	fclose(fp_oracolo);
	
	return 0;
		
}