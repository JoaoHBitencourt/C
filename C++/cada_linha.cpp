#include<iostream>

using namespace std;

int main(){

    int n, maior;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n], maiorlinha[n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        maior = mat[i][0];
        for(int j = 1; j < n; j++)
        {
            if(maior < mat[i][j])
            {
                maior = mat[i][j];
            }
        }
        maiorlinha[i] = maior;
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << maiorlinha[i] << endl;
    }

    return 0;
}