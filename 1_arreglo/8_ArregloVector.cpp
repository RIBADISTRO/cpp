#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Escribe un programa que defina un vector de numeros y calcule  si existe
algun numero en el vector cuyo valor equivale a la suma del resto de
numeros del vector. vector[5]={1,4,3,1,2};
*/ 

int main(){
    system("clear");
    int vector[50], numero, suma=0, mayor=0;

    cout<<"Digite el numero de elemento del vector: ";
    cin>>numero;

    for (int i = 0; i < numero; i++){
        cout<<i+1<<". Elemento: ";
        cin>>vector[i];
        suma += vector[i];
        if(vector[i]> mayor){
            mayor=vector[i];
        }

    }

    if(mayor==suma-mayor){
        cout<<"El numero "<<mayor<<" Equivale a suma de los demas"<<endl;
    }else{
        cout<<"No existe ningun numero que sea igual  a la suma de los demas"<<endl;
    }

    return 0;
}