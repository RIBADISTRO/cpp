#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*  MATRIZ TRANSPUESTA
Realizar  un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
La matriz transpuesta es aquella en la  columana i  era la fila  de la matriz
original.
Link:
https://blogs.ua.es/matesfacil/bachillerato/algebra-matricial/matriz-transpuesta/

*/ 

int main(){

    int matriz[3][3]={{2,3,4},{5,6,8},{9,5,3}},mTraspuesta[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"  ";
            cout<<matriz[i][j];
        }
        cout<<endl;
    }

    // Bucle que hace la transpuesta de la mtriz
    
    for (int i = 0; i < 3; i++){
        for (int  j = 0; j < 3; j++){
            mTraspuesta[j][i]=matriz[i][j];        
        }
        
    }

    // Muestra la transpuesta de mi matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"-->";
            cout<<"\e[36m|"<<mTraspuesta[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}