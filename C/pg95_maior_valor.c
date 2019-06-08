#include <stdio.h>
int main(){
	int maior=0, num=1;
	
	printf("Digite um inteiro:\n> ");
	scanf("%d", &num);
	while (num != 0){
		if (num > maior){
			maior = num;
		}
		printf("Digite um inteiro:\n> ");
		scanf("%d", &num);
	}
	printf("O maior inteiro tem o valor: %d.", maior);
	return(0);
}
