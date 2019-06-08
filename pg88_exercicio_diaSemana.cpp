#include <stdio.h>
#include <conio.h>

int main(){
	int dia;
	
	printf("Dias da semana: ");
	printf("Digite um inteiro de 1 a 7, sendo o dia 1 equivalente a domingo.\n> ");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("Dia da semana correspondente: domingo.");
			break;
		case 2:
			printf("Dia da semana correspondente: segunda-feira.");
			break;
		case 3:
			printf("Dia da semana correspondente: terca-feira.");
			break;
		case 4:
			printf("Dia da semana correspondente: quarta-feira.");
			break;
		case 5:
			printf("Dia da semana correspondente: quinta-feira.");
			break;
		case 6:
			printf("Dia da semana correspondente: sexta.");
			break;
		case 7:
			printf("Dia da semana correspondente: sabado.");
			break;
		default:
			printf("Dia da semana invalido.");
			printf("\nEntradas possiveis:");
			printf("\n-1 -2 -3 -4 -5 -6 -7");
	}
	return(0);
}
