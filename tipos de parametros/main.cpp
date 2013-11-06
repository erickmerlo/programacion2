#include <iostream>

using namespace std;

void calcular( int &sueldo, int&ihss){

    if (sueldo >= 7000){
        ihss=245;
     } else{
        ihss= sueldo * 0.035;
     }

        sueldo = sueldo * 1.20;
}

int main()
{
        int sueldo, ihss=0;

        cout<< "ingresar el sueldo: ";
        cin>> sueldo;

        calcular (sueldo, ihss);

        cout<< "sueldo: " << sueldo << endl;
        cout<< "ihss: " << ihss << endl;
    return 0;
}
