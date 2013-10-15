#include <iostream>

using namespace std;

int main()
{
    char nombre[30];
    int na;

    cout << "Ingresar Nombre: ";
    cin.getline(nombre,30);

    cout << "Nota Alumno: ";
    cin>> na;

    if ((na>=1) and (na<=59)){
        cout << "REPROBADO" << endl;
    }
    else if((na>=60) and (na<=80)){
        cout << "BUENO" << endl;
    }
    else if ((na>=81) and (na<=90)){
        cout << "MUY BUENO" << endl;
    }
    else{

        cout << "SOBRESALIENTE" << endl;
    }
    return 0;
}
