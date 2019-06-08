#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];
	int pos, char_qntd;
	char_qntd, pos = 0;
	
	printf("Digite seu nome: ");
	gets(nome);
	char_qntd = strlen(nome);
	// Imprimir letras em posições ímpares
	printf("\nLetras em posicoes impares, tendo a primeira letra a posicao 0:");
	while(pos < char_qntd){
		pos++;
		if (pos % 2 !=0){
			if (nome[pos] != ' '){
				printf("\n[%d] %c", pos, nome[pos]);
			}
		}
	}
	// Imprimir 10x na tela o nome
	printf("\n\nO nome, repetido 10 vezes:");
	for (pos = 0; pos < 10; pos++) printf("\n%d. %s", pos + 1, nome);
	
	// para cada caractere imprimir a frase na tela.
	printf("\n\nO nome repetido pela quantia de caracteres:");
	for (pos = 0; pos < char_qntd; pos++) printf("\n%d. %s", pos + 1, nome);
	return(0);
}
