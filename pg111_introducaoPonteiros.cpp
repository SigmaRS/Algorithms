#include<stdio.h>

int main(){
	int num;
	int *pont, *temp;
	num = 60;
	
	pont=&num;
	
	printf("Num: %d\n", num);
	printf("Endereco de memoria apontado pelo ponteiro: %p\n", pont);
	printf("Valor do endereco apontado: %d\n", *pont);
	
	printf("===\n");
	temp=pont;
	printf("Teste 1 = %d | %p - Pegar ponteiro 1 posicao adiante\n", temp++, temp);
	temp=pont;
	printf("Teste 2 = %d | %p\n", (*temp)++, temp);
	temp=pont;
	printf("Teste 3 = %d | %p - Incrementar o valor apontado\n", *(temp++), temp);
	return(0);
	// p++. (*p)++; *(p++);
}
