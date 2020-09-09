#include <iostream>
#include <stdlib.h>
using namespace std;
/*
 Desarrollar  un programa que determine si una matriz es  simetrica o no.
 Una matriz si es  cuadrada y si  es igual a su  matriz transpuesta.


 QUE ES UNA BANDERA

 Una bandera es una variable a la cual hacemos cambiar entre dos posibles valores
ya sea para alternar la ejecución de dos bloques de código o para producir la 
salida de un ciclo por la acción de que la variable tenga o no uno de sus valores
*/
int main()
{
    int Matriz[3][3], filas, columnas;
    char bandera = 'F';

    cout<<"Digite fila: ";cin>>filas;
    cout<<"Digite fila: ";cin>>columnas;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++){
            cout <<"\033[91mDigite un elemento:\e[0m \033[36m[ "<<i<<" ][ "<<j<<" ]"<<": \e[0m";
            cin >> Matriz[i][j];
        }
    }

    if (filas == columnas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if(Matriz[i][j]==Matriz[j][i]){
                    bandera = 'V';
                }
            }
        }
    }

    if(bandera == 'V'){
        cout<<"La matriz es traspuesta"<<endl;
    }
    else{

        cout<<"La matriz no es simetrica"<<endl;
    }
    

    return 0;
}