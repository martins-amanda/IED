#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include <ctype.h>


int prio(char o) {
switch( o ) {
	case '(': return 0;
	case '+': 
	case '-': return 1;
	case '*': 
	case '/': return 2;
}
return -1;
}

char *posfixa(char *e) {
static char s[256];
int j = 0;
Pilha P = pilha(256);
for(int i=0; e[i]; i++)
	if( e[i]=='(' ) empilha('(',P);
	else if( isdigit(e[i]) ) s[j++] = e[i];
	else if( strchr("+-/*",e[i]) ) {
		while( !vaziap(P) && prio(topo(P))>=prio(e[i]) ) 
			s[j++] = desempilha(P);
		empilha(e[i],P);
	}
	else if(e[i] == ')' ) {
		while( topo(P)!='(' )
			s[j++] = desempilha(P);
		desempilha(P);
	} 
	while(!vaziap(P))
		s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;
}

int val(char *e) {
	Pilha P = pilha(256);
	for(int a=0; e[a]; a++)
		if( isdigit(e[a]) ) empilha(e[a]-'0',P);
		else {
			int y = desempilha(P);
			int x = desempilha(P);
			switch( e[a] ) {
				case '+': empilha(x+y,P); break;
				case '*': empilha(x*y,P); break;
				case '/': empilha(x/y,P); break;
				case '-': empilha(x-y,P); break;
			}
		}
	int b = desempilha(P);
	destroip(&P);
	return b;
} 

int main(void) {
	char e[256];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	printf("Valor numérico: %s\n", val(e));
	return 0;
}

 //Deu uns erros mas funciona

