#include <iostream>

using namespace std;

/* ingresar 10 numeros  al final presentar cuantos numeros fueron divisbles entre 5, el promedio de los divisibles ntre 5 y el
numero mayor de todos los numeros   */
int main()
{
    int numero, cdiv5=0, mayor=0, suma=0;
    double promedio;

       for( int i=0; i <10 ; i++){

        cout << "Ingrese numero: ";
        cin >> numero;
        if((numero % 5)==0){
            suma+= numero;
            cdiv5++;
        }

         if ( numero > mayor){
            mayor = numero;
     }
    }

        if (cdiv5 > 0){
        promedio = suma / cdiv5;

        } else {
            promedio =0;
        }



    cout<< endl << "Cuantos numeros son divisibles entre 5: " << cdiv5 << endl;
    cout<< "Promedio de los numeros: " << promedio << endl;
    cout<< "numero mayor es: " << mayor <<endl;


    return 0;
}
