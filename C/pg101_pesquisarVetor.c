#include <stdio.h>

int main(){
	int vet[8], i, num, res;
	
	printf("Digite 8 numeros: ");
	for(i = 0; i < 8; i++){
		printf("\n[%d] > ", i);
		scanf("%i", &vet[i]);
	}
	printf("Digite um inteiro para checar:");
	scanf("%i", &num);
	for(i = 0; i < 8; i++){
		if(vet[i] == num){
			printf("\nO inteiro %d se encontra na posicao [%d] do vetor.", num, i);
			res = 1;
		}
	}
	if(res != 1){
		printf("\nO inteiro %d nao se encontra no vetor.", num);
	}
	return (0);
}

