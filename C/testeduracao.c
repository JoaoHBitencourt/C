#include <stdio.h>

int main(){

int duracao, hora, minutos, segundos, resto, dia, restoDia;

printf("Digite a duracao em segundos: ");
scanf("%d", &duracao);

dia = duracao / 86400;
restoDia = duracao % 86400;

hora = restoDia / 3600;
resto = restoDia % 3600;

minutos = resto / 60;
segundos = resto % 60;


printf("%d Dia %d:%d:%d", dia, hora, minutos, segundos);


    return 0;
}