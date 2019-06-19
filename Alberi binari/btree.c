#include"btree.h"
#include"stack.h"
#include<stdlib.h>
#include<stdio.h>
struct btree
{
	Btree ltree;
	Btree rtree;
	Item item;
};

Btree newBtree()
{
	return NULL;
}

Btree buildBtree(Btree left,Btree right,Item item)
{
	Btree b=malloc(sizeof(struct btree));
	b->ltree=left;
	b->rtree=right;
	b->item=item;
	return b;
}

Item getBtreeroot(Btree b)
{
	return b!=NULL ? b->item : NULL;
}

int isempty_tree(Btree b)
{
	return (b==NULL);
}

Btree getLeft(Btree b)
{
	return b!=NULL ? b->ltree : NULL;
}

Btree getRight(Btree b)
{
	return b!=NULL ? b->rtree : NULL;
}

void printPreordine(Btree b)
{
	if(b!=NULL)
	{
		output_item(b->item);
		printPreordine(getLeft(b));
		printPreordine(getRight(b));
	}
}

void printPostordine(Btree b)
{
	if(b!=NULL)
	{
		printPostordine(getLeft(b));
		printPostordine(getRight(b));
		output_item(b->item);
	}
}

void printSimmetrica(Btree b)
{
	if(b!=NULL)
	{
		printSimmetrica(getLeft(b));
		output_item(b->item);
		printSimmetrica(getRight(b));
	}
}

void build_stack_pre(Btree b,Stack s)
{
	if(b!=NULL)
	{
		build_stack_pre(getRight(b),s);
		build_stack_pre(getLeft(b),s);
		push(s,getBtreeroot(b));
	}
}

void printPreordine_stack(Btree b)
{
	Stack s=new_stack();
	build_stack_pre(b,s);
	while(!isempty_stack(s))
	{
		output_item(top(s));
		pop(s);
	}		
}

void build_stack_post(Btree b,Stack s)
{
	if(b!=NULL)
	{
		push(s,getBtreeroot(b));
		build_stack_post(getRight(b),s);
		build_stack_post(getLeft(b),s);
	}
}

void printPostordine_stack(Btree b)
{
	Stack s=new_stack();
	build_stack_post(b,s);
	while(!isempty_stack(s))
	{
		output_item(top(s));
		pop(s);
	}		
}

void build_stack_simmetrica(Btree b,Stack s)
{
	if(b!=NULL)
	{
		build_stack_simmetrica(getRight(b),s);
		push(s,getBtreeroot(b));
		build_stack_simmetrica(getLeft(b),s);
	}
}

void printSimmetrica_stack(Btree b)
{
	Stack s=new_stack();
	build_stack_simmetrica(b,s);
	while(!isempty_stack(s))
	{
		output_item(top(s));
		pop(s);
	}		
}











































