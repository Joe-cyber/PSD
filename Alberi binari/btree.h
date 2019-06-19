#include"item.h"
typedef struct btree *Btree;
Btree newBtree();
int isempty_tree(Btree);
Btree buildBtree(Btree,Btree,Item);
Item getBtreeroot(Btree);
Btree getLeft(Btree);
Btree getRight(Btree);
void printPreordine(Btree);
void printPostordine(Btree);
void printSimmetrica(Btree);
void printPreordine_stack(Btree);
void printPostordine_stack(Btree);
void printSimmetrica_stack(Btree);
