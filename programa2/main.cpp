#include <iostream>

using namespace std;

/* ingresar  la nota acumulada  y examen y luego  calcular  la nota final  y la observacion  de aprobado  y reprobado.

*/
int main()
{
   int notaA,notaE,notaF;

    cout<< "ingresar nota acumulada..:" ;
    cin >> notaA;

     cout<< "ingresar nota examen..:" ;
    cin >> notaE;


    notaF= notaA + notaE;

    if (notaF>=60)
    {
         cout<< " estado : aprobado";
    }

       else
       {

           cout<< "estado : reprobado";

       }
    cout<<"\n";
    cout<<"nota final  es "<<notaF<<"\n";
    return 0;
}
