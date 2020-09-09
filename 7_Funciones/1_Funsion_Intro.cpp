#include <iostream>
using namespace std;
/*
                ¿Que es una funcion?

Una funcion realiza una tarea concreta y puede ser diseñada,
implementanda y depurada de manera independiente al resto de codigo.

                Definicion de Funciones

La sisntaxis basica para la definicion de  una funcion en C++ esla siguiente:

tipo nombre(tipo var1, tipo var2,...,tipo varn){
    conjunto de instrucciones;
}

                Ejemplo de Funciones

    -> int numMax(int x, int y)
    -> double intercambio(double x, double y)
    -> void desplegar(float x, float x)


Como una cuestion de buena forma de programacion, el siguiente ordenamiento de 
instrucciones debera forma la estructura basica alrededor de la cual se construyan
todo sus programas en C++.


directiva de preprocedor

prototipo de funcion

int main(){
    conjunto de instrucciones;
    return valor

}

definicion de funcion
*/

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// PROTOTIPO DE  LA FUNCION

int encontrarMax(int x, int y);

int main(){
    int n1,n2,
        mayor;
    cout<<"Digite dos numero:"; cin>>n1>>n2;


    mayor=encontrarMax(n1, n2);
    cout<<"El valor: "<<mayor;
    return 0;
}

int encontrarMax(int x, int y){
    int numeroMax;

    if (x > y){
        numeroMax = x;
    }else {
        numeroMax = y;
    }
    
    return numeroMax;
}