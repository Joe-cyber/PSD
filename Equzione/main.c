#include<stdio.h>
#include"equazione.h"
int main(void)
{
	Equazione e;
	float a,b,c,x1,x2;
	printf("Inserisci x^2: ");
	scanf("%f",&a);
	printf("Inserisci x: ");
	scanf("%f",&b);
	printf("Inserisci il termine noto: ");
	scanf("%f",&c);
	e=acquisisci_equazione(a,b,c);
	printf("%.1fx^2 + %.1fx + %.1f = 0\ndelta=%d\n",valorexquadro(e),valorex(e),termine_noto(e),delta(e));
	if(risolvi_equazione(e,&x1,&x2))
		printf("x1= %.1f\nx2=%.1f\n",x1,x2);
	else
		printf("Delta minore di 0\n");	
	return 0;

}
