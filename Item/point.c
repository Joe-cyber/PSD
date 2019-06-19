#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"point.h"
struct point
{
	float x;
	float y;
};

Point create_point(float x, float y)
{
	Point p=malloc(sizeof(struct point));
	p->x=x;
	p->y=y;
	return p;
}

float ascisse(Point p)
{
	return p->x;
}

float ordinata(Point p)
{
	return p->y;
}

float distanza(Point p,Point r)
{
	return sqrt(((p->x-r->x)*(p->x-r->x))+((p->y-r->y)*(p->y-r->y)));
}

