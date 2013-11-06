#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

/*
ingrsar el nombre del  empleado, el turno y las ventas.
validar que el turno sea 1,2,3. (usar un procedimiento)

calcular usando un procedimiento la comision ganada, el ihss, y total a pagar. (1=5%, 2=3%, 3=6%)

presentar los datos calculados usando un procedimiento
*/
char nombre[30];
int ventas, turno, ihss, comision, tp, pb;

void ingreso (char nombre[], int &turno, int &ventas){

    cout<< "ingresar nombre: ";
    cin.getline(nombre, 30);

    do{
        cout<< "ingresar turno(1,2,3): ";
        cin>> turno;

    } while ( turno<1 and turno>3);

    cout<< "ingresar las ventas: ";
    cin>> ventas;
}

void calcular (int turno, int &comision, int &ihss, int &pb, int &tp) {

    if (turno ==1){
      comision = ventas * 0.05;

    } else if (turno ==2){
        comision = ventas * 0.03;

    } else if (turno == 3){
        comision = ventas * 0.06;

    }

    pb = comision + ventas;

    if (pb >= 7000){
        ihss=245;
     } else{
        ihss= pb * 0.035;
     }

     tp = pb - ihss;

}

void presentar ( int pb, int ihss, int comision, int tp){

    cout<< endl << "pago bruto: " << pb << endl;
    cout<< "seguro social: " << ihss << endl;
    cout<< "comision: " << comision << endl;
    cout<< "total a pagar: " << tp << endl;

}
int main()
{
    ingreso (nombre, turno, ventas);
    calcular(turno, comision, ihss, pb, tp);
    presentar(pb, ihss, comision, tp);


    return 0;
}
