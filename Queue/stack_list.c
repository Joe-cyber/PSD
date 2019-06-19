#include"stack.h"
#include"list.h"
#include<stdlib.h>
#include<stdio.h>
struct stack
{
	List top;
};

Stack new_stack()
{
	Stack s=malloc(sizeof(struct stack));
	s->top=new_list();
	return s;
}

int push(Stack s,Item item)
{
	s->top=add_head(s->top,item);
	return 1;
}

int isempty_stack(Stack s)
{
	return is_empty(s->top);
}

int pop(Stack s)
{
	if(!is_empty(s->top))
	{
		s->top=remove_head(s->top);
		return 1;
	}
	return 0;
}

void print_stack(Stack s)
{
	printf("Top: ");
	print_list(s->top);
}

Item top(Stack s)
{
	return get_first(s->top);
}
