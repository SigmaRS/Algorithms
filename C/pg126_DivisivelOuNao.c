#include <stdio.h>

bool divisivelOuNao(int x, int y){
	if (x % y){ // se tiver resto
		return false;
	} else {
		return true;
	}
}

int main(){
	int x, y;
	printf("Digite dois numerais para verificar se o primeiro e divisivel pelo segundo ou nao:\n\n");
	printf("Digite o primeiro:\n> ");
	scanf("%d", &x);
	printf("Digite o segundo:\n> ");
	scanf("%d", &y);
	if (divisivelOuNao(x, y)){
		printf("divisivel");
	} else {
		printf("nao divisivel");
	}
	return (0);
}
