#include"stack.h"
#include<stdlib.h>
#include<stdio.h>
struct stack
{
	int top;
	Item *array;
};

Stack new_stack()
{
	Stack s=malloc(sizeof(struct stack));
	s->top=0;
	s->array=malloc(sizeof(Item));
	return s;
}

int push(Stack s,Item item)
{	
	s->array=realloc(s->array,sizeof(Item)*s->top+2);
	s->array[s->top]=item;
	s->top++;
	return 1;	
}

int pop(Stack s)
{
	if(s->top>0)
	{
		s->array=realloc(s->array,sizeof(Item)*s->top-1);
		s->top--;
		return 1;
	}
	return 0;	
}

Item top(Stack s)
{
	return s->array[s->top-1];
}

int isempty_stack(Stack s)
{
	return (!s->top);
}
