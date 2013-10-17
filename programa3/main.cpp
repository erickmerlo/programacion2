#include <iostream>

using namespace std;

int main()
{
    int horas;
    double pxh,salario,deduccion,tp;

    cout << "ingresar  las horas...>" ;
    cin>> horas;

    cout << "ingresar pago por hora...>";
    cin>>pxh;

    salario = horas * pxh;

    deduccion  =  salario * 0.05;

    tp= salario - deduccion;

    cout<<"salario"<<salario<<"\n";
    cout<<"deduccion"<<deduccion<<"\n";
    cout<<"total a pagar"<<tp<<"\n";

    return 0;
}
