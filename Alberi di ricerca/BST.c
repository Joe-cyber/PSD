#include"BST.h"
#include"utils.h"
#include"array.h"	
#include<stdlib.h>
#include<stdio.h>
struct bst
{
	BST ltree;
	BST rtree;
	Item item;
};

BST newBST()
{
	BST b=malloc(sizeof(struct bst));
	b->ltree=NULL;
	b->rtree=NULL;
	b->item=NULL;
}

int get_delta(BST b)
{
	return altezza_albero(b->rtree)-altezza_albero(b->ltree);
}

int altezza_albero(BST b)
{
	if(b==NULL || b->item==NULL)
		return 0;
	int right=altezza_albero(b->rtree),left=altezza_albero(b->ltree);
	return right>left? right+1 : left+1;
}

BST rotazione_semplice(BST b)
{
	int delta=get_delta(b);
	if(delta<-1)
	{
		BST beta=b->ltree->rtree,Y=b->ltree;
		Y->rtree=b;
		b->ltree=beta;
		return Y;
	}
	else if(delta>1)
	{
		BST beta=b->rtree->ltree,Y=b->rtree;
		Y->ltree=b;
		b->rtree=beta;
		return Y;
	}
	return b;
}

BST rotazione_doppia(BST b)
{
	int delta=get_delta(b);
	if(delta<-1)
	{
		BST z=b->ltree->rtree,y=b->ltree,x=b;
		BST gamma=z->rtree,beta=z->ltree;
		z->ltree=y;
		z->rtree=x;
		x->ltree=gamma;
		y->rtree=beta;
		return z;
	}
	else if(delta>1)
	{
		BST z=b->rtree->ltree,y=b->rtree,x=b;
		BST gamma=z->ltree,beta=z->rtree;
		z->rtree=y;
		z->ltree=x;
		x->rtree=gamma;
		y->ltree=beta;
		return z;
	}
	return b;
}

void insertBST(BST *b,Item item)
{
	if(*b==NULL)
		(*b)=newBST();
	if((*b)->item==NULL)
	{
		(*b)->item=item;
		return;
	}
	if(cmp_item((*b)->item,item)==0)
		return;
	if(cmp_item((*b)->item,item)>0)
	{
		insertBST(&(*b)->ltree,item);
		/*int delta=get_delta(*b);
		if(delta<-1)
			*b=rotazione_semplice(*b);
		delta=get_delta(*b);
		if(delta>1)
			*b=rotazione_doppia(*b);*/
		return;
	}
	insertBST(&(*b)->rtree,item);
	/*int delta=get_delta(*b);
	if(delta>1)
		*b=rotazione_semplice(*b);
	delta=get_delta(*b);
	if(delta<-1)
		*b=rotazione_doppia(*b);*/
}

void printPreordine(BST b)
{
	if(b!=NULL)
	{
		output_item(b->item);
		printf("  ");
		printPreordine(getLeft(b));
		printPreordine(getRight(b));
	}
}

void printPostordine(BST b)
{
	if(b!=NULL)
	{
		printPostordine(getLeft(b));
		printPostordine(getRight(b));
		output_item(b->item);
		printf("  ");
	}
}

void printSimmetrica(BST b)
{
	if(b!=NULL)
	{
		printSimmetrica(getLeft(b));
		output_item(b->item);
		printf("  ");
		printSimmetrica(getRight(b));
	}
}

Item getBtreeroot(BST b)
{
	return b!=NULL ? b->item : NULL;
}

BST getLeft(BST b)
{
	return b!=NULL ? b->ltree : NULL;
}

BST getRight(BST b)
{
	return b!=NULL ? b->rtree : NULL;
}

int isempty_bst(BST b)
{
	return (b==NULL || b->item==NULL);
}

Item minBST(BST b)
{
	if(b==NULL)
		return NULL;
	if(b->ltree!=NULL)
		return minBST(b->ltree);
	return b->item;
}
Item maxBST(BST b)
{
	if(b==NULL)
		return NULL;
	if(b->rtree!=NULL)
		return maxBST(b->rtree);
	return b->item;
}

Item search(BST b,Item item)
{
	if(b==NULL || b->item==NULL)
		return NULL;
	if(cmp_item(b->item,item)==0)
		return b->item;
	if(cmp_item(b->item,item)>0)
		return search(b->ltree,item);
	return search(b->rtree,item);
}

