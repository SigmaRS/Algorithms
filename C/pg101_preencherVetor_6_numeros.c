#include <stdio.h>

int main (){
	int vetorInt[6], pos = 0;
	
	printf("Digite 6 numeros:");
	for(pos = 0; pos < 6; pos++){
		printf("\n[%d] < ", pos);
		scanf("%d", &vetorInt[pos]);
	}
	printf("\nNumeros digitados:\n");
	for(pos = 0; pos < 6; pos++) printf("(%d) ", vetorInt[pos]);
	return (0);
}
