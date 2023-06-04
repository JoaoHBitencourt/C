#include <bits/stdc++.h> //biblioteca universao para tds funções no c++
//#include <iomanip> para fixação do setprecision  
//#include <cmath> para funções matemáticas

using namespace std;

int main(){

    double base, altura, area, perimetro, diagonal;

    cout << "Base do Retangulo: ";
    cin >> base;
    cout << "Altura do Retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}