#include"squadra.h"
#include<stdio.h>
int main(void)
{
	char nome[50], indirizzo[50];
	int posti,scelta,n;
	List l;
	Item t;
	printf("Inserisci il nome della squadra: ");
	scanf("%[^\n]",nome);
	scanf("%*c");
	printf("Inserisci l'indirizzo della squadra: ");
	scanf("%[^\n]",indirizzo);
	scanf("%*c");
	printf("Inserisci il numero di posti: ");
	scanf("%d",&posti);
	scanf("%*c");
	Squadra s=new_squadra(nome,indirizzo,posti);
	do{
		printf("1. Inserisci tennista\n2. Elimina tennista\n3. Stampa Squadra\n4. Cerca categoria\n5. Scambia tennista col successivo\n0. Esci\nScelta: ");
		scanf("%d%*c",&scelta);
		switch(scelta)
		{
			case 0: break;
			case 1:
			{
				t=inputItem();
				insert_tennista(s,t);
			}
			break;
			case 2:
			{
				printf("Inserisci la posizione da eliminare: ");
				scanf("%d",&n);
				remove_tennista(s,n);
			}
			break;
			case 3:
				print_squadra(s);
			break;
			case 4:	
			{
				printf("Inserisci la categoria da ricercare: ");
				scanf("%d",&n);
				l=search_categoria(s,n);
				if(l!=NULL)
					printList(l);
			}
			break;
			case 5:
			{
				printf("Inserisci la posizione da scambiare con la successiva: ");
				scanf("%d",&n);
				swap_tennisti(s,n);
			}
			break;
			default:
				fprintf(stderr,"Input non valido\n");
			break;
		}
	}while(scelta);
	return 0;
}
