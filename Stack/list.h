#include"item.h"
#include"utils.h"
#include<stdbool.h>
typedef struct list *List;
typedef struct node *Node;
List new_list();
List add_head(List,Item);
Item get_first(List);
bool is_empty(List);
List remove_head(List);
void print_list(List);
List sort_list(List);
Node minimo(Node);
int size_list(List);
Item search_item(List,Item,int*);
Item remove_item(List,Item);
Item remove_pos(List,int);
List insert_item(List,Item,int);
List insert_tail(List,Item);
List clone_list(List);
List reverse_list(List);
