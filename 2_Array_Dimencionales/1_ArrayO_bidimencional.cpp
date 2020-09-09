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
//              EJERCICION 1
// Hacer un programa  para rellenar una matriz pidiendo al usuario el
// numero de filas columnas, posterios mostar la matriz en pantalla

int main(){
    int numero[100][100],filas,columnas;

    // SOLICITA AL USUARIO QUE FILAS Y COLUMNAS
    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;
    
    // ALMACENAMOS EN UN BUCLE FOR PARA LA ITERACION DE VECES
    for (int f = 0; f < filas; f++){
        for (int  c= 0; c < columnas; c++){
            cout<<"Digite un numero [ "<<f<<" ]["<<c<<" ]: ";cin>>numero[f][c];
        }
        
    }
    
    // MOSTRANDO LA MATRIZ
    cout<<"\n\tMostrando matriz"<<endl;
    for (int f = 0; f < filas; f++){
        for (int  c= 0; c < columnas; c++){
            cout<<"[ "<<numero[f][c]<<" ]";
        }
        cout<<endl  ;
    }
    return 0;
}