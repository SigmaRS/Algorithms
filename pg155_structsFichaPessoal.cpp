#include <stdio.h>
#include <string.h>

struct tipo_endereco{
	char rua[50];
	int numero;
	char bairro[20];
	char cidade[30];
	char sigla_estado[3];
	long int cep;
};

struct ficha_pessoal{
	char nome[50];
	long int telefone;
	struct tipo_endereco endereco;
};

int main(){
	struct ficha_pessoal nomeTeste;
	
	// nomeTeste --> Endereço
	strcpy(nomeTeste.endereco.rua, "Conjunto Isabel Cafeteira");
	nomeTeste.endereco.numero = 880;
	strcpy(nomeTeste.endereco.bairro, "Santa Rita");
	strcpy(nomeTeste.endereco.cidade, "Imperatriz");
	strcpy(nomeTeste.endereco.sigla_estado, "MA");
	nomeTeste.endereco.cep = 65919130;
	
	// nomeTeste --> *
	strcpy(nomeTeste.nome, "John Smith");
	nomeTeste.telefone = 40028922;
	
	// imprimir endereço na tela
	printf("# Dados de endereco:\n");
	printf("Endereco: %s\n", nomeTeste.endereco.rua);
	printf("Num: %d\n", nomeTeste.endereco.numero);
	printf("Bairro: %s\n", nomeTeste.endereco.bairro);
	printf("Cidade: %s\n", nomeTeste.endereco.cidade);
	printf("Estado: %s\n", nomeTeste.endereco.sigla_estado);
	printf("CEP: %d\n", nomeTeste.endereco.cep);
	// imprimir dados pessoais
	printf("\n# Dados pessoais:\n");
	printf("Nome: %s\n", nomeTeste.nome);
	printf("Telefone: %d\n", nomeTeste.telefone);

}
