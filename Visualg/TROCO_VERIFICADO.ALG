Algoritmo "troco_verificado"

Var

   preco, dinheiro, troco, resto : real
   
   quantidade : inteiro

Inicio

   escreva("Preco unitario do produto: ")
   leia(preco)
   escreva("Quantidade comprada: ")
   leia(quantidade)
   escreva("Dinheiro recebido: ")
   leia(dinheiro)

   se dinheiro >= (quantidade * preco) entao
      troco <- dinheiro - quantidade * preco
      escreval("TROCO = ", troco:4:2)
      senao
         resto <- quantidade * preco - dinheiro
      escreval("DINHEIRO INSUFICIENTE. FALTAM ", resto, " REAIS ")
   fimse
   
Fimalgoritmo
