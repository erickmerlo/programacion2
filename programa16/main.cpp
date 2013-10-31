#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/* elaborar un programa donde ingresemos un numero, luego preguntar si deseamos ingresar otro numero.
al finalizar presentar la suma de los numeros ingresados.
los numeros deberan estar comprendidos entre 1 y 100
*/

int main()
{
    int numero, suma=0; char resp;

    do{
            do{
        cout<< "Ingresar numero (1-100): ";
        cin >> numero;
            } while ((numero<1) or (numero>100));
            // o while (!((numero>=1) and (numero<=100)));
        _flushall();

        suma+= numero;

        do{
            cout << "Desea continuar: ";
            cin.get(resp);
            _flushall();

        } while ((resp!='N')  and (resp!='S'));

    } while (resp!='N');

    cout << endl << "------Final del programa------" << endl;
    cout << " suma de los numeros: " << suma << endl;


    return 0;
}
