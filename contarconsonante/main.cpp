#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ingresar 5 cadenas tipo char a un arreglo usando un procedimiento,
luego elaborar una funcion que cuente
cuantas consonantes tiene cada uno de los nombres.
eleborar un procedimiento para agregar al final de la cadena un *.
presentar la cadena modificada con el * y a la par el numero de consonantes que tiene.
*/

using namespace std;

const int n=5;
  char cadena[n][30];
  int consonante[n];

  int contarc(char cadena[])
  {        int i,consonantes,nl;
          nl=strlen(cadena);
          consonantes=0;
          for( i=0;i<nl;i++)
          {    switch (cadena[i])
                  {
                      case 'a':
                      case 'A':
                      case 'e':
                      case 'E':
                      case 'o':
                      case 'O':
                      case 'I':
                      case 'i':
                      case 'u':
                      case 'U':

                        break;
                      default :
                          consonantes++;
                        break;
                  }
          }
          return consonantes;
  }
  void contarConsonantes(char cadena[n][30],int consonante[])
  {
    int i;
      for(i=0;i<n;i++)
      {
          consonante[i]=contarc(cadena[i]);
      }
  }

  void ingreso(char cadena[n][30])
  {
      int i;
      for(i=0;i<n;i++)
      {
          cout<<"Ingresar la cadena["<<i<<"]..:";
          cin.getline(cadena[i],30);

      }

  }

  void cambiar(char cadena[n][30])
  {
      int i;
      int fin;
      for(i=0;i<n;i++)
      {   fin =strlen(cadena[i]);
          cadena[i][fin]='*';
      }

  }

  void presentar(char cadena[n][30],int consonante[])
  {
      int i;
      for(i=0;i<n;i++)
      {
          cout<<" cadena["<<i<<"]..:"<<cadena[i]<<" Tiene "
          <<consonante[i]<<" consonantes\n";


      }

  }
 void presentarMayor(char cadena[n][30],int consonante[])
 {
     int i,pos,mayor;
     mayor=0;

     for(i=0;i<n;i++)
     {
         if(mayor< consonante[i])
         {
             mayor=consonante[i];
             pos=i;
         }
     }
     cout<<"Mayor es "<<cadena[pos]<<" Con "<<mayor<<" \n";

 }

  int main()
  {   ingreso(cadena);
      contarConsonantes(cadena,consonante);
      cambiar(cadena);
      cout<< endl;
      presentar(cadena,consonante);
      cout<< endl;
      presentarMayor(cadena,consonante);


      return 0;
  }
