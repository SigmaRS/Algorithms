#include <stdio.h>

int main(){
	int num;
	/* para cada número que for maior ou igual a 0 e que for menor do que 100,
	exibir o mesmo na tela. "num--" = subtrair um */
	// Posso fazer assim:
	for (num = 100; num >= 0; num--) printf("%d ", num);
	printf("\n\n");
	// Ou assim:
	num = 100;
	while (num >= 0){
		printf("%d ", num);
		num--;
	}
	return(0);
}
