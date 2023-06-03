#include <stdio.h>

int main(){

int quantidade;
double preco, dinheiro, troco, total;

printf("Preco unitario do produto: ");
scanf("%lf", &preco);
printf("Quantidade comprada: ");
scanf("%d", &quantidade);
printf("Dinheiro recebido: ");
scanf("%lf", &dinheiro);

total = preco * quantidade;
troco = dinheiro - total;

printf("TROCO = %.2lf\n", troco);

    return 0;
}