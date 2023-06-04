#include <stdio.h>

int main(){

    int n, somapares, npares;
    double mediapares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) 
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    somapares = 0;
    npares = 0;
    for (int i = 0; i < n; i++) 
    {
        if (vetor[i] % 2 == 0) 
        {
            somapares = somapares + vetor[i];
            npares++;
        }
    }

    if (npares == 0) 
    {
        printf("NENHUM NUMERO PAR\n");
    }
    else 
    {
        mediapares = (double)somapares / npares;

        printf("MEDIA DOS PARES = %.1lf\n", mediapares);
    }
	
    return 0;
}