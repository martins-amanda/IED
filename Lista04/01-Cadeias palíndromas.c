#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila.h"
 int main (void){
 	char s[256];
 	int i;
 	Fila F= fila(256);
 	Pilha P = pilha (256);
 	printf("\nFrase? ");
	toupper (gets (s));
		if ((isalpha (s[i]))){
			enfileira (s[i], F);
			empilha (s[i],P);
		}
	while (!vaziaf(F)&& desenfileira(F) == desempilha(P));
	if (vaziaf(F)) puts ("A frase eh palindroma");
	else puts ("A frase nao e palindroma");
	destroif(&F);
	destroip(&P);
 	return 0;
 }
