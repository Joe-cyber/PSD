#include"item.h"
#include"point.h"
#include<stdio.h>
#include<stdlib.h>

Item input_item()
{
	Point p;
	float x,y;
	scanf("%f , %f",&x,&y);
	p=create_point(x,y);
	return p;
}

void output_item(Item item)
{
	Point p=item;
	printf("(%.1f;%.1f)",ascisse(p),ordinata(p));
}

int cmp_item(Item item1,Item item2)
{
	Point p1=item1,p2=item2,p0=create_point(0,0);
	float d1=distanza(p0,p1),d2=distanza(p0,p2);
	if(d1>d2)
		return 1;
	if(d1<d2)
		return -1;
	return 0;
}
