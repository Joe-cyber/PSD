#include"list.h"
#include"item.h"
#include<stdio.h>
int main(void)
{
	List l=new_list(),l2;
	Item item,item2;
	int pos;
	for(int i=0;i<5;i++)
	{
		item=input_item();
		l=insert_tail(l,item);
	}
	l=reverse_list(l);
	print_list(l);
	printf("\n");
}

