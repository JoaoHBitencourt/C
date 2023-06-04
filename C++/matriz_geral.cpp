#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    int n, linha, coluna;
    double somapositivos;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double matriz[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    somapositivos = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matriz[i][j] > 0)
            {
                somapositivos = somapositivos + matriz[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "SOMA DOS POSITIVOS: " << somapositivos << endl << endl;

    cout << "Escolha uma linha: ";
    cin >> linha;

    cout << "LINHA ESCOLHIDA: ";

    for(int i = 0; i < n; i++)
    {
        cout << matriz[linha][i] << " ";
    }

    cout << endl << endl << "Escolha uma coluna: ";
    cin >> coluna;

    cout << "COLUNA ESCOLHIDA: ";

    for(int i = 0; i < n; i++)
    {
        cout << matriz[i][coluna] << " ";
    }

    cout << endl << endl << "DIAGONAL PRINCIPAL: ";

    for(int i = 0; i < n; i++)
    {
        cout << matriz[i][i] << " ";
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matriz[i][j] < 0)
            {
                matriz[i][j] = pow(matriz[i][j], 2);
            }
        }
    }

    cout << endl << endl << "MATRIZ ALTERADA:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}