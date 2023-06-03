#include <stdio.h>

int main (){

int M, N;

printf("Quantas linhas vai ter cada matriz? ");
scanf("%d", &M);
printf("Quantas colunas vai ter cada matriz? ");
scanf("%d", &N);

int a [M][N], b [M][N], c [M][N];

printf("\nDigite os valores da matriz A:\n");

for (int i = 0; i < M; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%d", &a[i][j]);
    }
    
}

printf("\nDigite os valores da matriz B:\n");

for (int i = 0; i < M; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%d", &b[i][j]);
    }
    
}

printf("\nMATRIZ SOMA:\n");

for (int i = 0; i < M; i++)
{
    for (int j = 0; j < N; j++)
    {
        c[i][j] = a[i][j] + b[i][j];
    }
    
}

for (int i = 0; i < M; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("%d ", c[i][j]);
    }
   printf("\n"); 
}

    return 0;
}