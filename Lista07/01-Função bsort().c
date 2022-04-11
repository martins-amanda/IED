//exercicio 1
#include<stdio.h>

void bsort (int v[], int n){
	int i, j,x;
	for (i=1; i<=n-1; i++){
		for(j=0;j<n-1; j++){
			if (v[j]>v[j+1]){
				x = v[j]; //atribui valor a uma auxiliar
				v[j]=v[j+1]; // troca o valor menor pela maior 
				v[j+1]=x;
			}
		
		}
	}
} 
void exibe (int v[], int n){
	int i,j;
	for (i=1; i<=n-1; i++){
		for(j=0;j<n-1; j++){			
		} 
		printf (" %d ",v[i]);
}}

int main (void) {
	int v[10]= {83,31,91,46,27,20,96,25,96,80};
	bsort (v,10);
	exibe (v,10);
	return 0;
}
