#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}

int main(){

int N,contIdade;
double alturaMedia, contAltura, porcento;

printf("Quantas pessoas serao digitadas? ");
scanf("%d", &N);

char nome[N][50];
int idade[N];
double altura [N];

for (int i = 0; i < N; i++)
{
    printf("Dados da %da pessoa:\n", i+1);
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome[i], 50);
    printf("Idade: ");
    scanf("%d", &idade[i]);
    printf("Altura: ");
    scanf("%lf", &altura[i]);
}

contAltura = 0;
for (int i = 0; i < N; i++)
{
    contAltura = contAltura + altura[i];
}
alturaMedia = contAltura / N;
printf("\nAltura media: %.2lf\n", alturaMedia);

contIdade = 0;
for (int i = 0; i < N; i++)
{
    if (idade[i] < 16)
    {
        contIdade++;
    }
    
}
porcento = ((double)contIdade / N) * 100;
printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcento);

for (int i = 0; i < N; i++)
{
    if (idade[i] < 16)
    {
        printf("%s\n", nome[i]);
    }
    
}

    return 0;
}