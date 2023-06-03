#include <stdio.h>
#include <math.h>

int main (){

int N, linha, coluna;
double somaPositivos;

printf("Qual a ordem da matriz? ");
scanf("%d", &N);

double mat[N][N];

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%lf", &mat[i][j]);
    }
    
}

//soma dos positivos
somaPositivos = 0;
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        if (mat[i][j] > 0)
        {
            somaPositivos = somaPositivos + mat[i][j];
        }
        
    }
    
}
printf("\nSOMA DOS POSITIVOS: %.1lf\n", somaPositivos);

//escolha linhas
printf("\nEscolha uma linha: ");
scanf("%d", &linha);

printf("LINHA ESCOLHIDA: ");

for (int j = 0; j < N; j++)
{
    printf("%.1lf ", mat[linha][j]);
}

//escolha colunas
printf("\n\nEscolha uma coluna: ");
scanf("%d", &coluna);

printf("COLUNA ESCOLHIDA: ");

for (int i = 0; i < N; i++)
{
    printf("%.1lf ", mat[i][coluna]);
}

//diagonal pricipal
printf("\n\nDIAGONAL PRINCIPAL:");
for (int i = 0; i < N; i++)
{
   printf("%.1lf ", mat[i][i]);
}

//calculo da matriz alterada
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        if (mat[i][j] < 0)
        {
            mat[i][j] = pow(mat[i][j], 2);
        }
        
    }
    
}
//apresentação da matriz alterada
printf("\n\nMATRIZ ALTERADA:\n");

for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        { 
            printf("%.1lf ", mat[i][j]);
        }
		printf("\n");
    }

    return 0;
}