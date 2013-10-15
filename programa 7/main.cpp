#include <iostream>

using namespace std;
//operador and

int main()
{
    char nombre[30];
    int na, ne, nf;

    cout << "Ingresar Nombre: ";
    cin.getline(nombre,30);

    cout<< "Nota Acumulada: ";
    cin >> na;

    cout << "Nota Examen: ";
    cin>> ne;

    nf= na + ne;

    if ((nf>=57) and (nf<60)){
        nf= 60;
    }

    cout <<"Nota final es: "<< nf << endl;

    return 0;
}
