#include"class.h"
#include<stdio.h>
int main(void)
{
	int scelta;
	char ist[20],sez[3],anno[6];
	int pos;
	List l;
	printf("Inserisci il nome dell'istituto: ");
	scanf("%[^\n]%*c",ist);
	printf("Inserisci la sezione: ");
	scanf("%[^\n]%*c",sez);
	printf("Inserisci il numero di posti: ");
	scanf("%d%*c",&pos);
	Class c=new_classe(ist,sez,pos);	
	do{
		printf("1.Inserisci studente\n2.Scambia studenti\n3.Stampa classe\n4.Stampa gli alunni nati in un dato anno\n0.esci\nScelta: ");
		scanf("%d%*c",&scelta);
		switch(scelta)
		{
			case 0:
			break;
			case 1:
				insert_alunno(c,inputItem());	
			break;
			case 2:
			{	
				printf("Inserisci la posizione da eliminare: ");
				scanf("%d%*c",&pos);
				swap_alunni(c,pos);
			}	
			break;
			case 3:
				print_class(c);
			break;
			case 4:
			{
				printf("Inserisci l'anno da ricercare: ");
				scanf("%[^\n]%*c",anno);
				l=get_anno(c,anno);
				if(l!=NULL)
					printList(l);
			}
			break;
			default:
				fprintf(stderr,"Caso non valido\n");
			break;
		}
	}while(scelta);
	return 0;
}
