#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int idade, npessoas;
    double soma, media;

    npessoas = 0;
    soma = 0;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    if(idade < 0)
    {
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else
    {
        while(idade >= 0)
        {
            soma = soma + idade;
            npessoas++;
            cin >> idade;
        }

        media = soma / npessoas;

        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }

	return 0;
}