Item deleteBST(BST *b,Item item)
{
	Item temp=NULL;
	if((*b)==NULL || (*b)->item==NULL)
		return NULL;
	if(cmp_item((*b)->item,item)>0)
	{
		item=deleteBST(&((*b)->ltree),item);
		int delta=get_delta(*b);
		if(delta>1)
			*b=rotazione_semplice(*b);
		delta=get_delta(*b);
		if(delta<-1 || delta>1)
			*b=rotazione_doppia(*b);
		return item;
	}
	if(cmp_item((*b)->item,item)<0)
	{
		item=deleteBST(&((*b)->rtree),item);
		int delta=get_delta(*b);
		if(delta<-1)
			*b=rotazione_semplice(*b);
		delta=get_delta(*b);
		if(delta<-1 || delta>1)
			*b=rotazione_doppia(*b);
		return item;
	}
	if(cmp_item((*b)->item,item)==0)
	{
		temp=(*b)->item;
		if((*b)->rtree==NULL)
		{
			(*b)=(*b)->ltree;
			return temp;
		}
		else if((*b)->ltree==NULL)
		{
			(*b)=(*b)->rtree;
			return temp;
		}
		else
		{
			swap((*b)->item,maxBST((*b)->ltree));
			item=deleteBST(&(*b)->ltree,item);
			int delta=get_delta(*b);
			if(delta<-1 || delta>1)
				*b=rotazione_semplice(*b);
			delta=get_delta(*b);
			if(delta<-1 || delta>1)
				*b=rotazione_doppia(*b);
			return item;
		}
	}
}

int albero_kbilanciato(BST b)
{
	if(b!=NULL)
	{
		int delta=get_delta(b);
		return (albero_kbilanciato(b->ltree) && albero_kbilanciato(b->rtree) && delta>-2 && delta<2);

	}
	return 1;
}

void visita_livelli(BST b)
{
	Queue c=new_queue();
	BST temp;
	if(b!=NULL && b->item!=NULL)
	{
		en_queue(c,(Item)b);
		while(!isempty_queue(c))
		{
			temp=(BST)de_queue(c);
			output_item(temp->item);
			printf("  ");
			if(temp->ltree!=NULL)
				en_queue(c,(Item)temp->ltree);
			if(temp->rtree!=NULL)
				en_queue(c,(Item)temp->rtree);
		}
	}
}
//O(n log n)
void ordina_array(Item v[],int l)
{
	BST b=newBST();
	int i;
	for(i=0;i<l;i++)
		insertBST(&b,v[i]);	
	for(i=0;i<l;i++)		
		v[i]=deleteBST(&b,minBST(b));
}

void create_list(BST b,List l)
{
	if(b!=NULL && b->item!=NULL)
	{
		if(b->ltree!=NULL || b->rtree!=NULL)
			l=insert_tail(l,b->item);
		create_list(b->ltree,l);
		create_list(b->rtree,l);
	}
}

Queue livelli_pari(BST b)
{
	Queue c=new_queue(),c2=new_queue();
	BST temp;
	if(b!=NULL && b->item!=NULL)
	{
		if(b->ltree!=NULL)
		{
			en_queue(c,(Item)b->ltree);
			en_queue(c2,b->ltree->item);
		}
		if(b->rtree!=NULL)
		{
			en_queue(c,(Item)b->rtree);
			en_queue(c2,b->rtree->item);
		}
		while(!isempty_queue(c))
		{
			temp=(BST)de_queue(c);
			if(temp->ltree!=NULL && temp->ltree->ltree!=NULL)
			{
				en_queue(c,(Item)temp->ltree->ltree);
				en_queue(c2,temp->ltree->ltree->item);
			}
			if(temp->ltree!=NULL && temp->ltree->rtree!=NULL)
			{
				en_queue(c,(Item)temp->ltree->rtree);
				en_queue(c2,temp->ltree->rtree->item);
			}
			if(temp->rtree!=NULL && temp->rtree->ltree!=NULL)
			{
				en_queue(c,(Item)temp->rtree->ltree);
				en_queue(c2,temp->rtree->ltree->item);
			}
			if(temp->rtree!=NULL && temp->rtree->rtree!=NULL)
			{
				en_queue(c,(Item)temp->rtree->rtree);
				en_queue(c2,temp->rtree->rtree->item);
			}
		}
	}
	return c2;
}

int cmpBST(BST b1,BST b2)
{
	if(b1==NULL && b2==NULL)
		return 1;
	else if((b1==NULL && b2!=NULL) || (b1!=NULL && b2==NULL))
		return 0;
	else if(b1->item==NULL && b2->item==NULL)
		return 1;
	else if(cmp_item(b1->item,b2->item)!=0)
		return 0;
	return cmpBST(b1->ltree,b2->ltree)*cmpBST(b1->rtree,b2->rtree);
}

void insert_array(BST *b,Item v[],int l)
{
	if(l==1)
		insertBST(b,v[0]);
	else if(l>1)
	{
		insertBST(b,v[l/2]);
		insert_array(b,v,l/2);
		insert_array(b,v+l/2+1, l%2==0 ? l/2-1 : l/2);
	}
}

void foglie_livelli(BST b)
{
	Queue c=new_queue();
	BST temp;
	if(b!=NULL && b->item!=NULL)
	{
		en_queue(c,(Item)b);
		while(!isempty_queue(c))
		{
			temp=(BST)de_queue(c);
			if(temp->ltree==NULL && temp->rtree==NULL)
			{
				output_item(temp->item);
				printf("  ");
			}
			if(temp->ltree!=NULL)
				en_queue(c,(Item)temp->ltree);
			if(temp->rtree!=NULL)
				en_queue(c,(Item)temp->rtree);
		}
	}
}
































































