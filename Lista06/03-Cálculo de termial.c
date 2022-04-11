//exercicio 3 - cálcuo de termial
#include <stdio.h>

int termial (int n){
	
		if (n==0) {
		return 0;
		}
		return n+termial(n-1);

}

int main (void){
	int n;
	printf("Num? ");
	scanf ("%d", &n);
	printf("Termial = %d\n", termial(n));
	return 0;
}
