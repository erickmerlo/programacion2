#include <iostream>

using namespace std;

int main()
{
     int num;

    cout << "Ingresar numero: ";
    cin >> num;

    if (num > 0){
        cout << "EL NUMERO ES POSITIVO" << endl;

    } else if (num < 0){
        cout<< "EL NUMERO ES NEGATIVO" << endl;
    }
     else {
            cout<< "EL NUMERO ES CERO" << endl;
        }


    return 0;
}
