#include <stdio.h>

int main(){

int minutos;
double valor, resto;

printf("Digite a quantidade de minutos: ");
scanf("%d", &minutos);

valor = 50.00;

if (minutos > 100)
{
    valor = valor + 2 * (minutos - 100);
}

printf("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}