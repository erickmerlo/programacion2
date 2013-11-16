#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void ingresar(int &num)
{
    cout<< "Ingresar numero: ";
    cin>> num;
}

int factorial ( int num)
{

    int fac=1;

    if (num>=0)
    {

    for (int cont=1;cont=num;cont++)
    {

    fac=fac*num;
    }
    }
    cout<< "factorial: " << fac << endl;
    return num;
}
int main()
{
    int num;
    for (int i=0; i<5; i++)
    {
        ingresar(num);
        factorial(num);
    }
    return 0;
}
