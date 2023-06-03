#include <stdio.h>

int main(){

double preco, dinheiro, troco, falta;
int quantidade;

printf("Preco unitario do produto: ");
scanf("%lf", &preco);
printf("Quantidade comprada: ");
scanf("%d", &quantidade);
printf("Dinheiro recebido: ");
scanf("%lf", &dinheiro);

troco = dinheiro - quantidade * preco;

if (troco < 0)
{
    falta = quantidade * preco - dinheiro;
    printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
}
else
{
    printf("TROCO = %.2lf\n", troco);
}





return 0;
}