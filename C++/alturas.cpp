#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, contMenor;
    double alturaMedia, somaAlturas, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }
    
    somaAlturas = 0;
    for (int i = 0; i < N; i++)
    {
        somaAlturas = somaAlturas + alturas[i];
    }
    alturaMedia = somaAlturas / N;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << alturaMedia << endl;

    contMenor = 0;
    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            contMenor++;
        }
        
    }
    porcentagem = ((double)contMenor / N) * 100;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
        
    }

    return 0;
}