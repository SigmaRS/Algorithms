#include <stdio.h>

int main(){
	char nome[100];
	int pos, char_qntd;
	char_qntd = 0;
	
	printf("Digite seu nome: ");
	gets(nome);
	// contar caracteres
	// poderia ter usado strlen() da biblioteca <string.h>
	// char_qntd = strlen(nome);
	for (pos = 0; nome[pos] != '\0'; pos++) char_qntd++;
	// Imprimir letras em posições ímpares
	printf("\nLetras em posicoes impares, tendo a primeira letra a posicao 0:");
	for (pos = 0; nome[pos] != '\0'; pos++){
		if (pos % 2 != 0){
			if (nome[pos] != ' ') printf("\n[%d] %c", pos, nome[pos]);
		}
	}
	// Imprimir 10x na tela o nome
	printf("\n\nO nome, repetido 10 vezes:");
	for (pos = 0; pos < 10; pos++) printf("\n%d. %s", pos + 1, nome);
	// Imprimir para cada caractere a frase na tela.
	printf("\n\nO nome, repetido pela quantia de caracteres:");
	for (pos = 0; pos < char_qntd; pos++) printf("\n%d. %s", pos + 1, nome);
	
	return(0);
}
