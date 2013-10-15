#include <iostream>

using namespace std;
/*
ingresar 5 numeros y contas cuantos son positivos y ceros

 */
int main()
{
    int numero, positivos, negativos, ceros, contador;
    positivos = 0;
    negativos = 0;
    ceros=0;
    contador = 0;

    while ( contador < 5){

        cout << "ingresar numero: ";
        cin >> numero;


        if (numero > 0){
            positivos++;
        }
        else if (numero < 0){
            negativos++;
        }
        else{
            ceros++;
        }
        contador++;
    }

    cout<< endl <<"numeros positivos" << positivos << endl;
    cout<< "numeros negativos" << negativos << endl;
    cout<< "contador de ceros" << ceros << endl;
    return 0;
}
