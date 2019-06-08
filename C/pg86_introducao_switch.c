#include <stdio.h>
#include <conio.h>

int main() {
	int num;
	
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	switch (num)
	{
		case 10:
			printf("O inteiro digitado foi: 10");
			break;
		case 20:
			printf("O inteiro digitado foi: 20");
			break;
		case 30:
			printf("O inteiro digitado foi: 30");
			break;
		case 40:
			printf("O inteiro digitado foi: 40");
			break;
		default:
			printf("O inteiro digitado nem foi 10, nem 20, nem 30, nem 40.");
	}
	return(1);
}
