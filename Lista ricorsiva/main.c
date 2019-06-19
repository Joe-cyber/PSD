#include"list.h"
#include"item.h"
#include<stdio.h>
int main(void)
{
	List l=new_list();
	Item item;
	char scelta;
	for(int i=0;i<3;i++)
		l=insert_tail(l,input_item());
	char *s=concatena(l);
	printf("%s\n",s);
}

