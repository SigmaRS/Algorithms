#include <stdio.h>

float mult3(float x, float y, float z){
	x = x*y*z;
	return x;
}

int main(){
	float x, y, z;
	printf("Multiplicacao de 3 numerais.\n\n");
	
	printf("Digite o primeiro numeral:\n> ");
	scanf("%f", &x);
	printf("Digite o segundo numeral:\n> ");
	scanf("%f", &y);
	printf("Digite o terceiro numeral:\n> ");
	scanf("%f", &z);
	
	printf("Resultado: %.2f", mult3(x, y, z));
	return 0;
}
