#include <stdio.h>
#include <string.h>

int main(){

double C, F;
char escala;

printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
gets(&escala);

if (escala == 'F')
{
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &F);
    C = 5 / 9 * (F -32);
    printf("Temperatura equivalente em Celsius: %.2lf\n", C);
}
else
{
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &C);
    F = C * 9 / 5 + 32;
    printf("Temperatura equivalente em Fahrenheit: %.2lf\n", F);
}

    return 0;
}