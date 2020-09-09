#include <iostream>
using namespace std;
/*  Plantilla de funciones
Ejemplo: Sacar el valor absolito de un numero
*/ 
// Prototipo de funcione
template <class TIPOD>// Prefijo de la plantilla
void mostrarAbs(TIPOD numero);

int main(){
    int num1 = 4;
    float num2 = 56.67;
    double num3 = 123.2454;

    mostrarAbs(num1); //Invoco el prototipo de mi funcion
    mostrarAbs(num2); //Invoco el prototipo de mi funcion
    mostrarAbs(num3); //Invoco el prototipo de mi funcion

    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero < 0 ){
        numero = numero * -1;
    }

    cout<<"El valor absoluto  del numero es: "<<numero<<endl;
}