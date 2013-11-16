#include <iostream>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

/*
PRUEBA PROGRAMACIÓN II

Se tiene que ingresar un número entero, que
sea par o divisible entre 5 usando un procedimiento.

Luego determinar cuantas cifras tiene el número
usando un procedimiento, deberá de ingresar el número generado en el
procedimiento anterior y obtener el número de cifras que será un parámetro de
variable porque va a salir su valor  del procedimiento.

*/
int num, cifras;

void ingresar (int &numero)
    {
        do{
           cout<<"Ingresar Numero: ";
           cin>>numero;

        }while(!(numero%2 ==0 or numero%5 ==0));

    }

void cifra(int &cifras){

        cifras=0;

        while(num!=0){

            num=num/10;
            cifras++;
        }

        cout<< endl <<"Cantidad de Cifras: "<<cifras<<endl;
        cout<< endl;
    }


int main()
{

    for(int x=0;x<5;x++){

        ingresar(num);
        cifra(cifras);

    }

    return 0;
}

