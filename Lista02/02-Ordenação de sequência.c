#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    int tam;

	printf("tamanho da pilha: ");
	scanf("%d", &tam);

	Pilha pilhaA = pilha(tam);
	Pilha pilhaB = pilha(tam);



	float n[100];

	for(int i = 0; i < tam; i++){
		printf("numero %d: ", i);
		scanf("%f", &n[i]);
	}

	for(int i = 0; i < tam; i++){
		if(vaziap(pilhaA)==1){
			empilha(n[i], pilhaA);
		}else {
			while(n[i] > topo(pilhaA)){
				empilha(desempilha(pilhaA), pilhaB);
				if(vaziap(pilhaA) == 1){
					break;
				}
			}
			empilha(n[i], pilhaA);
		}
		while(vaziap(pilhaB) == 0){
			empilha(desempilha(pilhaB), pilhaA);
		}
	}
	for(int i = 0; i < tam; i++){
		printf("%do numero: %.2f\n", i+1, desempilha(pilhaA));
	}

	return 0;
}
