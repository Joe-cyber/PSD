#include"stack.h"
#include"queue.h"
#include<stdlib.h>
struct queue
{
	Stack s1;
	Stack s2;
};

Queue new_queue()
{
	Queue q=malloc(sizeof(struct queue));
	q->s1=new_stack();
	q->s2=new_stack();
	return q;
}

int isempty_queue(Queue q)
{
	return isempty_stack(q->s1);
}

void en_queue(Queue q,Item item)
{
	push(q->s1,item);
}
Item de_queue(Queue q)
{
	if(isempty_stack(q->s1))
		return NULL;
	while(!isempty_stack(q->s1))
	{
		push(q->s2,top(q->s1));
		pop(q->s1);
	}
	Item temp=top(q->s2);
	pop(q->s2);
	while(!isempty_stack(q->s2))
	{
		push(q->s1,top(q->s2));
		pop(q->s2);
	}
	return temp;
}

