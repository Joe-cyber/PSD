#include"list.h"
#include<stdlib.h>
#include<stdio.h>
struct node
{
	Item p;
	struct node *next;
};

struct list
{
	int size;
	Node head;
};

List new_list()
{
	List l=malloc(sizeof(struct list));
	l->head=NULL;
	l->size=0;
	return l;
}

List add_head(List l,Item item)
{
	Node first=malloc(sizeof(struct node));
	l->size++;
	first->p=item;
	first->next=l->head;
	l->head=first;
	return l;
}

Item get_first(List l)
{
	return l->head->p;
}

bool is_empty(List l)
{
	return !(l->size);
}

List remove_head(List l)
{
	Node p=l->head;
	l->head=l->head->next;
	l->size--;
	free(p);
	return l;
}

void print_list(List l)
{
	Node q=l->head;
	while(q!=NULL)
	{
		output_item(q->p);
		q=q->next;
	}
}

Node minimo(Node l)
{
	Node p,min=l;
	for(p=l->next;p!=NULL;p=p->next)
		if(cmp_item(p->p,min->p)<0)
			min=p;
	return min;
}

List sort_list(List l)
{
	Node p,min;
	for(p=l->head;p!=NULL;p=p->next)
	{
		min=minimo(p);
		swap(&p->p,&min->p);
	}
	return l;
}

int size_list(List l)
{
	return l->size;
}

Item search_item(List l, Item item, int* pos)
{
	*pos=0;
	for(Node i=l->head; i!=NULL; i=i->next)
	{
		if(cmp_item(item,i->p)==0)
			return i->p;
		(*pos)++;
	}
	return NULL;
}

Item remove_item(List l,Item item)
{
	int pos,j;
	Node nodo,i;
	Item value;
	if(search_item(l,item,&pos)!=NULL)
	{
		if(pos==0)
		{
			value=l->head->p;
			l=remove_head(l);
			return value;
		}
		for(i=l->head,j=0;j<pos-1;i=i->next,j++);
		nodo=i->next;
		value=nodo->p;
		i->next=i->next->next;
		free(nodo);
		l->size--;
		return value;
	}
	return NULL;	
}

Item remove_pos(List l,int pos)
{
	Node i,nodo;
	int j;
	Item value;
	if( pos<0 || pos>=l->size )
		return NULL;
	if(pos==0)
	{		
		value=l->head->p;
		l=remove_head(l);
		return value;
	}
	for(i=l->head,j=0;j<pos-1;i=i->next,j++);
	nodo=i->next;
	value=nodo->p;
	i->next=i->next->next;
	free(nodo);
	l->size--;
	return value;
}

List insert_item(List l,Item item,int pos)
{
	int j;
	Node i,nodo=malloc(sizeof(struct node));
	if(pos<0 || pos>l->size)
		return l;
	if(pos==0)
		return add_head(l,item);
	for(i=l->head,j=0;j<pos-1;i=i->next,j++);
	nodo->p=item;
	nodo->next=i->next;
	i->next=nodo;
	l->size++;
	return l;
}

List insert_tail(List l,Item item)
{
	return insert_item(l,item,l->size);
}

List clone_list(List l)
{
	List l2=new_list();
	Node p;
	l2->size=l->size;
	if(l->size>0)
	{	
		l2=add_head(l2,l->head->p);
		for(p=l->head->next;p!=NULL;p=p->next)
			l2=insert_tail(l2,p->p);
	}		
	return l2;
}

List reverse_list(List l)
{
	Node p,q;
	int i,j;
	if(l->size>1)
	{
		for(p=l->head,i=0;i<l->size/2;p=p->next,i++)
		{
			for(q=l->head,j=1;j<l->size-i;q=q->next, j++);
			swap(&p->p,&q->p);
		}
	}
	return l;	
}
