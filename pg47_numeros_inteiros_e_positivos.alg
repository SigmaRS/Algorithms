algoritmo "Achar o maior, o menor valor e a média de números inteiros e >= 0"
// Função :
// Autor :
// Data : 11/05/2019
// Seção de Declarações 
var
num, maior, menor: inteiro
soma, media: real
inicio
// Seção de Comandos
menor <- 9999
maior <- -1
soma <- 0

para num de 1 ate 5 faca
     escreval("Digite um número inteiro e positivo:")
     leia(num)
     se (num > maior) entao
        maior <- num
     fimse
     se (num < menor) entao
        menor <- num
     fimse
     soma <- soma + num
     media <- soma / 5
     escreval("O maior valor é: ", maior)
     escreval("O menor valor é: ", menor)
     escreval("A média é: ", media)
fimpara

fimalgoritmo
