#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int dia, mes;
char respuesta;
int acumcap=0, acumac=0, acumpisc=0, acumari=0, acumtau=0, acumgem=0, acumcan=0, acumleo=0,
    acumlib=0, acumvir=0, acumsag=0, acumesc=0;

void ingresar(int &dia, int &mes)
{

    do{
        cout<< "Ingrese dia en el que nacio: ";
        cin>> dia;

    } while ( dia<1 or dia>31);

    do{
        cout<< "Ingresar Mes en el que nacio: ";
        cin>> mes;

    } while( mes<1 or mes> 12);
}

void signoz (int dia, int mes)
{
             if(mes>=1 and mes<=12)
    {
         switch(mes)
       {
           case 1:
                if(dia>=1 and dia<=20)
              {
                   cout<<" Capricornio " <<endl;
			acumcap+=1;

               }
               else if (dia>=21 and dia<=31)
               {
                   cout<<" Acuario " <<endl;
			acumac+=1;
               }
               break;
            case 2:
                if (dia>=1 and dia<=18)
               {
                   cout<<" Acuario " <<endl;
			acumac+=1;
               }
               else if (dia>=19 and dia<=28)
               {
                   cout<<" Piscis " <<endl;
			acumpisc+=1;
               }

               break;
            case 3:
                if (dia>=1 and dia<=20)
               {
                   cout<<" Piscis " <<endl;
			acumpisc+=1;
               }
               else if (dia>=21 and dia<=31)
               {
                   cout<<" Aries " <<endl;
			acumari+=1;
               }

               break;
            case 4:
                if (dia>=1 and dia<=20)
               {
                   cout<<" Aries " <<endl;
		          	acumari+=1;
               }
               else if (dia>=21 and dia<=30)
               {
                   cout<<" Tauro " <<endl;
		              	acumtau+=1;
               }

               break;
            case 5:
                if (dia>=1 and dia<=21)
               {
                   cout<<" Tauro " <<endl;
		              	acumtau+=1;
               }
               else if (dia>=22 and dia<=31)
               {
                   cout<<" Geminis " <<endl;
		          	acumgem+=1;
               }

               break;
            case 6:
                if (dia>=1 and dia<=21)
               {
                   cout<<" Geminis " <<endl;
                   acumgem+=1;
               }
               else if (dia>=22 and dia<=30)
               {
                   cout<<"Cancer " <<endl;
                   acumcan+=1;
               }

               break;
            case 7:
                if (dia>=1 and dia<=22)
               {
                   cout<<" Cancer " <<endl;
                   acumcan+=1;
               }
               else if (dia>=23 and dia<=31)
               {
                   cout<<" Leo " <<endl;
                   acumleo+=1;
               }

               break;
            case 8:
                if (dia>=1 and dia<=23)
               {
                   cout<<" Leo " <<endl;
                   acumleo+=1;
               }
               else if (dia>=24 and dia<=31)
               {
                   cout<<" Virgo " <<endl;
                   acumvir+=1;
               }
               break;

            case 9:
                if (dia>=1 and dia<=23)
               {
                   cout<<" Virgo " <<endl;
                   acumvir+=1;
               }
               else if (dia>=24 and dia<=30)
               {
                   cout<<" Libra " <<endl;
                   acumlib+=1;
               }

               break;

            case 10:
                if (dia>=1 and dia<=23)
               {
                   cout<<"Libra "<<endl;
                   acumlib+=1;
               }
               else if (dia>=24 and dia<=31)
               {
                   cout<<" Escorpion "<<endl;
                   acumesc+=1;
               }

               break;

            case 11:
                if (dia>=1 and dia<=22)
               {
                   cout<<"Escorpion "<<endl;
                   acumesc+=1;
               }
               else if (dia>=23 and dia<=30)
               {
                   cout<<" Sagitario " <<endl;
                   acumsag+=1;
               }

               break;
            case 12:
                if (dia>=1 and dia<=21)
               {
                   cout<<"Sagitario " << endl;
                   acumsag+=1;
               }
               else if (dia>=22 and dia<=31)
               {
                   cout<<" Capricornio " << endl;
                   acumcap+=1;
               }

            break;
        }
      }

}

 void cantidad(int acumcap, int acumac, int acumpisc, int acumari, int acumtau, int acumgem, int acumcan,
               int acumleo, int acumlib, int acumvir, int acumsag, int acumesc)
{
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Capricornio son: ["<<acumcap<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Acuario son: ["<<acumac<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Piscis son: ["<<acumpisc<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Aries son: ["<<acumari<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Tauro son: ["<<acumtau<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Geminis son: ["<<acumgem<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Cancer son: ["<<acumcan<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Sagitario son: ["<<acumsag<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Libra son: ["<<acumlib<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Virgo son: ["<<acumvir<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Escorpio son: ["<<acumesc<<"]"<<endl;
    cout<<"La Cantidad De Personas que Pertenecen Al Signo de Leo son: ["<<acumleo<<"]"<<endl;
}


void validar (char &respuesta)
{
     do
    {
        cout<< endl <<"Desea continuar (s/n): ";
        _flushall();
        cin.get(respuesta);
        _flushall();

    } while (!(respuesta=='s' or respuesta=='n'));

}


int main()
{
    do
    {
    cout<< "------ EL HOROSCOPO ------";
    cout<< endl << endl << endl;

    ingresar(dia, mes);
    signoz(dia, mes);
    validar(respuesta);

    _flushall();

    } while ( !(respuesta=='n'));

    cantidad(acumcap, acumac, acumpisc, acumari, acumtau, acumgem, acumcan, acumleo, acumlib, acumvir, acumsag, acumesc);

    return 0;
}
