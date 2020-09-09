#include <iostream>
#include <stdlib.h>
using namespace std;

/*   ¿ QUE ES EL ORDENAMINETO  POR SELECCION?
    es un algoritmo  de ordenamiento  que  requiere  0(n^2)
    operaciones  para  ordenar  una lista  de n numeros. Su 
    funcionamiento  es el siguiente.

    1. Buscar el minimo  elemento  de la lista
    2. Intercambiar  con el  primer  elemento
    3. Buscar  el minimo del resto  de la lista.
    4. Intercambiar  con el segundo.
    5  y si sucecivamente.

*/ 
int main(){
    int numero[] = {3,2,1,5,4};
    int    i, j, aux, min;
    
    // Algoritmo por seleccion
    for ( i = 0; i < 5; i++){
        min = i;
        for ( j = i+1; j < 5; j++){
            if (numero[j] < numero[min]){
                min = j;
            }
            
        }
        aux = numero[i];
        numero[i] = numero[min];
        numero[min]= aux;
        
    }

    // Muestra numero  ordenado ascendente
    for ( i = 0; i < 5; i++){
        cout<<numero[i]<<" ";
    }
    cout<<endl;
    
    // Muestra numero  ordenado ascendente
    for ( i = 4; i >= 0; i--){
        cout<<numero[i]<<" ";
    }
    cout<<endl;

    return 0;
}