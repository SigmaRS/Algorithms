#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4
/*
Matrix 4x4
[0.0][0.1][0.2][0.3][0.4]
[1.0][1.1][1.2][1.3][1.4]
[2.0][2.1][2.2][2.3][2.4]
[3.0][3.1][3.2][3.3][3.4]
[4.0][4.1][4.2][4.3][4.4]
*/
int main (){
	char matrix_xy[LINHAS][COLUNAS]; // Criar a matrix
	int linha = 0, coluna = 0, count = 0; // Criar contadores
	
	printf("\nSentido de leitura: Direita para Esquerda, Topo para baixo\n");
		
	// Fazer print da matrix com posições
	printf("\nPosicoes: \n");	
	for(linha = 0; linha < LINHAS; linha++){
		for(coluna = 0; coluna < COLUNAS; coluna++){
			printf("[%d.%d]", linha, coluna);
		}
		printf("\n");
	}
	
	// Perguntar o valor de cada elemento
	for(linha = 0; linha < LINHAS; linha++){
		for(coluna = 0; coluna < COLUNAS; coluna++){
			printf("\nDigite o valor para [%d.%d]:\n", linha, coluna);
			scanf("%d", &matrix_xy[linha][coluna]);
		}
		printf("\n");
	}
	
	// Mostrar os valores
	printf("\nValores: \n");
	for(linha = 0; linha < LINHAS; linha++){
		for(coluna = 0; coluna < COLUNAS; coluna++){
			printf("[%3d]", matrix_xy[linha][coluna]);
		}
		printf("\n");
	}
	
	// Mostrar os valores na diagonal principal
	printf("\nValores da diagonal principal: \n");
	for(linha = 0; linha < LINHAS; linha++){
		for(coluna = 0; coluna < COLUNAS; coluna++){
			if(coluna == linha) printf("[%3d]", matrix_xy[linha][coluna]);
		}
	}
	
	return(0);
}
