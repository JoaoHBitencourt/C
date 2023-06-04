Algoritmo "dados_pessoas"

Var

   N, i, homens,contMulheres : inteiro
   menorAltura, maiorAltura, media, mulheres : real
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
   
   homens <- 0
   contMulheres <- 0
   mulheres <- 0
   para i de 0 ate N-1 faca
      se genero[i] <> "F" entao
         homens <- homens + 1
      senao
         contMulheres <- contMulheres + 1
         mulheres <- mulheres + altura[i]
      fimse
   fimpara
   
   media <- mulheres / contMulheres
   escreval("Media das alturas das mulheres = ", media:3:2)
   escreval("Numero de homens = ", homens)
   
Fimalgoritmo