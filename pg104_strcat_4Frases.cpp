#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main(){
	int i = 0;
	char frase1[TAMANHO], frase2[TAMANHO];
	char frase3[TAMANHO], frase4[TAMANHO];
	char fraseFinal[TAMANHO*4];
	
	printf("\nDigite a primeira frase:\n> ");
	gets(frase1);
	printf("\nDigite a segunda frase:\n> ");
	gets(frase2);
	printf("\nDigite a terceira frase:\n> ");
	gets(frase3);
	printf("\nDigite a quarta frase:\n> ");
	gets(frase4);
	
	fraseFinal[0] = '\0'; // Evitar lixo, limpar o espaço na memória antes de escrever.
	strcat(fraseFinal, frase1);
	strcat(fraseFinal, frase2);
	strcat(fraseFinal, frase3);
	strcat(fraseFinal, frase4);
	printf("Frase final(soma de todas): %s", fraseFinal);
	return (0);
}

