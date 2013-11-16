#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int sueldo, ihss;

int seguro_social (int sueldo){

    int ihss;
    if (sueldo>7000){
        ihss=245;
    }
    else {
        ihss=0.035*sueldo;
    }
    return ihss;
}

int main()
{
    cout<< "ingresar su sueldo: ";
    cin>> sueldo;

    ihss= seguro_social(sueldo);

    cout<<"seguro social: " << ihss << endl;

    return 0;
}
