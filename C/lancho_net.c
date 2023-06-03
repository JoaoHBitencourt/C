#include <stdio.h>

int main(){

int codigo, qtd;
double valor;

printf("Codigo do produto comprado: ");
scanf("%d", &codigo);
printf("Quantidade comprada: ");
scanf("%d", &qtd);

switch (codigo)
{
case 1:
    valor = qtd * 5.00;
    break;
case 2:
    valor = qtd * 3.50;
break;
case 3:
    valor = qtd * 4.80;
break;
case 4:
    valor = qtd * 8.90;
break;
case 5:
    valor = qtd * 7.32;
break;
default:printf("Erro: valor invalido! Digite somente valores de 1 a 5\n");
}

printf("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}