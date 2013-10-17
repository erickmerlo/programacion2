#include <iostream>

using namespace std;
/* ingrese 5 numeros presentar el promedio de pares y impares y imprimir el numero mayor*/
int main()
{
    int par=0, impares=0, numero, cont=0, mayor=0, menor=9999999;
    int sumapar=0, sumaimpar=0;
    double promediopares, promedioimpares;

    while (cont < 5){
        cout<< "Ingrese el numero: ";
        cin>> numero;

        if ((numero%2)==0){
            sumapar+= numero;
            par++;
        }

    else {
            sumaimpar+=numero;
            impares++;
    }
        cont++;

        if(numero>mayor){
            mayor=numero;
        }
        if(numero<menor){
            menor=numero;
        }

    }

    cout<< endl << "Numero mayor es: " << mayor<< endl;
    cout<< "Numero menor es: " << menor << endl;

        if (sumapar!=0){
            promediopares=sumapar/par;
    }
    else{
            promediopares=0;
    }
        if (sumaimpar!=0){
            promedioimpares=sumaimpar/impares;
    }
    else {
        promedioimpares=0;
    }

    cout<< endl << "Promedio Pares: " << promediopares << endl;
    cout<< "Promedio Impares: " << promedioimpares << endl;
    return 0;
    }
