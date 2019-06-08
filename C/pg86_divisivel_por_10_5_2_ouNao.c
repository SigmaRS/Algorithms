#include <stdio.h>

int main (){
	int num;
	
	printf("Insira um inteiro: ");
	scanf("%d", &num);
	//(num % 10 == 0) é desnecessário.
	//if ((num % 10 == 0) && (num % 5 == 0) && (num % 2 == 0))
	if (!(num % 5) && !(num % 2))
		printf("O inteiro e divisivel por 10, 5 e 2.");
	else
		printf("O inteiro nao e divisivel por 10, 5 e 2 ao mesmo tempo.");
	return(0);
}
