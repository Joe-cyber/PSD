#include"queue.h"
#include"item.h"
#include<stdio.h>
int main(void)
{
	Queue c=new_queue();
	int scelta;
	do{
		printf("1.Inserisci\n2.Rimuovi\n3.Stampa coda\n4.Reverse\n5.Cancella posizioni dispari\n0.Esci\nScelta: ");
		scanf("%d%*c",&scelta);
		switch(scelta)
		{
			case 0:
			break;
			case 1:
				en_queue(c,input_item());
			break;
			case 2:
			{
				output_item(de_queue(c));
				printf("\n");
			}
			break;
			case 3:
			{
				while(!isempty_queue(c))
					output_item(de_queue(c));
				printf("\n");
			}
			break;
			case 4:
				reverse_queue(c);
			break;
			case 5: 
				delete_odd(c);
			break;
			default:
				fprintf(stderr,"Errore, input non valido\n");
			break;
		}
	}while(scelta);
	return 0;
}
