#include <iostream>

using namespace std;
// ciclo for

/* ingresar 5 numeros y determinar cuantos son divisibles entre 3 */
int main()
{
    int numero, cdiv3, suma;
    double promedio;
    cdiv3=0;
    suma=0;

    for( int i=0; i <5 ; i++){

        cout << "Ingresar un numero entero: ";
        cin >> numero;
        if((numero % 3)==0){
            suma+= numero;
            cdiv3++;
        }
    }
        if (cdiv3 > 0){
        promedio = suma / cdiv3;

        } else {
            promedio =0;
        }

    cout << endl << "Contador de divisibles entre 3 es: " << cdiv3 << endl;
    cout << "Promedio de los divisibles entre 3: " << promedio << endl;

    return 0;
}
