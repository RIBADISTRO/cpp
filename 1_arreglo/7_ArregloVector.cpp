#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Desarrolle un programa que lea de la  entrada estandar un vector
de enteros y determine el  mayor elemento del vector
*/ 
int main(){
    // varible 
    int vector[100],numero, mayor;
    cout<<"Digite el numero de elemento del arreglo:";
    cin>>numero;

    for(int i=0; i < numero;i++){
        system("clear");
        cout<<i+1<<".Digite un numero: ";
        cin>>vector[i];
        if (vector[i] > mayor){
            mayor= vector[i];
        }   
    }
        cout<<"El numero mayor de mi vector es: "<<mayor<<endl;
    


    return 0;
}