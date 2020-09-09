#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
// COLOREANDO SHELL EN IMPRECION EN PANTALLA


/*           MATRIZ O TABLA
Hacer una matriz preguntando al usuario el numero de filas y comunas,
llenarla de  numeros aleatorios, copiar los elementos a otra matriz y por ultimo
mostrarla en pantalla. 
*/ 

int main(){

    int array[50][50],nTabla[50][50],filas,columnas, dato;

    // Solicita la usuario el tamaño de mi array o tabla
    cout<<":::::::SOLICITA DATOS:::::::::\n";
    cout<<"Digite filas: "; cin>>filas;
    cout<<"Digite filas: "; cin>>columnas;

    // Gernera numeros aleatorios
    srand(time(NULL));

    // Los amacena con bucle anidado
    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            dato = 1+rand()%(50); //Genera numeros aleatorios del (1-50)
            nTabla[i][j] = dato; // Lo almacena una tabla
        }
    }
    // Almacena los datos 

    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
          array[i][j]=nTabla[i][j];
        }
        
    }

    cout<<"\n\e[36mMUESTRA LA MATRIZ O TABLA\n\n";
    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
        //   cout<<"\033[34m |"<<array[i][j];
          cout<<"\e[36m| \e[0m"<<array[i][j];
        }
        cout<<endl;
    }
    

    return 0;
}