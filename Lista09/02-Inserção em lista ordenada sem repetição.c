#include <stdio.h>
#include <stdlib.h>

#define fmt "%d "
typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no (Item x, Lista p) {
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

int pert (Item x, Lista L){
    while ( L != NULL && L->item < x )
        L = L->prox;
    return (L!=NULL && L->item == x);
}

void ins_sr (Item x, Lista *L){
    while ( *L != NULL && (*L)->item < x)
        L = &(*L)->prox;
    if (pert (x, *L)){
        printf("\nelemento repetido = %d \n", x);
        return;
    }
    *L = no(x, *L);
}

void exibe (Lista L){
    printf("[");
    while(L != NULL){
        printf("%d, ", L->item);
        L = L->prox;
    }
    printf("\b\b]");
    printf("\n");
}

int main (void){
    system("cls");
    Lista I = NULL;
    ins_sr (5, &I);
    ins_sr (4, &I);
    ins_sr (1, &I);
    ins_sr (3, &I);
    ins_sr (5, &I);
    ins_sr (2, &I);
    exibe(I);
    return 0;
}
