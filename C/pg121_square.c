#include <stdio.h>

float potencia(float x){
	x = x*x;
	return x;
}

int main(){
	float x;
	printf("Digite um float para receber o mesmo elevado a 2:\n> ");
	scanf("%f", &x);
	printf("Resultado: %.2f", potencia(x));
	return 0;
}
