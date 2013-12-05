#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*
Prueba #5
Se tiene el siguiente registro:
Nombre
Ventas
Turno
Porcomision
Comisión
Ihss
TotalPagar

Elaborar un programa para el ingreso del nombre, ventas y turno (que solo sea 1,2,3).
Luego se deberá de elaborar una función para determinar el porcentaje de comisión usando la siguiente tabla :
	Turno		porcomision
	1			3%
    2			5%
    3			6%
Elaborar una función para determinar el ihss.
Elaborar un procedimiento para determinar la comisión , ihss, y total a pagar .
Elaborar un procedimiento para presentar los datos del registro.
*/

using namespace std;

struct empleado
{
     char nombre[30];
    int turno;
    double ventas;
    double comision;
    double ihss;
    double tp;
    double pc;
    double tb;
};
empleado emplex;

void ingreso(empleado &emplex)
{
    cout<<"Ingresar el Nombre: ";
    cin.getline(emplex.nombre,30);
    _flushall();
    cout<<"Ventas: ";
    cin>>emplex.ventas;
    _flushall();

    do
    {
        cout<<"Ingresar   Turno  del empleado (1,2,3) :  ";
        cin>>emplex.turno;

    }while(!((emplex.turno>=1) and (emplex.turno<=3)));
}

int seguro (double ventas)
 {
     if (ventas >=7000)
        {
          return 245;
        }
        else
        {
            return 0.035 * ventas;

        }
 }

double  comisiones(int turno)
{
    switch (turno)
    {
        case 1:
            return 0.03;
            break;

        case 2:
            return 0.05;
            break;

        default:
            return 0.06;
            break;
    }
}

void calcular (empleado  &emplex)
{
    emplex.pc = comisiones(emplex.turno);
    emplex.comision = emplex.pc * emplex.ventas;
    emplex.ihss = seguro(emplex.ventas) - emplex.tb;
    emplex.tb = emplex.ventas + emplex.comision;
    emplex.tp = emplex.tb  - emplex.ihss;
}

void presentar (empleado emplex)
{
    cout<< endl << "Nombre Empleado  : "<<emplex.nombre << endl;
    cout<<"% de Comision: "<<emplex.pc<< "LPS" << endl;
    cout<<"Pago x Comision: "<<emplex.comision<< "LPS" << endl;
    cout<<"Seguro Social: "<<emplex.ihss<< "LPS"<< endl;
    cout<<"Total pago Bruto:  "<<emplex.tb<< " LPS" << endl;
    cout<<"Total a Pagar: "<<emplex.tp << "LPS" << endl;

}


int main()
{
        ingreso (emplex);
        calcular (emplex);
        presentar (emplex);

        return 0;
}
