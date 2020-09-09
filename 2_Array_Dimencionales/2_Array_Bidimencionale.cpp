#include <iostream>
#include <stdlib.h>
using namespace std;
/*¿QUE ES UNA MATRIZ O TABLA?
 Una matriz  es un vector de vectores o un  tambien llamado array
bidimencional. La manera de declarar en c++ es similar  a un vector

DECLARANDO  UNA MATRIZ EN C++
 tipo nombre[fila][columal];

AGREGAR  ELEMENTO  A LA MATRIZ

-------------Formas de declarar una array ---------------
--> int  numero[2][3]={1,2,3 , 4,5,6};
--> int numero[2][3]={{1,2,3} , {4,5,6}};
--> int  numero[2][3]={1,2,3 , 
                   4,5,6};
cout<<numero[1][2]; //6
cout<<numero[0][1]; //2

*/
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//      MATRICES O TABLAS
//  Realizar un programa que defina una matriz de 3x3 y escriba un ciclo
//  para que muestre la diagonal principal de la  matriz;

int main(){

    int elemento[3][3] = {{1,2,3},{4,5,6},{7,5,6}};

    cout<<"Mostrar la matriz completa"<<endl;
    for (int i = 0; i < 3; i++){
        cout<<"| ";
        for (int j = 0; j < 3; j++){
            cout<<elemento[i][j];
            // cout<<"[ "<<i<<" ][ "<<j<<" ]";
            cout<<"| ";
        }
        cout<<endl;
        
    }
    cout<<"\n"<<endl;
    cout<<"Mostrar la diagonal de la matriz"<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i==j){
                cout<<elemento[i][j]<<endl;
            }
            
            
        }
        cout<<endl;
        
    }

    return 0;
}