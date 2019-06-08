algoritmo "Salario e adicional de horas extras"
// Data : 11/05/2019
// Seção de Declarações 
var
id, salario, horas, excesso: inteiro

inicio
// Seção de Comandos
escreval("Digite o número de identificação do funcionário:")
leia(id)
escreval("Insira o número de horas trabalhadas pelo funcionário:")
leia(horas)
se (horas > 50) entao
   excesso <- horas - 50
   escreval("Horas extras: ", excesso, "h")
   escreval("Adicional das horas extras: R$", excesso * 20)
   salario <- (horas - excesso) * 10  + excesso * 20
senao
   salario <- horas * 10
fimse
escreval("Salário: R$", salario)
fimalgoritmo
