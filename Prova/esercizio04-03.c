#include <stdio.h>
#include "array.h"
int main(void)
{
	int lm=20,v[lm],l=5,scelta1,n,scelta2;
	do{
		printf("1. Inserisci array.\n2. Inserisci elemento.\n3. Cancella elemento.\n4. Ordina array.\n5. Stampa array.\n6. Ricerca elemento.\n7. Somma array.\n0. Esci.\nScelta: ");
		scanf("%d",&scelta1);
		switch(scelta1)
		{
			case 0:
			break;
			case 1:
				inserimento(v,l);
			break;
			case 2:
			{
				printf("Inserisci un numero: ");
				scanf("%d",&n);
				inserisci_elemento_ordinato(v,&l,n);
			}
			break;
			case 3:
			{
				printf("Inserisci la posizione dell'elemento da eliminare: ");
				scanf("%d",&n);
				elimina_elemento(v,&l,n);
			}
			break;
			case 4:
			{
				printf("\t1.Insertion sort\n\t2.Bubble sort\n\t3.Selection sort\n\tScegli il tipo di ordinamento: ");
				scanf("%d",&scelta2);
				switch(scelta2)
				{
					case 1:
						insertion_sort(v,l);
					break;
					case 2:
						bubble_sort(v,l);
					break;
					case 3:
						selection_sort(v,l);
					break;
					default:
						printf("Valore inserito non valido\n");
					break;
				}
			}
			break;
			case 5: 
				stampa(v,l);
			break;
			case 6:
			{
				printf("Inserisci un numero: ");
				scanf("%d",&n);
				printf("\t1.Ricerca binaria\n\t2.Ricerca ingenua\n\t3.Ricerca ingenua in array ordinato\n\tScegli l'algoritmo di ordinamento: ");
				scanf("%d",&scelta2);
				switch(scelta2)
				{
					case 1:
						printf("L'elemento e' presente in posizione: %d\n",ricerca_binaria(v,l,n));
					break;
					case 2:
						printf("L'elemento e' presente in posizione: %d\n",ricerca_ingenua(v,l,n));	
					break;
					case 3:
						printf("L'elemento e' presente in posizione: %d\n",ricerca_array_ordinato(v,l,n));
					break;
					default:
						printf("Valore inserito non valido");
					break;
				}
			}
			break;	
			case 7:
				printf("La somma di tutti gli elementi dell'array e' %d\n",somma_array(v,l));
			break;
			default:
				printf("Inserire un valore valido\n");
			break;
		}
	}while(scelta1);
	return 0;
}
