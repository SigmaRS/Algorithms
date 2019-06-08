#include <stdio.h>

int main(){
	int i, idade, qnt_menor_21=0, qnt_maior_50=0;
	
	printf("Digite a idade da pessoa\n> ");
	scanf("%d", &idade);
	while (idade != -99){
		printf("Digite a idade da pessoa\n> ");
		scanf("%d", &idade);
		if (idade < 21) qnt_menor_21++;
		if (idade > 50) qnt_maior_50++;
	}
	
	printf("\nQuantia de pessoas com menos de 21 anos: %d", qnt_menor_21);
	printf("\nQuantia de pessoas com mais de 50 anos: %d", qnt_maior_50);
	return(0);
}
