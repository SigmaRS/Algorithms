#include <stdio.h>

bool parOuNao(int x){
	if (x % 2 == 0){
		return true;
	} else {
		return false;
	}
}

int main(){
	int x;
	printf("Digite um numeral para verificar par ou impar:.\n\n> ");
	scanf("%d", &x);
	if (parOuNao(x)){
		printf("par");
	} else {
		printf("impar");
	}
	return (0);
}
