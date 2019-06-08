#include <stdio.h>
#include <conio.h>

int main()
{
	char character;
	
	printf("Digite um char: ");
	scanf("%c", &character);
	printf("\nVoce digitou %c e esse caractere corresponde ao codigo ASCII %d", character, character);
	getch();
}

