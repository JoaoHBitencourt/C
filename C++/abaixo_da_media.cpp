#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double soma = 0, media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    for(int i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }

    media = soma / n;

    cout << fixed << setprecision(3);
    cout << endl << "MEDIA DO VETOR = " << media << endl;
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    cout << fixed << setprecision(1);

    for(int i = 0; i < n; i++)
    {
        if(vet[i] < media)
        {
            cout << vet[i] << endl;
        }
    }

    return 0;
}