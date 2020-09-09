#include <iostream>
#include <stdlib.h>
using namespace std;
/*
*Escribe un programa  que defina un vector de  numeros
* y muestre en la salida estandar  el vector  en orden inverso- del 
*ultimo  al primer  elemento
*/ 
int main(){
    // Varible
    int vector[5]={1,2,3,4,5};


    for (int i = 4; i >= 0; i--)
    {
        cout<<"El vector es: "<<vector[i]<<endl;
    }   
    
    // getchar();
    return 0;
}