#include <iostream>

using namespace std;

/*Ingresar el mes , el día , el año y determinar si la fecha esta correcta.

se tiene que validar si el mes esta correcto, si el día corresponde al mes y si el año es mayor a cero.*/

int main()
{
    int dias, mes, anio;
    while ((dias<1) or (dias>28)){

        cout<< "INGRESE DIA: ";
        cin>> dias;

    }

    while ((mes<1) or (mes>12)){

        cout<< "INGRESE MES: ";
        cin>> mes;


           }

    if(anio < 0){
        cout<< "INGRESE ANIO: ";
        cin>> anio;
        }

 cout<< endl << "DIA: " << dias << "\t MES: " << mes << "\t ANIO: "<< anio << endl;



   return 0;
}

