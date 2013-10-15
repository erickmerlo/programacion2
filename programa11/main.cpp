#include <iostream>

using namespace std;
/* ingresar la cantidad de numeros que necesitamos pedir
luego ingresar el numero y determinar si es par o impar
al final presentar cuantos fueron pares e impares*/
int main()
{
 int numero, contador=0, cimpar=0, cpar=0, nveces;


    cout << "Cuantos numeros desea ingresar: ";
    cin >> nveces;

    while (contador < nveces){

        cout<< "ingresar un numero: ";
        cin >> numero;

        if (numero % 2 ==0){
            cout<< "el numero es Par" << endl;
            cpar++;
        }
        else{
            cout<< "el numero es Impar"<< endl;
            cimpar++;
        }
            contador++;
    }
    cout<< endl <<"Numero de Pares es: " << cpar<< endl;
    cout<< endl <<"Numero de Impares es: " << cimpar << endl;


    return 0;
}
