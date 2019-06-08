#include <stdio.h>
#include <conio.h>

int main()
{	
	// Declaração de variáveis
	int dias;
	float anos;
	
	// Entrada de dados
	printf("Entre com o numero de dias: ");
	scanf("%d", &dias);
	
	// Conversão de dias para anos
	anos = dias/365.25;
	printf("\n\n%d dias equivalem a %.2f anos.\n", dias, anos);
	getch();
}
