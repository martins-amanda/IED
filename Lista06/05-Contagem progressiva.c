//exercicio 5 - Contagem progressiva
#include <stdio.h>
#include <time.h>
void cp (int n){
	
		if (n>0){
			cp(n-1);
			printf("%d\n", n);
			_sleep(1);
		}
}

int main (void){
	int n;
	printf("Num? ");
	scanf ("%d", &n);
	cp (n);
	return 0;
}
