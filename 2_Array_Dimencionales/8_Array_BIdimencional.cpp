#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Realize un programa  que calcule  el producto de los  matrices cuadrado de  3X3
*/ 
int main(){
     int matriz[2][2]={{1,2},{3,4}};
     int matriz2[2][2]={{1,2},{3,4}};
     int rMatriz[2][2];

     for (int i = 0; i < 2; i++){
         for (int j = 0; j < 2; j++){
             rMatriz[i][j]=0;
             for (int k = 0; k < 2; k++){
                 rMatriz[i][j] += matriz[i][j] * matriz2[k][j];
             }
             
         }
        
     }
     
     cout<<"Mostrando multiplicacion de matriz\n";
     for (int i = 0; i < 2; i++){
         for (int j = 0; j < 2; j++){
             cout<<rMatriz[i][j]<<" ";
         }
         
         cout<<endl;
     }
     

    return 0;
}