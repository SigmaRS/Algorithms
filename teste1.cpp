#include <stdio.h>

int main(){
	int vetorInt[8], i, num, res;
	
	printf("Digite 8 numeros: ");
	for(i = 0; i < 8; i++){
		printf("\n[%d] > ", i);
		scanf("%d", &vetorInt[i]);
	}
	printf("Digite um inteiro para checar:");
	scanf("%d", num);
	
	for(i = 0; i < 8; i++){
		if(vetorInt[i] == num){
			printf("O inteiro %d se encontra na posicao [%d] do vetor.", num, i);
			res = 1;
		}
	}
	
	if(res != 1){
		printf("O inteiro %d nao se encontra no vetor.", num);
	}
	return (0);
}
