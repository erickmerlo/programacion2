#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* hacer un procedimiendo que ingrese 1 cadena y que la devuelva al reves*/

using namespace std;

const int n=4;
char cadena[n][30];
char reverza[n][30];


void ingreso (char cadena[n][30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"Ingesar la cadena[" <<i<<"]:";
        cin.getline(cadena[i],30);
        _flushall();
    }
}

void cadenaAlrevez (char cad1[], char cad2[])
{
    int longi=strlen(cad1);
    int i=longi-1;
    int c=0;

    for (i=longi-1;i>=0;i--)
    {
        cad2[c]=cad1[i];
        c++;
    }
}

void todacadena(char cadena[n][30], char reverza[n][30])
{
    int i;
    for(i=0;i<=n;i++)
    {
        cadenaAlrevez(cadena[i],reverza[i]);
    }
}

int cuentapalabra (char cadena[30])
{
    int contador=1;
    int fin=strlen(cadena);

    for(int i=0;i<fin;i++)
    {
        if (cadena[i]==' ')
        {
            contador++;
        }
        else if (cadena[i]==' ' and cadena[i+1]==' ')
        {
            contador--;
        }
    }
    if (cadena[0]==' ')
    {
        contador--;
    }
    else if (cadena[fin-1]==' ')
    {
        contador--;
    }

    return contador;
}

void presentar (char reverza[n] [30])
{
    for (int i=0;i<=n;i++)
    {
        cout <<"La cadena al revez es->["<<i<<"]-->"<<reverza[i]<<endl;
       // cout <<"La cantidad de palabras que tiene esta cadena es-->"<<cuentapalabra(cadena[i])<<endl;
    }
}



int main()
{
    ingreso(cadena);
    todacadena(cadena,reverza);

    presentar(reverza);

    return 0;
}



