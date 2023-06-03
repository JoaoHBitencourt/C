#include <stdio.h>

int main(){

int porcentagem;
double salario, novoSalario, aumento;

printf("Digite o salario da pessoa: ");
scanf("%lf", &salario);

aumento = 0;
novoSalario = 0;
porcentagem = 0;

if (salario <= 1000)
{
    aumento = salario * 20 / 100;
    novoSalario = aumento + salario;
    porcentagem = 20;
}
else if (salario <= 3000)
{
    aumento = salario * 15 / 100;
    novoSalario = aumento + salario;
    porcentagem = 15;
}
else if (salario <= 8000)
{
    aumento = salario * 10 / 100;
    novoSalario = aumento + salario;
    porcentagem = 10;
}
else
{
    aumento = salario * 5 / 100;
    novoSalario = aumento + salario;
    porcentagem = 5;
}

printf("Novo salario = R$ %.2lf\n", novoSalario);
printf("Aumento = R$ %.2lf\n", aumento);
printf("Porcentagem = %d %%\n", porcentagem);

    return 0;
}