#include <stdio.h>
#include "pilha.h"
#include <string.h>
#include <ctype.h>

int prio(char o) {
switch( o ) {
	case '(': return 0;
	case '|': return 1;
	case '&': 
	case '!': return 2;
}
return -1; //
}

char *posfixa(char *e) {
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for(int i=0; e[i]; i++)
		if( e[i]=='(' ){
			empilha('(',P);
		}else if( strchr("|&!",e[i]) ) {
			while( !vaziap(P) && prio(topo(P))>=prio(e[i]) ) 
				s[j++] = desempilha(P);
				empilha(e[i],P);
		}else if( e[i] == ')' ) {
			while( topo(P)!='(' ) 
				s[j++] = desempilha(P);
				desempilha(P);
		}else{
		 	s[j++] = e[i];
		}

	while(!vaziap(P))
		s[j++] = desempilha(P);
		s[j] = '\0';
		destroip(&P);
		return s;
}

int val(char c[]) {
	int count =0;
	Pilha P = pilha(strlen(c));
	for(int a=0; a<strlen(c); a++){
		if(c[a]=='F'){
			empilha(0,P);
		}else if(c[a]=='V'){
			empilha(1,P);
		}else{
			switch(c[a]) {
				case '!': empilha(!desempilha(P),P); break;
				case '&': empilha(desempilha(P)&&desempilha(P),P); break;
				case '|': empilha(desempilha(P)||desempilha(P),P); break;
			}
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
	printf("Valor num: %d\n", val(posfixa(e)));
	return 0;
}

