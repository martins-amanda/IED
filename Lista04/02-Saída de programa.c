//exercicio 2

#include <stdio.h>
#include "fila.h"

int main (void){
	int i;
	Fila F=fila(5);
	for (i=0; i<=3;i++){
		enfileira ( 'A'+ i,F);
	}
	while (!vaziaf(F))
		printf ("%c\n", desenfileira (F));
	destroif(&F);
	return 0;
}
