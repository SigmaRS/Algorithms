#include <stdio.h>

int main(){
	int vectorInt[8], i, maiorTrinta = 0, somaTrinta = 0;
	
	printf("Programa dos 8 inteiros maiores de 30\n");
	for(i = 0; i < 8; i++){
		printf("\nDigite um inteiro:\n> ");
		scanf("%i", &vectorInt[i]);
	}
	
	printf("\nVetor: ");
	for(i = 0; i < 8; i++){
		printf("%d ", vectorInt[i]);
	}
	
	printf("\nMaiores que 30: ");
	for(i = 0; i < 8; i++){
		if (vectorInt[i] > 30){
			maiorTrinta++;
			somaTrinta += vectorInt[i];
		}
	}
	printf("%d", maiorTrinta);
	printf("\nSoma dos inteiros maiores que 30: %d", somaTrinta);
	
}
