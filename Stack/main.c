#include"stack.h"
#include"item.h"
#include<stdio.h>
int main(void)
{
	Stack s=new_stack();
	Item n;
	for(int i=0;i<5;i++)
	{
		n=input_item();
		push(s,n);
	}

	while(!isempty_stack(s))
	{
		output_item(top(s));
		pop(s);
	}
	
	return 0;
}
