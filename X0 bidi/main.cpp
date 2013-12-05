#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

const int fila=3;
const int colum=3;

void init(int arr[fila][colum]){
    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++ ){
            arr[f][c] = -1;
        }
    }
}

void imprimir(int arr[fila][colum]){
    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++ ){
            if( arr[f][c] == -1 ){
                cout << "  | ";
            }
            else{

                if(arr[f][c]==1)
                {
                    cout << "X"  << " | ";
                }else if(arr[f][c]==0)
                {
                    cout << "0"  << " | ";
                }
            }
        }
        cout << endl <<"-----------" << endl;
    }
}

bool estrangulo(int arr[fila][colum], int tipo){
    int cont;

    //HORIZONTAL
    for(int f=0; f < 3; f++){
        cont = 0;
        for(int c=0; c < 3; c++){
            if(arr[f][c] == tipo){
                cont++;
            }
            else{
                break;
            }
        }
        if( cont == 3){
            return true;
        }
    }

    //VERTICAL
    for(int c=0; c < 3; c++){
        cont = 0;
        for(int f=0; f < 3; f++){
            if(arr[f][c] == tipo){
                cont++;
            }
            else{
                break;
            }
        }
        if( cont == 3){
            return true;
        }
    }

    //DIAGONAL
    if(arr[0][0] == tipo and arr[1][1] == tipo and arr[2][2] == tipo){
        return true;
    }
    else if(arr[0][2] == tipo and arr[1][1] == tipo and arr[2][0] == tipo){
        return true;
    }

    return false;
}

bool haydisponible(int arr[fila][colum]){

    for(int f=0; f < 3; f++){
        for(int c=0; c < 3; c++){
            if( arr[f][c] == -1){
                return true;
            }
        }
    }
    return false;
}

bool esvalido(int arr[fila][colum],int f,int c){
    if(f < 0 or f > 2 or c < 0 or c > 2){
        return false;
    }

    if( arr[f][c] != -1){
        return false;
    }

    return true;
}

void cambiarturno(int &turno){
    if(turno == 1){
        turno = 0;
    }
    else{
        turno = 1;
    }
}

int main()
{
    int tablero[fila][colum], turno = 1, op, fila, col;
    char jug1[30], jug2[30];
    bool dispo, ganador, valido;

    do{
        cout << "\nMENU PRINCIPAL\n-----\n";
        cout << "1- Jugar" << endl;
        cout << "2- Estadistica" << endl;
        cout << "3- Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> op;
        cout << endl;

        switch(op){
            case 1:
                //inicializo el tablero
                init(tablero);
                imprimir(tablero);
                //pido los nombres
                cout << "Jugador 1 (X/0): ";
                cin>> jug1;

                cout << "Jugador 0 (X/0): ";
                cin>> jug2;

                //inicia el juego
                do{
                    //pido la coordenada
                    do{
                        cout << "Ingrese coordenada Jugador " << turno << endl;
                        cout << "Fila (0-2): ";
                        cin >> fila;
                        cout << "Columna (0-2): ";
                        cin >> col;
                        valido = esvalido(tablero, fila, col);

                    }while(!valido);

                    //si es valido lo guardo en el tablero
                    tablero[fila][col] = turno;
                    //actualizo
                    imprimir(tablero);
                    //evaluo si lo estrangulo
                    ganador = estrangulo(tablero,turno);

                    if(ganador){
                        if(turno == 1 ){
                            cout << jug1 << " VENCIO A " << jug2 << endl;
                        }
                        else{
                            cout << jug2 << " VENCIO A " << jug1 << endl;
                        }
                        break;//parar el ciclo
                    }

                    //cambiar el turno
                    cambiarturno(turno);
                    //evaluar la disponibilidad
                    dispo = haydisponible(tablero);

                    if(!dispo){
                        cout << "HAY EMPATE" << endl;
                    }
                }while(dispo);

                break;
            case 2:
                cout << "MUY PRONTO SERA..." << endl << endl;

        }
    }while(op!=3);


    return 0;
}

