Algoritmo "experiencias"


Var

   N, i, C, R, S, x, cobaias : inteiro
   Pc, Pr, Ps : real
   tipoDeCobaia : caractere

Inicio
   C <- 0
   R <- 0
   S <- 0
   cobaias <- 0
   
   escreva("Quantos casos de teste serao digitados? ")
   leia(N)
   
   para i de 1 ate N faca
   
      escreva("Quantidade de cobaias: ")
      leia(x)
      escreva("Tipo de cobaia: ")
      leia(tipoDeCobaia)
      
      cobaias <- cobaias + x
      
      escolha tipoDeCobaia
      caso "C"
         C <- C + x
      caso "R"
         R <- R + x
      caso "S"
         S <- S + x
      fimescolha
      
   fimpara

   escreval
   
   escreval("RELATORIO FINAL:")
   escreval("Total: ", cobaias,  " cobaias")
   escreval("Total de coelhos: ", C)
   escreval("Total de ratos: ", R)
   escreval("Total de sapos: ", S)
   
   Pc <- C * 100 / cobaias
   Pr <- R * 100 / cobaias
   Ps <- S * 100 / cobaias
   
   escreval("Percentual de coelhos: ", Pc:4:2)
   escreval("Percentual de ratos: ", Pr:4:2)
   escreval("Percentual de sapos: ", Ps:4:2)
   
Fimalgoritmo