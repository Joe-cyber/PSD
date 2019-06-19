#include"list.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
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

void remove_head(List l)
{
	Node p=l->head;
	l->head=l->head->next;
	l->size--;
	free(p);
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
void print_ricorsive(Node n)
{
	if(n!=NULL)
	{
		output_item(n->p);
		printf("  ");
		print_ricorsive(n->next);
	}
}
void print_list(List l)
{
	print_ricorsive(l->head);
}

int size_list(List l)
{
	return l->size;
}

Item search_item_ricorsive(Node n, Item item, int* pos)
{
	if(n==NULL)
	{
		*pos=-1;
		return NULL;
	}
	if(cmp_item(n->p,item)==0)
		return n->p;
	(*pos)++;
	return search_item_ricorsive(n->next,item,pos);
}

Item search_item(List l, Item item, int* pos)
{
	*pos=0;
	return search_item_ricorsive(l->head,item,pos);
}

Item remove_item_ricorsive(Node n,Item item)
{
	if(n->next==NULL)
		return NULL;
	if(cmp_item(n->next->p,item)==0)
	{
		Item temp=n->next->p;
		n->next=n->next->next;
		return temp;
	}
	return remove_item_ricorsive(n->next,item);
}

Item remove_item(List l,Item item)
{
	Item temp;
	if(cmp_item(l->head->p,item)==0)
	{
		Item temp=l->head->p;
		remove_head(l);
		l->size--;
		return temp;
	}
	temp=remove_item_ricorsive(l->head,item);
	if(temp!=NULL)
		l->size--;
	return temp;
}

int occurences_ricorsive(Node n,Item item)
{
	if(n==NULL)
		return 0;
	if(cmp_item(n->p,item)==0)
		return 1+occurences_ricorsive(n->next,item);
	return occurences_ricorsive(n->next,item);
}

int occurences(List l,Item item)
{
	return occurences_ricorsive(l->head,item);
}

Item minimo_ricorsive(Node n)
{
	Item temp;
	if(n->next==NULL)
		return n->p;
	return (cmp_item(n->p,(temp=minimo_ricorsive(n->next)))<0 ? n->p : temp); 
}

Item minimo(List l)
{
	return minimo_ricorsive(l->head);
}

List extract_ricorsive(List l,Node n,int scelta)
{
	if(n!=NULL)
	{
		int *num=n->p;
		if(((*num-scelta)%2)==0)
			return add_head(extract_ricorsive(l,n->next,scelta),n->p);
		return extract_ricorsive(l,n->next,scelta);
	}
	return l;
}

List extract(List l, char c)
{
	return extract_ricorsive(new_list(),l->head,c=='p'||c=='P'?0:1);
}

List extract_position_ricorsive(List l,Node n)
{
	if(n->next!=NULL && n->next->next!=NULL)
		l=extract_position_ricorsive(l,n->next->next);
	return add_head(l,n->p);
}

List extract_position(List l, char c)
{
	if(l->size>=2)
		return extract_position_ricorsive(new_list(),c=='p'||c=='P'?l->head->next:l->head);
	if(l->size==1 && c=='p' && c!='P')
		return add_head(new_list(),l->head->p);
	return NULL;
}

char* concatena_node(Node n,char* s)
{
	char* temp=n->p;
	s=(char*)realloc(s,sizeof(char)*(strlen(s)+strlen(temp)+1));
	s=strcat(s,temp);
	s=strcat(s," ");
	if(n->next!=NULL)
		concatena_node(n->next,s);
	return s;
}

char* concatena(List l)
{
	char *str=(char*)malloc(sizeof(char));
	str[0]='\0';
	return (l->size!=0 ? concatena_node(l->head,str) : str);
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

Item get_first(List l)
{
	return l->head->p;
}

int is_empty(List l)
{
	return !(l->size);
}








