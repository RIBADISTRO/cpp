#include <iostream>
using namespace std;
/*Escriba una funcion llamada mult() que acepte dos numeros  en punto 
flotante como paramentros, multiplique estos dos numeros y  despliegue 
el resultado.
*/ 
// Prototippo de la funcion
void pedirDAtos();
void mult(float numero1, float numero2);

// Varibel globales 
int num1, num2;

int main(){

        // Es importante colocarlo en la orden que se esta 
        // programando las funciones

    pedirDAtos(); //Invoco mi funcion
    mult(num1, num2);// Mandamos pedir los numeros
    return 0;
}

void pedirDAtos(){
    cout<<"Digite dos numero: ";      cin>>num1>>num2;
}

void mult(float numero1, float numero2){
    float multiplicacion = num1 * num2;
    cout<<"Resultado: "<<multiplicacion<<endl;
}