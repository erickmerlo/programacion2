#include <iostream>

using namespace std;
/* ingresar 5 numeros pares. (validar que el numero sea par)
*/

int main()
{
   int numero;


    do{
        cout << "Ingresar un Numero Par: ";
        cin>> numero;
    } while (!((numero%2)==0));


    return 0;
}
