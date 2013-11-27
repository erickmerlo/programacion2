#include <iostream>

using namespace std;
/*
se tienen 3 columnas con 6 lineas, se necesitan dejar la ultima lineas para el promedio de cadda una de las columnas.
elaborar el ingreso, promedio de columnas y presentar arrglos completo
*/

const int lin=6;
const int col=3;

double num[lin][col];

void ingreso(double num[lin][col])
{
    for( int l=0; l<lin-1; l++ )
    {
        for (int c=0; c<col; c++)
        {
            cout<< "Ingresar Datos [" <<l << "," << c <<"]: ";
            cin>> num[l][c];
        }
    }

}

void promedioColumnas(double num[lin][col])
{
    for (int c=0; c<col; c++)
    {
        num[lin-1][c]=0;

        for( int l=0; l<lin-1; l++ )
        {
            num[lin-1][c]+= num[l][c];

        }
        num[lin-1][c]= num[lin-1][c]/(lin-1);
    }
}

void presentar(double num[lin][col])
{
     for( int l=0; l<lin; l++ )
    {
        for (int c=0; c<col; c++)
        {
             cout<< num[l][c] << " ";
        }
        cout<< endl;
        }


    }


int main()
{
        ingreso(num);
        promedioColumnas(num);
        presentar(num);
}
