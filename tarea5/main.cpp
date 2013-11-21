#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/* Trabajo semana 5
Se tiene que ingresar 5 números a un arreglo, usted deberá de elaborar un procedimiento para
ordenar en forma ascendente y otro procedimiento para ordenar en forma ascendente. Se deberá de incluir
un procedimiento que sustituya del arreglo que se pase como parámetro, todos los números pares por un cero.
Presentar los resultados en el main.
Todo el programa deberá de estar documentado, esto quiere decir explicado por ud.
*/


int lista[5];

// en este proceso ingresamos los el arrglo suyo nombre le dimos fue lista

void ingreso(int lista[])
{
	for(int i=0; i<5; i++)
        {
		cout<<"Ingrese un numero: ";
		cin>> lista[i];
	}
}

/* utilisamos en metodo de burbuja para poder ordenar el arrglos de menor a mayor y viceversa
¿que es el metodo burbuja?
El Ordenamiento de burbuja o método burbuja (Bubble Sort en inglés) es un sencillo algoritmo de ordenamiento.
Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de posición
si están en el orden equivocado. Es necesario revisar varias veces toda la lista hasta que no se necesiten más intercambios,
lo cual significa que la lista está ordenada
*/
void ascendente(int lista[])
{
  int aux;
  for(int c1=0;c1<5;c1++)
  {
    for(int c2=0;c2<5;c2++)
    {

        if(lista[c2]>lista[c2+1])
        {
          aux=lista[c2];
          lista[c2]=lista[c2+1];
          lista[c2+1]=aux;
        }
       }
    }
  }

void descendente(int lista[])
{

  int aux;
  for(int c1=0;c1<5;c1++)
  {
    for(int c2=0;c2<5;c2++)
    {
        if(lista[c2]<lista[c2+1])
        {
          aux=lista[c2];
          lista[c2]=lista[c2+1];
          lista[c2+1]=aux;
        }
      }
  }
}

// a sustutuimos los numero pares del arrglo por ceros
void sustituir(int lista[])
{
		for(int i=0; i<5;i++){
			if(lista[i]%2==0){
				lista[i]=0;
			}
		}
}

//la presentacion de cada uno de los procesos anteriormente
void imprimir(int lista[])
{

  for(int c=0;c<5;c++)
    cout<<lista[c]<<" ";
    cin.get();
    cout<< endl;
}

// en el main presentamos las resoluciones de los procedimientos anteriores
int main()
{

    ingreso(lista);

    ascendente (lista);
    cout<< "Orden Ascendente: " << endl;
    imprimir(lista);


    descendente(lista);
    cout<< "Orden Descendente: " << endl;
    imprimir(lista);

    sustituir(lista);
    cout<< "Sustitucion de numeros pares: " << endl;
    imprimir (lista);

 return 0;
}
