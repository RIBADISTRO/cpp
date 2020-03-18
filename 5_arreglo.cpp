#include <iostream>
#include <stdlib.h>
using namespace std;

/*
*Escribe un programa  que lea de la entrada estandar un vector de numeros
* y muestre en la salida estandar los numeros de vector con sus indices asociados
*/ 
int main(){

  // Variable
    int arreglo[1000],n;

    cout<<"Digite el numero de arreglo: ";
    cin>>n;
        // Bucle

    for(int i = 0; i < n; i++){
        cout<<"Digita la cantidad de elemento: ";
        cin>>arreglo[i];
    }

    
    for(int i = 0; i < n; i++){
        cout<<i<<" ->"<<arreglo[i]<<endl;
    }  
      
 
 return 0;
 }