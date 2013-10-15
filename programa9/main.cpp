#include <iostream>

using namespace std;
/* estructura de repeticion
ingresar 5 numeros y representar al final del cicl la suma delos numeros ingresados
*/
int main()
{
   int numero, contador,suma;
    contador=0;
    suma=0;
    while (contador < 5){
        cout << "Ingresar un numero: ";
        cin >> numero;

        contador++; //contador = contador + 1

        suma+= numero; // suma = suma + numero
    }

    cout << endl << "LA SUMA DE LOS NUMEROS ES: " << suma <<endl;
    return 0;
}
