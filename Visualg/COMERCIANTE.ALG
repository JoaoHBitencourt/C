Algoritmo "comerciante"

Var

   N, i, lucroAcima, lucroEntre, lucroAbaixo : inteiro
   totalCompras, totalVendas, lucro, porcentagem : real
   nomes : vetor [0..9] de caractere
   compras, vendas : vetor [0..9] de real

Inicio

   escreva("Serao digitados dados de quantos produtos? ")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreval("Produto", i+1,":")
      escreva("Nome: ")
      leia(nomes[i])
      escreva("Preco de compra: ")
      leia(compras[i])
      escreva("Preco de venda: ")
      leia(vendas[i])
   fimpara
   escreval
   
   escreval("RELATORIO:")
   
   lucroAbaixo <- 0
   lucroEntre <- 0
   lucroAcima <- 0
   porcentagem <- 0
   para i de 0 ate N-1 faca
      porcentagem <- (vendas[i] - compras[i]) / compras[i] * 100
      se porcentagem < 10 entao
         lucroAbaixo <- lucroAbaixo + 1
      senao
         se porcentagem <= 20 entao
            lucroEntre <- lucroEntre + 1
         senao
            porcentagem > 20 entao
            lucroAcima <- lucroAcima + 1
         fimse
      fimse
   fimpara
   
   escreval("Lucro abaixo de 10%: ", lucroAbaixo)
   escreval("Lucro entre 10% e 20%: ", lucroEntre)
   escreval("Lucro acima de 20%: ", lucroAcima)
   
   totalCompras <- 0
   totalVendas <- 0
   para i de 0 ate N-1 faca
      totalCompras <- totalCompras + compras[i]
      totalVendas <- totalVendas + vendas[i]
   fimpara
   escreval("Valor total de compra: ", totalCompras:4:2)
   escreval("Valor total de venda: ", totalVendas:4:2)
   
   lucro <- totalVendas - totalCompras
   escreval("Lucro total: ", lucro:4:2)
   
Fimalgoritmo