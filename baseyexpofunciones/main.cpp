#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

char respuesta()
{
    char resp;
    do
    {
        cout<< "desea continuar: ";
        _flushall();
        cin.get(resp);
    } while ((resp!='s') and (resp!='n'));

    return resp;
}

void ingreso (int &base, int &expo)
{

    cout<<"Ingresar Base: ";
    cin>>base;

    cout<<"ingresar Exponente: ";
    cin>>expo;

}
 int potencia(int base, int expo)
 {
     int pot=1, cont = 1;
    while (cont <= expo){

        pot = pot * base;
        cont++;
    }
    return pot;
 }

int main()
{
    char resp;
    int base, expo,poten;

    do
    {
        ingreso(base,expo);
        poten=potencia(base, expo);
        cout<< "la potencia es: " << poten << endl;
        resp=respuesta();

    } while (resp!='n');

    return 0;
}
