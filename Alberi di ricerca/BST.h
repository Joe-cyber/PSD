#include"item.h"
#include"list.h"
#include"queue.h"
typedef struct bst *BST;
BST newBST();
int isempty_bst(BST);
BST getLeft(BST);
BST getRight(BST);
Item search(BST,Item);
Item minBST(BST);
Item maxBST(BST);
void insertBST(BST*,Item);
Item deleteBST(BST*,Item);
void printPreordine(BST);
void printPostordine(BST);
void printSimmetrica(BST);
Item getBtreeroot(BST);
int altezza_albero(BST);
int albero_kbilanciato(BST);
BST rotazione_semplice(BST);
BST rotazione_doppia(BST);
void visita_livelli(BST);
void ordina_array(Item[],int);
void create_list(BST,List);
Queue livelli_pari(BST);
int cmpBST(BST,BST);
void insert_array(BST*,Item[],int);
void foglie_livelli(BST);
