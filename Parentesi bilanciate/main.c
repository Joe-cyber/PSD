#include"stack.h"
#include"item.h"
#include<stdio.h>
#include<stdlib.h>
int parentesi_bilanciate(char*);
int main(void)
{
	char s[100];
	printf("Inserisci l'espressione: ");
	fgets(s,100,stdin);
	if(parentesi_bilanciate(s))
		printf("\nBilanciate\n");
	else
		printf("Non bilanciate\n");
}

int parentesi_bilanciate(char* espressione)
{
	Stack s=new_stack();
	char *p,*temp;
	Item c;
	for(p=espressione;*p;p++)
	{
		if( *p=='(' || *p=='[' || *p=='{' )
		{
			c=p;
			push(s,c);
		}
		else if( *p==')' || *p==']' || *p=='}' )
		{
			if(!isempty_stack(s))
			{
				temp=c=top(s);
				pop(s);
				if(*p==')' && *temp!='(')
					return 0;
				if(*p==']' && *temp!='[')
					return 0;
				if(*p=='}' && *temp!='{')
					return 0;
			}
			else 
				return 0;
		}
	}
	if(!isempty_stack(s))
		return 0;
	return 1;
}

