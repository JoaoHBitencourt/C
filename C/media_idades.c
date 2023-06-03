#include <stdio.h>

int main (){

int idade, soma;
double media, cont;

printf("Digite as idades:\n");
scanf("%d", &idade);

soma = 0;
cont = 0;

while (idade >= 0)
{
    soma = soma + idade;
    cont++;

    scanf("%d", &idade);
}

if (cont == 0)
{
    printf("IMPOSSIVEL CALCULAR");
}
else
{
    media = (soma / cont);
    printf("MEDIA = %.2lf", media);
}

    return 0;
}