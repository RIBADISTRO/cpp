#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Introduccion

Muchas actividades humanas requieren que a diferentes colecciones  de elementos
utlizados se pongan en orden especificos.

Para estas circuntancias una de las tarea que realiza mas  frecuentemente  las  computadoreas en el procesamiento de datos es la ordenacion.

el estudio de diferentes metodos de ordenacion es una tarea  intrinsecamente
interesante desde un punto de vista teorico y, naturalmente, practico.
*/ 

/*ORDENACION

    La ordenacion de datos (sort en ingles) es una operacion consistente  en  disponer  un 
    conjunto de datos en algun determinado orden.

        Concepto:
     Una coleccion de datos puede ser almacenado en memoria central  o en  archivos de 
     dato externos guardados en unidades de alamcenamiento (USB, DVD,etc.). Cuando  los 
     datos se guardan en memoria principal (un arreglo, una lista  enlazada  o  un arbol)
     se denomina ordenacion interna; estos datos se almacenan  exclusivamente 
     para tratamientos internos que se utlizan para gestion masiva de datos  y se  guardan 
     en arreglos de una o varias dimenciones. Si los datos estan almacenado  en un archivo,
     el proceso de ordenacion se llama ordenacion externa.  Este capitulo estudia  los metodos
     de ordenacion interna

Todos los metos de este capitulo, normalmente se ordena de  modo  ascendente 
sobre lista(arreglo unidimencionales). Se suelen dividir en dos  grandes  grupos.

    Directos(Basicos)       Burbijas,Seleccion, Insercion
    Indirectos(Avanzados)   Shell, quick sort, merge, sort, radix sort

En el caso de listas pequeñas, los metodos director se muetras eficientes, sobre  todo
porque los algoritmos son sencillos; su uso es muy frecente. Sin  embargo, en listas
grades estos metodos se muetran ineficientes y es preciso recurrir  a los metodos 
avanzados.
*/ 
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*METODO DE LA BURBUJA

    ¿Que es el metodo de la burbuja?
    Es un asencillo algoritmo de ordenamiento. Funciona revisando  cada elemento de la lista que va  a ser  ordenadas 
    con el sisguiente, intercambiandolos de posicion  si  estan  en el orden  equivocado. Es  necesario revisar  varias 
    veces  toda la lista  hasta que  no se  necesiten  mas intercambios,  lo cual significa  que la lista  estas
    ordenada.

    Ejemplo:

    4  3   2   1   5
            si
    nuemroActual> numerosiguiente 
            cambio
||
*/ 
int main(){

    int arregloNumero[]={5,2,3,1,4};
    int i,j,aux;
    // Algoritmo de burbuja
    for(i = 0;i < 5; i++){ 
        for ( j = 0; j < 5; j++){ // recorre por columna
            if(arregloNumero[j] > arregloNumero[j+1]){
                aux = arregloNumero[j;
                arregloNumero[j] = arregloNumero[j+1];
                arregloNumero[j+1]= aux;
            }
        }
        
    }

    // Muestra numero ordenado ascendente
    for(i = 0;i < 5; i++){
        cout<<arregloNumero[i]<<" ";
    }

    cout<<endl;
    // Muestra  los numeros de forma descendente
    for(i = 4;i >= 0; i--){
        cout<<arregloNumero[i]<<" ";
    }
    cout<<endl;


    return 0;
}