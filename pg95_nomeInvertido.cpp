#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	int i, j = 0;
	
	printf("Digite um nome:\n> ");
	gets(nome);
	printf("Nome inserido: %s", nome);
	/* d� para criar uma vari�vel para "strlen(nome) - 1"
	a fim de melhorar a legibilidade */
	for (i = strlen(nome) - 1; i >= 0; i--){
		nome[j] = nome[i];
		j++;
	};
	printf("\nNome invertido: %s", nome);
	return(0);
}

// tamanho - tamanho-1  --> �ltima posi��o.
// �ltima posi��o - contador --> posi��o na segunda frase.
