//exercicio 6 - Contagem regressiva

#include <stdio.h>
#include <time.h>
void cr (int n){
	
		if (n>=0){
			printf("%d\n", n);
			_sleep(1);
			
			cr(n-1);	
		}
}

int main (void){
	int n;
	printf("Num? ");
	scanf ("%d", &n);
	cr (n);
	return 0;
}
