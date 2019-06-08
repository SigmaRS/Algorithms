#include <stdio.h>

int main(){
	FILE *fp;
	
	fp=fopen ("testeDouglas.txt", "w");
	if (!fp){
		printf("arquivo nao encontrado");
	}
}

