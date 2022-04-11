#include <stdio.h>
#include "pilha.h"

int main(void){
	char c[81]; 
	int i;
	Pilha P = pilha(81);

	printf("Palavra a ser invertida: \n");
	gets(c);

	for(i=0; c[i]; i++)
		empilha(c[i],P);
	printf("Inversao: \n");

	while( !vaziap(P) )
		printf("%c", desempilha(P));
	destroip(&P);
	return 0;
}

