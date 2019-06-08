algoritmo "Salario e adicional de horas extras"
// Data : 11/05/2019
// Seção de Declarações
var
// c - código funcionário
// p - pagamento
// n - número de horas
// ex - excesso de horas (horas extras)
c, p, n, ex: inteiro

inicio
// Seção de Comandos
escreval("Digite o número de identificação do funcionário:")
leia(c)
escreval("Insira o número de horas trabalhadas pelo funcionário:")
leia(n)
escreval("Funcionário: ", c)
se (n > 50) entao
   ex <- n - 50
   escreval("Horas extras: ", ex, "h")
   escreval("Adicional das horas extras: R$", ex * 20)
   escreval("Salário: R$", (n - ex) * 10  + ex * 20)
senao
   escreval("Salário: R$", n * 10)
fimse
fimalgoritmo
