#include <stdio.h>

int main(){
	int index = 3, contador;
	char letras[5] = "Joao";
	for (contador=0; contador < 100; contador++)
	{
		if(contador % 5 == 0){
			(index == 3) ? index = 0 : ++index;
			printf("\n");
		}
		printf("%c", letras[index]);
	}
	return(0);
}
