#include <stdio.h>

int main(){

int horaInicial, HoraFinal, duracao;

printf("Hora inicial: ");
scanf("%d", &horaInicial);
printf("Hora final: ");
scanf("%d", &HoraFinal);

if (HoraFinal > horaInicial)
{
    duracao = HoraFinal - horaInicial;
}
else
{
    duracao = (24 - horaInicial) + HoraFinal;
}

printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}