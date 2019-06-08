#include <stdio.h>

int main ()
{
	int num;
	printf("Insira um inteiro: ");
	scanf("%d", &num);
	
	if (num == 20)
		printf("Igual a 20.");
	else if (num > 20)
		printf("Maior que 20.");
	else if (num < 20)
		printf("Menor que 20.");
	return(0);
}
