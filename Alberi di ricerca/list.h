#include"item.h"
#include"utils.h"
typedef struct list *List;
typedef struct node *Node;
List new_list();
List add_head(List,Item);
void print_list(List);
int size_list(List);
Item search_item(List,Item,int*);
Item remove_item(List,Item);
int occurences(List,Item);
Item minimo(List);
void remove_head(List);
List extract(List,char);
List extract_position(List,char);
char* concatena(List);
List insert_tail(List,Item);
List insert_item(List,Item,int);
Item get_first(List);
int is_empty(List);

