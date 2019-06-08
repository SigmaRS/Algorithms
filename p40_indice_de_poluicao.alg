algoritmo "Índice Poluição"
// Função :
// Autor :
// Data : 11/05/2019
// Seção de Declarações
var
indice: real
inicio
// Seção de Comandos
escreval("Digite o índice de poluição:")
leia(indice)
se (0.05 <= indice) e (indice <= 0.25) entao
   escreval("Índice Aceitável")
senao
   escreval("Índice Desaceitável")
   se (0.25 < indice) e (indice < 0.4) entao
      escreval("Indústrias do 1º grupo não podem mais operar.")
   senao
      se (0.4 <= indice) e (indice < 0.5) entao
         escreval("Indústrias do 1º e 2º grupo não podem mais operar.")
      senao
         se (indice >= 0.5) entao
            escreval("As indústrias do 1º, 2º e 3º não podem mais operar.")
         fimse
      fimse
   fimse
fimse
fimalgoritmo
