#include <stdio.h>
#include "Pilha.h"

void balanceamentoExpressao(Pilha p) {
    char aux;
    int contaBalanceamento = 0;
    while( !vaziap(p) ){
        aux = desempilha(p);
        if ((aux == '(')||(aux == '[')||(aux == '{')){
            contaBalanceamento = contaBalanceamento +1;
        } else if ((aux == ')')||(aux == ']')||(aux == '}')){
            contaBalanceamento = contaBalanceamento -1;
        }
    }
    if (contaBalanceamento ==0)
        printf ("Balanceada\n");
    else
        printf ("Nao balanceada\n");
    destroip(&p);
}

int main(void){
char c[100];
int i;
Pilha p = pilha(100);
printf("Chaves Parenteses ou Colchetes: \n");
scanf("%s", &c);
for(i=0; c[i]; i++)
    empilha(c[i],p);
    balanceamentoExpressao(p);
    return 0;
}

