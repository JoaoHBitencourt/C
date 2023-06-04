Algoritmo "dados_pessoas.curso"

Var

   N, i, contHomens,contMulheres : inteiro
   menorAltura, maiorAltura, media, soma : real
   altura : vetor [0..99] de real
   genero : vetor [0..99] de caractere

Inicio

   escreva("Quantas pessoas serao digitadas? ")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreva("Altura da", i+1,"a pessoa: ")
      leia(altura[i])
      escreva("Genero da", i+1,"a pessoa: ")
      leia(genero[i])
   fimpara
   
   menorAltura <- altura[0]
   maiorAltura <- altura[0]
   para i de 1 ate N-1 faca
      se altura[i] < menorAltura entao
         menorAltura <- altura[i]
      fimse
      
      se altura[i] > maiorAltura entao
         maiorAltura <- altura[i]
      fimse
   fimpara

   escreval("Menor altura = ",menorAltura:3:2)
   escreval("Maior altura = ",maiorAltura:3:2)
   
   contMulheres <- 0
   soma <- 0
   para i de 0 ate N-1 faca
      se genero[i] = "F" entao
         contMulheres <- contMulheres + 1
         soma <- soma + altura[i]
      fimse
   fimpara
   
   se contMulheres = 0 entao
      escreval("Impossivel caucular a altura media das mulheres")
   senao
      media <- soma / contMulheres
      escreval("Media das alturas das mulheres = ", media:3:2)
   fimse
   
   contHomens <- N - contMulheres
   escreval("Numero de homens = ", contHomens)
   
Fimalgoritmo