#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int i, cont;
	char pers[100];
	printf("digite uma frase: ");
	gets(pers);
	printf("\n\nfrase digitada: %s", pers);
	cont = 0;
	for(i=0; pers[i] != '\0'; i++)
	{
		if(pers[i] == 'c'){
			cont = cont++;
		}
	}
	printf("\nNumero de caracteres c = %d", cont);
	getch();
	
}
