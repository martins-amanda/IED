//exercicio 4 - C?lculo da s?rie harm?nica

#include <stdio.h>
float h (int n){
	
		if (n==1){
		return 1; 
			}
		return 1.0/n + h(n-1);
}

int main (void){
	int n;
	printf("Num? ");
	scanf ("%d", &n);
	printf("Harmonica = %.2f\n", h(n));
	return 0;
}
