//exercício 8- Torre de hanoi
#include <stdio.h>

void hanoi(int n, char orig, char dest, char aux){
   if (n==1) {printf("\nMover disco 1 da torre %c para a torre %c", orig, dest);
   return;}
	  hanoi(n-1,orig,aux,dest);
	  printf("\nMover disco %d da torre %c para a torre %c", n, orig, dest);
	  hanoi(n-1,aux,dest,orig);
}

int main(void){
   int discos;
   printf("Torre de hanoi\n");
   printf("Digite a quantidade de discos: ");
   scanf("%d",&discos);
   hanoi(discos,'A','C','B');
   return 0;
}

