#include <stdio.h>
#include <string.h>

int main(){
	char frase1[100], frase2[100];
	int i, j = 0;
	
	printf("Digite uma frase:\n> ");
	gets(frase1);
	printf("Frase inserida: %s", frase1);
	/* d� para criar uma vari�vel para "strlen(frase1) - 1"
	a fim de melhorar a legibilidade */
	for (i = strlen(frase1) - 1; i >= 0; i--){
		frase2[j] = frase1[i];
		j++;
	};
	printf("\nFrase invertida: %s%", frase2);
	return(0);
}

// tamanho - tamanho-1  --> �ltima posi��o.
// �ltima posi��o - contador --> posi��o na segunda frase.
