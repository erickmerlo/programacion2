#include <iostream>

using namespace std;

/*
ingresar 5 numeros a un arreglos.
lo numeros deberan de estar entre 50-100
usando una funcion debera de obtener la suma de los numeros divisibles entre 5,

crear un funcion para determinar el promedio de los numeros pares.
crear un procedimiento para presentar el arreglo
crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros pares.
*/
const int tam=5;
int num[5];

void ingreso(int num[])
{
    for( int i=0; i<tam; i++)
    {
        do
        {
            cout<< "Ingresar Numero: ";
            cin>> num[i];

        }while (!(num[i]>=50 and num[i]<=100));
    }
}

int sumanumdiv5 (int num[])
{
    int suma =0;
    for( int i=0; i<tam; i++)
    {
            if ( num[i]%5 == 0)
            {
                suma+=num[i];
            }
    }

    return suma;
}

int promNumPares(int num[])
{
    int suma=0;
    for( int i=0; i<tam; i++)
    {
        if( num[i]%2 ==0)
        {
           suma+=num[i];
        }

    }

    return suma/tam;
}

void presentar(int num[])
{
    for( int i=0; i<tam; i++)
    {
        cout<< " " << num[i];
    }
}

void sustituir(int num[])
{
    for( int i=0; i<tam; i++)
    {
        if(num[i]%2==0)
        {
            num[i]=0;
        }
    }
}
int main()
{
    int suma5, prom;

    ingreso(num);

    suma5 = sumanumdiv5(num);
    prom = promNumPares(num);

    cout<< endl <<"Suma numeros div5: " << suma5 << endl;
    cout<< "Promedio numeros pares: " << prom << endl;

    sustituir(num);
    cout<< "Sustitucion num pares X 0: " << endl;
    presentar(num);


    return 0;
}
