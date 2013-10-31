#include <iostream>
#include <stdio.h>
/* Ingresar un numero comprendido entre 50-150 y tiene que ser par, validar el ingreso usando do/while,
luego preguntar si desea continuar usar una variable de tipo char para la respuesta
y esta deberá de ser validada para que solo responda S o N, al final presentar cual fue el numero mayor y menor
     */
using namespace std;

    int main()
{
    char respuesta;
    int numero, mayor=0, menor=999, cpar=0;


        do{
            do{

            cout<<"Ingrese numero par(50-150): ";
            cin>>numero;
            if( numero%2==0)
            cpar++;

                if (numero>=mayor)
                mayor=numero;
                if (numero<=menor)
                menor=numero;

            }while(numero<50 or numero>150 or numero%2!=0);

            do{

                cout<<"Desea continuar?(S/N): ";
                cin>>respuesta;

            } while(respuesta!= 'S' and respuesta!='N');

            if(respuesta=='N'){

                cout <<endl<<"El numero mayor es: " <<mayor;
                cout <<endl<<"El numero menor es: " <<menor;
                cout <<endl<<"Cantidad de numeros ingresados(pares): "<<cpar;
            }


            }while(respuesta=='S');

    return 0;
}
