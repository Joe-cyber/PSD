#include"item.h"
typedef struct stack *Stack;
Stack new_stack();
int push(Stack,Item);
int pop(Stack);
Item top(Stack);
void print_stack(Stack);
int isempty_stack(Stack);

