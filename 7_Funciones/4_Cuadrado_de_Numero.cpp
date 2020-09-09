#include <iostream>
#include <cmath>
using namespace std;
/*Escribe una funcion llamada al_cuadrado() que calcule el cuadrado del
valor que se le transmite y despliegue el resultado. La funcion deberá 
ser capaz de elevar al cuadrado de numeros flotantes.
*/ 
void pedirDATOS();
void al_cuadrado(float numero1);

float num1;             // Varible global
int main(){
    pedirDATOS();       //Invocando funcion 
    al_cuadrado(num1);  //Invocando funcion pasando el valor
    return 0;
}


void pedirDATOS(){
    // Potencia de un numero
    cout<<"Digite un numero:";   cin>>num1;
}

void al_cuadrado(float numero1){
    float potencia;
        potencia = numero1 * numero1; // Cuadrado de un numero
    cout<<"La potencia es: "<<potencia<<endl;
}
