#include"list.h"
#include"queue.h"
#include<stdlib.h>
struct queue
{
	List l;
};

Queue new_queue()
{
	Queue c=malloc(sizeof(struct queue));
	c->l=new_list();
}

int isempty_queue(Queue c)
{
	return is_empty(c->l);
}

void en_queue(Queue c,Item item)
{
	insert_tail(c->l,item);
}

Item de_queue(Queue c)
{
	Item temp=get_first(c->l);
	remove_head(c->l);
	return temp;
}

/*
	t(l)=a1t(l-1)+a2t(l-2).....ant(l-i) per l>i
	lineare con l in quanto è presente una sola chiamata
*/

void reverse_queue(Queue c)
{
	Item t=de_queue(c);
	if(!isempty_queue(c))
		reverse_queue(c);
	en_queue(c,t);
}

void delete_odd_recorsive(Queue c)
{
	if(!isempty_queue(c))	
		de_queue(c);
	if(!isempty_queue(c))
	{
		Item t=de_queue(c);
		delete_odd_recorsive(c);
		en_queue(c,t);
	}
}

void delete_odd(Queue c)
{
	delete_odd_recorsive(c);
	reverse_queue(c);
}









