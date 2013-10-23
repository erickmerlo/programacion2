#include <iostream>

using namespace std;
/* ingresar la base y el exponente y determinar la potencia usando el ciclo for */
int main()
{
    int base, expo, potencia=1;

    cout << "Ingresar Base: ";
    cin >> base;

    cout << "Ingresar Exponente: ";
    cin >>expo;

    for ( int cont=1; cont <= expo; cont++){
        potencia = potencia * base;

    }


    cout << endl << "La Potencia es: "  << potencia << endl;
    return 0;
}
