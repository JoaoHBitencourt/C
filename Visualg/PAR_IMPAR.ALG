Algoritmo "par_impar"

Var

   N, i, x : inteiro

Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia(N)

   para i de 1 ate N faca
      escreva("Digite um numero: ")
      leia(x)
      
      se (x > 0) e (x % 2 <> 0)entao
         escreval("IMPAR POSITIVO")
      senao
        se (x < 0) e (x % 2 <> 0)entao
         escreval("IMPAR NEGATIVO")
        senao
           se x > 0 entao
              escreval("PAR POSITIVO")
           senao
              se x < 0 entao
                 escreval("PAR NEGATIVO")
              senao
                 escreval("NULO")
              fimse
           fimse
        fimse
      fimse
   fimpara
Fimalgoritmo