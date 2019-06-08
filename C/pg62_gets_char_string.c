#include <stdio.h>
#include <conio.h>

int main()
{
	char string[5];
	printf("Digite uma string: ");
	// gets(string); // GETS PEGA A FRASE INTEIRA!
	scanf("%s", &string); // SCANF PEGA SÓ A PRIMEIRA PALAVRA
	printf("\nVoce digitou %s", string);
	getch();
}
