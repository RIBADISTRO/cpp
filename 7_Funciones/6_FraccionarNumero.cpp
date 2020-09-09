#include <iostream>
using namespace std;
/*
Escriba un programa en c++ que devuelva la parte franciomaria de cualquier numero 
introducido por el usuario. 
Ejemplo: Si se introduce el numero 256.876, deberia desplegarse el numero 0.879.
*/ 

// Prototipo de la funcion
void pedirDATOS();
float partefracN( float numero);

// Varible globales
float numeroA;

//Principal
int main(){
    pedirDATOS();           // 1.Invoco la funcion pedirdatos
    partefracN(numeroA);    // 2.Invoco la funcion parteFracN
    return 0;
}
// Funcion pedirDATOS
void pedirDATOS(){
    cout<<"Digite un numero: ";     cin>>numeroA;
}


// Funcion partefracN
//256.876 = 256
//entero  = 256
float partefracN(float numero){

    int entero = numero;
    // 256.876 - 256
    float resultado = numero - entero;
    cout<<"Resultado: "<<resultado<<endl;

}