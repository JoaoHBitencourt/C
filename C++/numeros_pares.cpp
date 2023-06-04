#include <iostream>

using namespace std;

int main(){

    int n, qtdpares;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << endl << "NUMEROS PARES:" << endl;

    qtdpares = 0;
    for (int i = 0; i < n; i++)
     {
        if(vetor[i] % 2 == 0)
        {
            cout << vetor[i] << " ";
            qtdpares++;
        }
    }

    cout << endl << endl << "QUANTIDADE DE PARES = " << qtdpares << endl;

    return 0;
}