#include <stdio.h>

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
	int result;
	char x;
	printf("Verificacao de vogal.\n\n");
	
	printf("Digite apenas uma letra:\n> ");
	scanf("%c", &x);
	
	result = verificarVogal(x);
	printf("Resultado: %d ", verificarVogal(x));
	if (result == 1){
		printf("(vogal)");
	} else {
		printf("(consoante)");
	}
	return 0;
}
