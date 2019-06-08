#include <stdio.h>

int main (){
	int a = 5;
	int b = 0;
	
	/* A expressão:
	if (a>0)
		b=-150;
	else
		b=150;
	Pode ser simplificada da maneira:
	b = (condicao) ? caso verdadeiro : caso falso
	*/
	b= (a<0) ? -150 : 150;
		
	printf("%d - %d", a, b);
	return(0);
}
