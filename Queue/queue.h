#include"item.h"
typedef struct queue *Queue;
Queue new_queue();
int isempty_queue(Queue);
void en_queue(Queue,Item);
Item de_queue(Queue);
void reverse_queue(Queue);
void delete_odd(Queue);
