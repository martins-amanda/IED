#include<stdio.h>
#include"pilhaChar.h"//pilhadechar*
#include <stdlib.h>
#include <string.h>
int main(void){
	Pilha P=pilha(5);
	char s[11];
	for(int i=1;i<=3;i++){
		printf("? ");
		gets(s);
		empilha(s,P);
	}
	while(!vaziap(P))puts(desempilha(P));
	return 0;}

