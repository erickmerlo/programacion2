#include <iostream>

using namespace std;

int main()
{
    int num, suma=0, cifra, mayor=0, menor=9, cont=0, par=0, impar=0;
    double  prom;

    cout<< "Ingresar numero: ";
    cin>> num;

    cout << endl <<"Numero al revez: ";

    while(num>0){
        cifra = num %10;
        cout<< cifra;
        num= num/10;
        suma+=cifra;


        if (cifra > mayor){
            mayor = cifra;
        }
        if (cifra < menor){
            menor = cifra;
        }

        if ((cifra %2) ==0){
            par++;
        }else {
            impar++;
        }

        cont++;
    }

    prom= suma/ cont;
    cout<< endl << "Suma de las cifras: " << suma << endl;
    cout<< "La cifra mayor es: " << mayor << endl;
    cout<< "La cifra menor es: " << menor << endl;
    cout<< "Promedio: " << prom << endl;
    cout<< "Cifras pares: " << par << endl;
    cout<< "Cifras impares: " << impar << endl;
    return 0;
}
