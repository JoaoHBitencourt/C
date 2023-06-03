#include <stdio.h>

int main(){

int N, resp;

printf("Deseja a tabuada para qual valor? ");
scanf("%d", &N);

for (int i = 1; i <= 10; i++)
{
    resp = i * N;
    printf("%d X %d = %d\n", N, i, resp); 
}

    return 0;
}