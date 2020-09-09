#include <iostream>
using namespace std;

/*
*               ¿Que es un arreglo?
* Un vector  o array  unidimencinal es un tipo de dato que 
* almacena una secuencia  de datos del mismo tipo. los elementos
* de un vetor  se almacena  en zona  contiguas  de memorias y se  
* puede acceder de manera directa  un indice o posicion
*       --------------------------------------------
*       |   2  |  8  |  34  |  90 |  23  | 4  | 78  |
*       ---------------------------------------------
*       |   0  |  1  |  2   |  3  |  4   |  5 |  6  |
*       ---------------------------------------------
*
*---------------------------------------------------------------
*
* Para definir un vector se utiliza:
*
*    tipo nombre[tamaño]; 
*        ejemplo:
*
*        int numero[10];
*        float numero[23];
*        char reale[343];
*
*/

// 1. Escribe  un programa  que defina un  vector de numero  y 
//    calcule  la suma  de sus elementos

int main(){
    int arreglo[5]={1,2,3,4,5,};
    int suma=0;

    for (int i = 0; i < 5; i++){
        suma += arreglo[i];
    }
    cout<<"La suma de los elementos del vector  es: "<<suma<<endl;


    return 0;
}