#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"equazione.h"
struct equazione
{
	float a;
	float b;
	float c;
};

Equazione acquisisci_equazione(float a,float b,float c)
{
	Equazione p=malloc(sizeof(struct equazione));
	p->a=a;
	p->b=b;
	p->c=c;
	return p;
}

float valorexquadro(Equazione p)
{	
	return p->a;
}

float valorex(Equazione p)
{
	return p->b;
}

float termine_noto(Equazione p)
{
	return p->c;
}

int delta(Equazione p)
{
	return (int)((p->b*p->b)-4*(p->a)*(p->c));
}

int risolvi_equazione(Equazione e, float* x1, float* x2)
{
	int d=sqrt(delta(e));
	if(d>=0)
	{
		*x1=(-e->b-d)/2*e->a;
		*x2=(-e->b+d)/2*e->a;
		return 1;
	}
	return 0;
}







