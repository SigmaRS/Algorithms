#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao;
	
	printf("Escolha uma tarefa:");
	printf("\n\t1- Desligar o computador");
	printf("\n\t2- Abrir a calculadora");
	printf("\n> ");
	scanf("%d", opcao);
	switch(opcao){
		case 1:
			system("shutdown -s -t 1");
		case 2:
			system("calc.exe");
		default:
			system("iexplorer.exe");
	}
	return(0);
}
