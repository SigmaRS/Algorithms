algoritmo "Excedente de pesca"
// Data : 11/05/2019
// Seção de Declarações
var
peso, excedente: real
inicio
// Seção de Comandos
escreva("Insira quantos quilogramas João pescou: ")
leia(peso)
se (peso > 50) entao
   excedente <- peso - 50
   escreval("Excedente de:", excedente, "kg")
   escreval("A multa é de: R$", excedente * 4, ",00")
senao
   escreval("Peso não excedente. Não há multas a pagar.")
fimse
fimalgoritmo
