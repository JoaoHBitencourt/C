#include <stdio.h>

int main(){

double medida;

printf("Digite a medida da glicose: ");
scanf("%lf", &medida);

printf("Classificacao: ");
if (medida <= 100)
{
    printf("Normal");
}
else if (medida <= 140)
{
    printf("Elevado");
}
else
{
    printf("Diabetes");
}

    return 0;
}