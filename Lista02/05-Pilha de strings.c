#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhaChar.h"

int main(void) 
{
    Pilha P=pilha(5);
    char s[11];
    system("cls");
    printf("\nEmpilhando cadeia de char\n");
    for (int i=1;i<=3; i++){
        printf("? ");
        gets(s);
        empilha(_strdup(s),P); // faz um copia de S em outro endereço de memória
                               //empilha em P a referencia
    }
    while (!vaziap(P)) puts(desempilha(P));
    free(_strdup(s));
    printf("\n");
    return 0;
}

