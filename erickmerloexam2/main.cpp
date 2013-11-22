#include <iostream>

using namespace std;

const int tam=5;
int num[5];

void ingreso(int num[])
{
    for( int i=0; i< tam; i++)
    {
        do
        {
            cout << "ingrese numero: ";
            cin>> num[i];
        } while (!(num[i]%2 == 0));
    }
}

int sumaMayores(int num[])
{
    int suma=0;
    for( int i=0; i< tam; i++)
    {
        if (num[i]> 100)
        {
            suma+=num[i];
        }
    }
    return suma;
}

int numMdiv5 (int num[])
{
    int mayor = num[0];
    for( int i=0; i< tam; i++)
    {
        if (num[i] >mayor)
        {
            if(num[i]%5 == 0)
            {
                mayor = num[i];
            }
        }
    }
    return mayor;
}

void dobles(int num[])
{
    int aux;
    for( int i=0; i< tam; i++)
    {
        for(int j=0; j< tam; j++)
        {
            if( num[i] < num[j])
            {
                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;
            }
            if( (num[i] < num[j])*2)
            {
                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;
            }

        }
    }

}

void presentar(int num[])
{
    for( int i=0; i< tam; i++)
    {
    cout<< " " << num[i] ;
    cout<< endl;
    }
}

int main()
{
    int mayor, sumas ;

    ingreso(num);

    mayor = numMdiv5(num);
    sumas = sumaMayores(num);

    cout<< endl << "Suma Numeros Mayores a 100: " << sumas << endl;
    cout << "Numero Mayor divisible/5: " << mayor << endl;

    dobles(num);
    presentar(num);
    return 0;
}
