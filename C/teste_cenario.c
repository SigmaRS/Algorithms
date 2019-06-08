#include <stdio.h>
#include <stdlib.h>
#define LINHAS 16
#define COLUNAS 16

void draw_matrix(int posicaoX, int posicaoY){
	char matrix_xy[LINHAS][COLUNAS]; // Criar a matrix
	int linha = 0, coluna = 0, count = 0; // Criar contadores
	int i; // Criar contador 'i'
	
	// Limpar "lixo"
	for(linha = 0; linha < LINHAS; linha++){
		for(coluna = 0; coluna < COLUNAS; coluna++){
			matrix_xy[linha][coluna] = 0;
		}
	}
	
	// Definir posição do personagem
	matrix_xy[posicaoX][posicaoY] = 1;
	
	// Fazer print da matrix com posições
	printf("\nPosicoes: \n");	
	for(linha = 0; linha < LINHAS; linha++){
		for(coluna = 0; coluna < COLUNAS; coluna++){
			if (matrix_xy[linha][coluna] == 1) {
				printf("[X]");
			} else{
				printf("[ ]");
			}
		}
		printf("\n");
	}
}

int main(){
	int x = 0, y = 0;
	int comando;
	
	while (1){
		comando = 0;
		printf("Seu personagem se localiza em [%d, %d].\n", x, y);
		draw_matrix(x, y);
		printf("Para mover, digite um dos comandos:\n");
		printf("1.direita 2.esquerda 3.cima 4.baixo\n> ");
	 	scanf("%d", &comando);
	 	// y < (LINHAS - 1) não escapar para baixo.
	 	if ((comando == 1) && (y < (LINHAS - 1))){
			y++;
		} else if ((comando == 2) && (y != 0)){
			y--;
		} else if ((comando == 3) && (x!=0)){
			x--;
		} else if ((comando == 4) && (x < (LINHAS - 1))){
			x++;
		}
		system("cls"); // Só Windows usar system("clear") no linux
	}
	return 0;
}
