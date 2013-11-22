#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int tam=5;
int num[5];

/*void ingreso(int num)
{
    for( int i=0; i<tam; i++)
    {
        do
        {
            cout<< "Ingresar Numeros Pares: ";
            cin>> num[i];

        } while ( num[i]%2== 0);
    }
}*/

int main()
{
     for( int i=0; i<tam; i++)
    {
        do
        {
            cout<< "Ingresar Numeros Pares: ";
            cin>> num[i];

        } while ( !(num[i]%2 == 0));
    }
    return 0;
}
