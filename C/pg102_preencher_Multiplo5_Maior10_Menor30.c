#include <stdio.h>

int main (){
	int vectorInt[8], i = 0, numMulti5 = 0, numMaior10 = 0, numMenor30 = 0;
	float media;
	
	printf("Programa de 8 inteiros que calcula media, mostra quantos sao multiplos de 5, quantos sao maiores do que 10 e quantos sao menores do que 30\n");
	for(i = 0; i < 8; i++){
		printf("\nDigite um inteiro:\n> ");
		scanf("%i", &vectorInt[i]);
	}
	printf("Resultados: ");
	
	printf("\n\tVetor: ");
	for(i = 0; i < 8; i++){
		printf("%d ", vectorInt[i]);
	}
	
	printf("\n\tMedia: ");
	for(i = 0; i < 8; i++){
		media += vectorInt[i];
	}
	media /= 8.0;
	printf("%f", media);
	
	printf("\n\tMultiplos de 5: "); // arrumar
	for(i = 0; i < 8; i++){
		if (vectorInt[i] % 5 == 0){
			numMulti5++;
		}
	}
	printf("%d", numMulti5);
	
	printf("\n\tMaiores de 10: ");
	for(i = 0; i < 8; i++){
		if (vectorInt[i] > 10){
			numMaior10++;
		}
	}
	printf("%d", numMaior10);
	
	printf("\n\tMenores de 30: ");
	for(i = 0; i < 8; i++){
		if (vectorInt[i] < 30){
			numMenor30++;
		}
	}
	printf("%d", numMenor30);
}
