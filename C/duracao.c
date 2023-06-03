#include <stdio.h>

int main(){

int duracao, hora, minutos, segundos, resto;

printf("Digite a duracao em segundos: ");
scanf("%d", &duracao);

hora = duracao / 3600;
resto = duracao % 3600;

minutos = resto / 60;
segundos = resto % 60;


printf("%d:%d:%d", hora, minutos, segundos);


    return 0;
}