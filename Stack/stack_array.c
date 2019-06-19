#include"stack.h"
#include"item.h"
#include<stdlib.h>
#include<stdio.h>
#define SIZE 5
struct stack
{
	int top;
	Item array[SIZE];
};

Stack new_stack()
{
	Stack s=malloc(sizeof(struct stack));
	s->top=0;
	return s;
}

int push(Stack s,Item item)
{
	if(s->top<SIZE)
	{	
		s->array[s->top]=item;
		s->top++;
		return 1;
	}	
	return 0;	
}

int pop(Stack s)
{
	if(s->top>0)
	{
		s->top--;
		return 1;
	}
	return 0;	
}

Item top(Stack s)
{
	return s->array[s->top-1];
}

void print_stack(Stack s)
{
	for(int i=0;i<s->top;i++)
		output_item(s->array[i]);
}

int isempty_stack(Stack s)
{
	return (!s->top);
}
