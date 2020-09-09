#include <iostream>
#include <stdlib.h>
using namespace std;
//  Metodo por insersion
/*
si
numIzq > numActual
 cambio

*/ 
int main(){
    int numero[]={5,3,4,2,1},
        i, pos, aux;
        // Algoritmo por insercion
        for ( i = 0; i < 5; i++){
            pos =i; // almacena cada posicion de mi arreglo
            aux = numero[i]; // mietras que aux  itera la posicion 

            while ((numero>0) && (numero[pos-1] > aux)){
                numero[pos] = numero[pos-1];
                pos--;
            }
            numero[pos] = aux;
            
        }

        // Orden ascendente 
        for ( i = 0; i < 5; i++){
            cout<<numero[i]<<" ";
        }
        cout<<endl;

        // Orden descendente
        for ( i = 4; i >= 0; i--){
            cout<<numero[i]<<" ";
        }
        cout<<endl;

    return 0;
}