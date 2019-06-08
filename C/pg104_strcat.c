#include <stdio.h>
#include <string.h>

int main(){
	int tamanhoFrase = 100;
	char nome[tamanhoFrase], sobrenome[tamanhoFrase];
	
	printf("A funcao strcat() serve para juntar duas strings!\n");
	printf("\nDigite seu nome:\n> ");
	gets(nome);
	
	printf("\nDigite seu sobrenome:\n> ");
	gets(sobrenome);
	
	printf("\nAo usar strcat(), temos o seguinte resultado na segunda string: ");
	printf("\nO.b.s: O nome passa a guardar o nome completo ao usar strcat().\n");
	strcat(nome, sobrenome);
	printf("%s", nome);
	return (0);
}

