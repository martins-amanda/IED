//exercicio 7 - binario

#include <stdio.h>

void binario (int n){
	
		if (n>0){
			binario(n/2);	
			printf("%d ", n%2);
		}
}

int main (void){
	int n;
	printf("Num? ");
	scanf ("%d", &n);
	binario (n);
	return 0;
}
