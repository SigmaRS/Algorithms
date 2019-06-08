#include <stdio.h>
#include <string.h>

int main(){
	struct tipo_endereco{
		char rua[50];
		int numero;
		char bairro[20];
		char cidade[30];
		char sigla_estado[3];
		long int cep;
	};
	
	struct tipo_endereco casaTesteEndereco;
	
	strcpy(casaTesteEndereco.rua, "Conjunto Isabel Cafeteira");
	casaTesteEndereco.numero = 880;
	strcpy(casaTesteEndereco.bairro, "Santa Rita");
	strcpy(casaTesteEndereco.cidade, "Imperatriz");
	strcpy(casaTesteEndereco.sigla_estado, "MA");
	casaTesteEndereco.cep = 65919130;
	
	printf("Endereco: %s\n", casaTesteEndereco.rua);
	printf("Num: %d\n", casaTesteEndereco.numero);
	printf("Bairro: %s\n", casaTesteEndereco.bairro);
	printf("Cidade: %s\n", casaTesteEndereco.cidade);
	printf("Estado: %s\n", casaTesteEndereco.sigla_estado);
	printf("CEP: %d\n", casaTesteEndereco.cep);
}
