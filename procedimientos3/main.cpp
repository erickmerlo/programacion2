#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/* ingresar el nombre del empleado, las horas y el turno usando un procedimiento.

luego determinar el pxh usando el turno, el pago de horas, ihss y total pagar usando
un procedimientos.

turno pxh
1     100
2     150
3     180

presentar los datos usando un procedimiento
*/
char nombre[30];
int turno, horas, pb, ihss, tp, pxh;

void ingresar (char nombre[], int &turno, int &horas ){

    cout<< "ingresar nombre: " ;
    cin.getline(nombre,30);

    cout<< "horas trabajadas: ";
    cin>> horas;

    do{
            cout<< "ingresar turno: ";
            cin>> turno;

    }while (turno <1 or turno >3);

    _flushall();
}

void calcular (int turno, int horas, int &pxh, int &pb, int &ihss, int &tp){

   switch (turno){

   case 1:
       pxh = 100;
       break;

   case 2:
        pxh = 150;
        break;

   default:
       pxh = 180;
       break;

   }

   pb = pxh * horas;

   if (pb > 7000){
        ihss=245;

     } else{
        ihss= pb * 0.035;
     }

     tp = pb - ihss;
}

void presentar (int pxh, int pb, int ihss, int tp){

    cout<< endl << "pago por hora: " << pxh << endl;
    cout<< "pago bruto: " << pb << endl;
    cout<< "seguro social: " << ihss << endl;
    cout<< "total a pagar: " << tp << endl;
}

int main()
{
    for (int i=0; i<3; i++){

        ingresar (nombre, turno, horas);
        calcular (turno, horas, pxh, pb, ihss, tp);
        presentar (pxh, pb, ihss, tp);

    }
    return 0;
}
