algoritmo "Quadrado de números"
// Data : 11/05/2019
// Seção de Declarações
var
n1, n2, n3, n4: inteiro
q1, q2, q3, q4: inteiro
inicio
// Seção de Comandos
escreval("Digite o 1º número:")
leia(n1)
escreval("Digite o 2º número:")
leia(n2)
escreval("Digite o 3º número:")
leia(n3)
escreval("Digite o 4º número:")
leia(n4)
q1 <- n1 * n1
q2 <- n2 * n2
q3 <- n3 * n3
q4 <- n4 * n4
se (q3 >= 1000) entao
   escreval("O quadrado de ", n3, " é ", q3)
senao
    escreval("O quadrado de ", n1, " é ", q1)
    escreval("O quadrado de ", n2, " é ", q2)
    escreval("O quadrado de ", n3, " é ", q3)
    escreval("O quadrado de ", n4, " é ", q4)
fimse
fimalgoritmo
