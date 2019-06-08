#include <stdio.h>

int main(){
	char frase[100];
	int pos, a_qntd;
	a_qntd = 0;
	
	printf("Digite uma frase: \n> ");
	gets(frase);
	for (pos = 0; frase[pos] != '\0'; pos++){
		if (frase[pos] == 'a'){
			a_qntd++;
			frase[pos] = 'b';
		}
	}
	printf("Frase: %s", frase);
	printf("\nQuantidade de caracteres modificados: %d", a_qntd);
	return(0);
}
