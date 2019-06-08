#include <stdio.h>
#include <string.h>

int verificarVogal(char x){
	int result;
	result = 0;
	if (x == 'a'||x == 'A'||
		x == 'e'||x == 'E'||
		x == 'i'||x == 'I'||
		x == 'o'||x == 'O'||
		x == 'u'||x == 'U'){
		result = 1;
	}
	return result;
}

int main(){
	char nome[100];
	int i, result;
	
	// Usar i = 101; e while para evitar string "transbordando"
	i = 101;
	while (i > 100){
		printf("Digite um nome (max 100 chars):\n> ");
		gets(nome);
		i = strlen(nome);
	}
	
	// Verificar para letra se a mesma é vogal ou consoante
	for(i=0; i < strlen(nome); i++){
		printf("%c -- vogal? ", nome[i]);
		result = verificarVogal(nome[i]);
		if (result == 1){
			printf("(vogal)\n");
		} else {
			printf("(consoante)\n");
		}
	}
}
