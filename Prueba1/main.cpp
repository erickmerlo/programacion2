#include <iostream>

using namespace std;

/* Ingresar el Nombre del Empleado,las horas trabajadas,luego determinar las horas normales que son
    las primeras 40 y las extras que son las mayores a 40.
    Debera de obtener pago por hora usando el turno, luego un bono, el pago bruto que son la suma de los pagos normales y extras.
    ihss y total a pagar.

    turno   tpn tpe
    1       100 130
    2       135 140
    3       140 150

   El bono si el empleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y sino es de 100.

   El pago bruto mayor a 7000 es 245 y sino el pago bruto por 3.5%
   */

int main()
{
    char nombre[30];
    int horas, hnormales, hextras, turno, bono, pnormales, pextras;
    double ihss, pbruto, tpn, tpex, totalpagar;

    cout << "Ingresar el Nombre del Empleado: ";
    cin.getline(nombre,30);

    cout << "Ingresar las Horas: ";
    cin>> horas;

    cout<<"Ingresar el turno: ";
    cin>> turno;


    if (horas > 40){
            hnormales = 40;
            hextras = horas - 40;

    } else {
            hnormales = horas;
            hextras = 0;
    }

    if ( turno == 1 ){
        tpn = horas * 100;
        tpex = hextras * 130;


    } else if ( turno == 2 ){
        tpn = horas * 135;
        tpex = hextras * 140;

    } else if ( turno == 3) {
        tpn = horas * 140;
        tpex = hextras * 150;

    }

    pnormales = hnormales + tpn;
    pextras = hextras + tpex;

    pbruto = pnormales + pextras;

    if ( pbruto >= 7000){
        ihss = 245;

    } else if ( pbruto < 7000){
        ihss = pbruto * 0.035;

    }

    if ((horas >45) and (turno == 1)){
            bono = 300;

    } else {
            bono = 100;
    }

    totalpagar = (pbruto - ihss) + bono;

    cout << endl << "Nombre del Empleado: " << nombre << endl;
    cout << "Turno del Empleado: " << turno << endl;
    cout << "El bono del Empleado es: " << bono << endl;
    cout << "Seguro Social del Empleado: " << ihss << endl;
    cout << "El Salario del Empleado es: " << totalpagar << endl;


return 0;
    }


