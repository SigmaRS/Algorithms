#include <stdio.h>
#include <string.h>

int main(){
	int tamanhoFrase = 100;
	char frase1[tamanhoFrase], frase2[tamanhoFrase];
	
	printf("A funcao strcpy() serve para sobrescrever uma string com outra!\n");
	printf("\nDigite a primeira frase:\n> ");
	gets(frase1);
	
	printf("\nDigite a segunda frase:\n> ");
	gets(frase2);
	
	printf("\nAo usar strcpy, temos o seguinte resultado na segunda string: ");
	strcpy(frase2, frase1);
	printf("%s", frase2);
	return (0);
}
