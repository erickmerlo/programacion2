#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/* ingresar el nombre, turno y las horas, usando un procedimiento.
luego, determinar las horas normales usando una funcion,
lo mismo con las horas extras.
las primeras 40 son normales y las demas son extras.

luego determiinar el pago por hora normal y extra usando un procedimiento.

turno           pago normal         pago extra
1                   100                 120
2                   130                 150
3                   140                 160

elaborar una funcion para el ihss.
usando un procedimiento realizar los calculos y en otro procedimiento
presentar los datos.

*/
char nombre[30];
int turno, horas, hn, he;
double pxn, pxe, pn, pe, pb, ihss, tp;

void ingresar(char nombre[], int &horas, int &turno){

    cout<< "ingresar el nombre del empleado: ";
    cin.getline(nombre,30);

    cout<< "horas: ";
    cin>> horas;

    do{
            cout<< "turno1,2,3: ";
            cin>> turno;

    } while ( turno<1 || turno>3);
    _flushall();
}

int horasN(int horas){

    if(horas>40){
        return 40;
    }
    else{
        return horas;
    }
}

int horasE (int horas){

    if(horas>40){
        return horas-40;
    }
    else{
        return 0;
    }
}

void pagos(int turno, double &pxn, double &pxe){

    switch (turno){

    case 1:
        pxn=100;
        pxe=120;
        break;
    case 2:
        pxn=130;
        pxe=150;
        break;
    default:
        pxn=140;
        pxe=160;
        break;
    }
}

double seguro(double sueldo){

    if (sueldo >7000){
        return 245;
    }
    else {
        return 0.035 *sueldo;
    }
}

void calcular(int turno, int horas, int &he, int &hn, double &pxn, double &pxe,
              double &pn, double &pe, double &pb, double &ihss, double &tp){

    hn=horasN(horas);
    he=horasE(horas);

    pagos(turno, pxn, pxe);

    pn= hn * pxn;
    pe= he * pxe;

    pb= pn + pe;

    ihss=seguro(pb);

    tp= (pn + pe)- ihss;
}

void presentar ( int he, int hn, double pxn, double pxe, double pn, double pe, double pb, double ihss, double tp){

    cout << endl <<"horas normales: " << hn << endl;
    cout << "horas extras: " << he << endl;
    cout << "pago hora normal: " << pxn << endl;
    cout << "pago hora extra: " << pxe << endl;
    cout << "pago normal: " << pn << endl;
    cout << "pago extra: " << pe << endl;
    cout << "pago bruto: " << pb << endl;
    cout << "ihss: " << ihss << endl;
    cout << "total a pagar: " << tp << endl;
}


int main()
{
    ingresar (nombre, horas, turno);
    calcular (turno, horas, he, hn, pxn, pxe, pn, pe, pb, ihss, tp);
    presentar (he, hn, pxn, pxe, pn, pe, pb, ihss, tp);

    return 0;
}
