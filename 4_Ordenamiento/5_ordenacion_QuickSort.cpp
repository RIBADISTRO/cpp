#include <iostream>
#include <stdlib.h>
using namespace std;

/* ORDENACION RAPIDA(QuickSort)
 El funcionamiento  del algoritmo es simple, se basa  en la division  de la  lista  en particiones a
  ordenar, en definitiva  aplica  la tecnica " divide y venceras". El momento  es, posiblemente, el mas
  pequeño  de codigo, mas rapido  de media, mas elegante  y mas  eficiente  de los  algoritmo conocido  de 
  ordenacion.

  El algoritmo  divide  los n elemntos de la lista   a ordenar  en dos  partes  o particiones  separadas por un
  elemento:  una particion  izquierda, un elemento  central  denominado pivote  y una particion  derecha.
 
  La particion  se hace  de tal  forma  que todo los elementos  de la primera  sublista (particion izquierda)
  son menos  que todos  los elementos   de la segunda  sublista (particion  derecha). Las dos sublista  se ordenan
  entonces  independientes.
*/
/*ALGORITMO QUICKSORT

Los pasos  que  sigue  el algoritmo Quicksort son:
1. Seleccionar  el elemnto  central  de  a[]  como  pivote
2. Dividir los elementos  restantes  en particion izquierda y derecha,  de modo  que ninguno elemento  de la izquierda 
   tenga  una clave  mas  pequeña  que la  del pivote.
3. Ordenar  la particion izquierda  utilizando  quicksort  recursivamente 
4. Ordenar  la particion derecha utilizando  quicksort recursivamente
5. La solucion  es particion izquierdo  seguida  por el pivote  y la particion  derecha

EJEMPLO:

    8 3 6 4  2  5 7  1

    central = (primero+ ultimo)/2
    central =3
    pivote a[central]
    pivote = 4;

*/ 
void intercambio(float &x,float &y){
    float aux;
    aux = x;
    x = y;
    y=aux;
}

void quickSort(float a[], int primero, int ultimo){

    int i, j, central;
    float pivote;

    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do{
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;
        if(i <= j){
            intercambio(a[i],a[j]);
            i++;
            j--;
        }

    }while(i <= j);

    if(primero < j){
        quickSort(a, primero, j);// Ordenamos la sublista  izquierda
    }
    if(i < ultimo){
        quickSort(a,i, ultimo);// Ordenamos la sublista derecha

    }
}

int main(){
    float arreglo[] = {4,7,1,8,2,10,5,9,3};
    quickSort(arreglo,0,8);

    cout<<"\nOrdenado de forma ascendente: ";
    for (int i = 0; i < 9; i++){
        cout<<arreglo[i]<<" ";
    }
    
    cout<<"\nOrdenado de forma descendente: ";
    for (int  i = 8; i >= 0; i--){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    
    
    return 0;
}