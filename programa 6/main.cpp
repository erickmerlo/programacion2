#include <iostream>

using namespace std;
/* ingresar nombre del empleado,turno y las horas.
luego determianar el pago por hora, el pago bruto, ihss y total a pagar
turno1= 100
turno2= 150
turno3= 190
para el seguro si el salario es arriba de 7000 es igual a 245 y si no deducir del salario bruto el 3.5%
*/

int main()
{
    char nombre[30];
    int horas, turno, pxh;
    double ihss, tp, pb;

    cout<< "Ingresar el nombre: ";
    cin.getline(nombre,30);

    cout << "Ingresar turno: ";
    cin >> turno;

    cout << "Ingresar horas: ";
    cin >> horas;

    if (turno==1){
        pxh=100;
    }
    else if(turno==2){
        pxh=150;
    }
    else if( turno==3){
        pxh=190;
    }
    else{
        pxh=0;
    }

    pb= pxh*horas;

    if (pb >= 7000){
        ihss=245;
    } else{
        ihss= pb * 0.035;
    }

    tp=pb-ihss;

    cout << endl <<"Nombre de Empleado: " << nombre << endl;
    cout << "Pago por hora: " << pxh << endl;
    cout << "Pago bruto: " << pb << endl;
    cout << "Seguro Social: " << ihss << endl;
    cout << "Total a pagar: " << tp << endl;

    return 0;
}
