#include <stdio.h>

int main (){
	int x, y, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	soma = x + y;
	if (soma > 10) printf("%d", soma);
	return(0);
}
