#include <iostream>

using namespace std;

int main()
{
    int num, sum=0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while ( num != 0){ //cada vez que se ejecuta el ciclo se suma uno de los digitos, hasta que num llegue a tener valor cero.

        sum+= (num%10); // mode retorna el residuo de una division entre dos numeros
        num= num/10;

    }

    cout << endl << "La Suma del Numero es -----> " << sum << endl;
    return 0;
}
