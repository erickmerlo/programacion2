#include <iostream>

using namespace std;

const int tam=4;
int num [4];
int mayor, menor, promedio, pares=0;

void ingreso (int num[])
{
    for (int i=0; i<= tam; i++)
    {
        cout<< "ingresar un numero [" << i << "]: ";
        cin>> num[i];
    }
}

int promedioArreglo(int num[])
{
    int suma =0;
    for (int i=0; i<= tam; i++)
    {
        suma+= num[i];
    }
    return suma/tam;
}

int mayorArreglo (int num[])
{
    int mayor = num[0];
    for (int i=0; i<= tam; i++)
    {

            if (num[i] > mayor)
                {
                        mayor = num[i];
                }
    }
    return mayor;
}

int menorArreglo (int num[])
{
     int menor = num[0];
     for (int i=0; i<= tam; i++)
    {
            if (num[i] < menor)
                {
                        menor = num[i];
                }
    }
    return menor;
}

int paresArreglo (int num[])
{
    for (int i=0; i<= tam; i++)
    {
        if (num[i] %2 ==0)
        {
            pares++;
        }
    }
    return pares;
}


int main()
{

    ingreso (num);
    promedio = promedioArreglo(num);
    mayor = mayorArreglo(num);
    menor = menorArreglo(num);
    pares = paresArreglo(num);

    cout<< endl<< "promedio del arreglo: " << promedio << endl;
    cout<< "numero mayor: " << mayor << endl;
    cout<< "numero menor: " << menor << endl;
    cout<< "#´s Pares: " << pares << endl;

    return 0;
}
