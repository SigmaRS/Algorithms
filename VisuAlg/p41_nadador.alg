algoritmo "Idade e classificação de um nadador"
// Data : 11/05/2019
// Seção de Declarações
var
idade: inteiro
inicio
// Seção de Comandos
escreval("Digite a idade do competidor: ")
leia(idade)
se (idade > 18) entao
   escreval("Classificação: Adultos")
senao
   se (14 <= idade) e (idade <= 17) entao
      escreval("Classificação: Juvenil B")
   senao
      se (12 <= idade) e (idade <= 13) entao
         escreval("Classificação: Juvenil A")
      senao
         se (8 <= idade) e (idade <= 11) entao
            escreval("Classificação: Infantil B")
         senao
            se (5 <= idade) entao
               escreval("Classificação: Infantil A")
            senao
               escreval("Inapto para competir")
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
