#include<stdio.h>
#include"point.h"
int main(void)
{
	int n,m=0;
	float p,a,o;
	printf("Quanti punti desideri inserire: ");
	scanf("%d",&n);
	Point v[n];
	for(int i=0;i<n;i++)
	{
		printf("Inserisci l'ascisse del %d° punto: ",i+1);
		scanf("%f",&a);
		printf("Inserisci l'ordinata del %d° punto: ",i+1);
		scanf("%f",&o);
		v[i]=create_point(a,o);
	}
	printf("Inserisci la distanza: ");
	scanf("%f",&p);
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(distanza(v[i],v[j])<=p)
				m++;
	printf("Ci sono %d coppie di punti con distanza inferiore a %.1f\n",m,p);
	return 0;
}

