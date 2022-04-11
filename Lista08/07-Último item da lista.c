#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe (Lista L){
    printf("[");
    while(L != NULL){
        printf("%d, ", L->item);
        L = L->prox;
    }
    printf("\b\b]");
}

int ultimo(Lista L){
    int last = 0;
    if (L == NULL) puts ("Lista vazia!");
    while (L != NULL){
        last = L->item;
        L = L->prox;
    }
    return last;
}

int main(void){
    Lista I = no(3, no(1, no(5, NULL)));
    Lista H = NULL;
    exibe(I);
    exibe(H);
    printf("\nultimo item = %d\n", ultimo(I));
    printf("\nultimo item = %d\n", ultimo(H));
    return 0;
}
