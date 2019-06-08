#include <stdio.h>
#include <conio.h>

int main()
{
	char str1[100];
	char str2[100];
	printf("Digite a primeira frase:");
	gets(str1);
	printf("Digite a segunda frase:");
	gets(str2);
	printf("Frases:\n> %s\n> %s\nSegunda letra de cada frase:\n> %c\n> %c", str1, str2, str1[1], str2[1]);
}

