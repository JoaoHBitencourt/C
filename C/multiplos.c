#include <stdio.h>

int main(){

int x, y, troca;

printf("Digite dois numeros inteiros:\n");
scanf("%d %d", &x, &y);

if (x > y)
{
    troca = x;
    x = y;
    y = troca;
}

if (x % 2 == 0 || y % 2 == 0)
{
    printf("sao multiplos");
}
else
{
    printf("nao sao multiplos");
}

    return 0;
}