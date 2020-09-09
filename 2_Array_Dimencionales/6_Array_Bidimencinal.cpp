#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Relice un programa que calcule la suma de dos matrices 
cuadrada de 3x3.
*/ 
// =========================================================>
// Para pintar salida de mi terminal

// print("\033[1;44mHola mundo!\033[0m")
// O en C++:
// cout << "\033[1;44mHola mundo!\033[0m" << endl;
// =========================================================>
int main(){

    int matriz[100][100],filas, columnas, sMatriz[100][100];

    cout<<"\n\e[94mDigite la filas: \e[0m";cin>>filas;
    cout<<"\e[94mDigite la filas: \e[0m";cin>>columnas;


    cout<<"\n\tRELLENA ELEMENTO EN LA MATRIZ\n";
    for (int  i = 0; i < filas; i++){
        for (int  j = 0; j < columnas; j++){
            cout<<"\033[36mDigite un numero: \e[0m";
            cin>>matriz[i][j];
        }        
    }

    cout<<"\e[m\e[0m";
    for (int  i = 0; i < filas; i++){
        for (int  j = 0; j < columnas; j++){
            cout<<"[ "<<matriz[i][j]<<" ]";
        }
        cout<<endl;
    }

    // Bucle  que suma la matriz

    for (int  i = 0; i < filas; i++){
        for (int  j = 0; j < columnas; j++){
            sMatriz[i][j] = matriz[i][j] + matriz[i][j];
        }        
    }
    
    cout<<"Suma de la matriz\n"<<endl;
    for (int  i = 0; i < filas; i++){
        for (int  j = 0; j < columnas; j++){
            cout<<"[ "<<sMatriz[i][j]<<" ]";
        } 
        cout<<endl;
    }
    
    return 0;
}