#include"BST.h"
#include"array.h"
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	int scelta,i,len;
	BST b=newBST();
	Item item,*v;
	List l;
	Queue c;
	do{
		printf("1.Inserisci\n2.Preordine\n3.Postordine\n4.Simmetrica\n5.Albero bilanciato\n6.Stampa radice\n7.Stampa altezza albero\n8.Vuoto\n9.Stampa minimo\n10.Stampa massimo\n11.Cerca item\n12.Elimina item\n13.Visita livelli\n14.Costruisci lista\n15.Stampa livelli pari\n16.Compara alberi\n17.Costruisci albero da array\n18.Stampa foglie per livello\n0.Esci\nScelta:");
		scanf("%d%*c",&scelta);
		switch(scelta)
		{
			case 0:
			break;
			case 1:
				insertBST(&b,input_item());
			break;
			case 2:
			{
				printf("Stampa in preordine: ");
				printPreordine(b);
				printf("\n");
			}
			break;
			case 3:
			{
				printf("Stampa in postordine: ");
				printPostordine(b);
				printf("\n");
			}
			break;
			case 4:
			{
				printf("Stampa simmetrica: ");
				printSimmetrica(b);
				printf("\n");
			}
			break;
			case 5:
			{
				if(albero_kbilanciato(b))
					printf("L'albero e' bilanciato\n");
				else
					printf("L'albero non e' bilanciato\n");
			}
			break;
			case 6:
			{

				if((item=getBtreeroot(b))!=NULL)
				{
					printf("Radice: ");
					output_item(item);
					printf("\n");
				}
				else
					printf("Albero vuoto\n");
			}
			break;
			case 7:
				printf("L'altezza dell'albero e' %d\n",altezza_albero(b));
			break;
			case 8:
			{
				if(isempty_bst(b))
					printf("L'albero e' vuoto\n");
				else
					printf("L'albero non e' vuoto\n");
			}
			break;
			case 9:
			{	
				if((item=minBST(b))!=NULL)
				{
					printf("Il minimo e' ");
					output_item(item);	
					printf("\n");
				}
				else			
					printf("Albero vuoto\n");
			}
			break;
			case 10:
			{
				if((item=maxBST(b))!=NULL)	
				{
					printf("Il massimo e' ");
					output_item(item);
					printf("\n");
				}	
				else			
					printf("Albero vuoto\n");
			}
			break;
			case 11:
			{
				if((item=search(b,input_item()))!=NULL)
				{
					output_item(item);
					printf("\n");
				}
				else
					printf("L'item non e' presente\n");
			}
			break;
			case 12:
			{
				if((item=deleteBST(&b,input_item()))!=NULL)
				{
					printf("L'elemento eliminato e' ");
					output_item(item);
					printf("\n");
				}
				else 
					printf("L'elemento non e' presente all'interno dell'albero\n");
			}
			break;	
			case 13:
			{
				visita_livelli(b);
				printf("\n");
			}
			break;
			case 14:
			{
				l=new_list();
				create_list(b,l);
				if(size_list(l)>0)
				{
					printf("Nodi che hanno almeno un figlio: ");	
					print_list(l);
					printf("\n");
				}
				else 
					printf("La lista e' vuota\n");
			}
			break;
			case 15:
			{
				c=livelli_pari(b);
				if(!isempty_queue(c))
				{
					printf("Etichette di livello pari: ");
					while(!isempty_queue(c))
					{
						output_item(de_queue(c));
						printf("  ");
					}
				}			
				else
					printf("Lista vuota");
				printf("\n");	
			}
			break;
			case 16:
			{
				BST b2=newBST();
				printf("Quanti elementi vuoi inserire nel secondo albero: ");
				scanf("%d",&i);
				for(;i>0;i--)
					insertBST(&b2,input_item());
				if(cmpBST(b,b2))
					printf("Gli alberi sono uguali\n");
				else
					printf("Gli alberi NON sono uguali\n");
			}
			break;
			case 17:
			{
				printf("In questo modo tutti gli elementi presenti nell'albero saranno cancellati, continuare(Si: 1/ No:0): ");
				scanf("%d%*c",&scelta);
				if(scelta)
				{
					b=newBST();
					printf("Quanti valori vuoi inserire: ");
					scanf("%d%*c",&len);
					v=calloc(len,sizeof(Item));
					inserimento(v,len);
					mergeSort(v,len);
					insert_array(&b,v,len);
				}
			}
			break;
			case 18:
			{	
				foglie_livelli(b);
				printf("\n");
			}
			break;
			default:
				printf("Input non valido\n");
			break;
		}
	}while(scelta);
	return 0;
}
