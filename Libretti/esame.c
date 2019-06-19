#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include"esame.h"

struct esame
{
	char* course;
	int vote;
	char* data;	
};

Esame new_esame(char* course,int vote,char* data)
{
	Esame e=malloc(sizeof(struct esame));
	e->data=strdup(data);
	e->course=strdup(course);
	e->vote=vote;
	return e;
}

char* get_course(Esame e)
{
	return e->course;
}

int get_vote(Esame e)
{
	return e->vote;
}

char* get_date(Esame e)
{
	return e->data;
}
