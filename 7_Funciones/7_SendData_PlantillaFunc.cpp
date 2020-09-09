#include <iostream>
#include <string.h>
using namespace std;

/*  Escriba una plantilla de funcion llamada despliegue() que  despligue el valor del
argumento  unico  que  se le  tramnsmite  cuando  es invocada la funcion.

*/ 
// Prototipo de la funcion.
void pedirDatos();
template <class TIPOD>                   //Plantilla tiene que estar junto con la funcion
void despliegue(TIPOD datoAleatorio); 

int main(){
    int num1 = 9999;
    float num2 = 343.4323;
    long num3 = -324546.3245453;
    char num4 = 'v';
    despliegue(num1);
    despliegue(num2);
    despliegue(num3);
    despliegue(num4);
    return 0;
}


template <class TIPOD>
void despliegue(TIPOD datoAleatorio){
    cout<<"El dato es: "<<datoAleatorio<<endl;
}

