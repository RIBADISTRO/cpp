#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Pedir al usuario 2 cadenas de caracteres  de numero, uno entero y el otro  real.
convertirlos a sus respectivos valores  y por ultimo sumarlo.

funcion atoi() y atof()
*/ 
int main(){

    char  cad1[10],
          cad2[10];
    int   numeroI;
    float numeroF,
          suma=0;

     cout<<"Digite un numero entero: ";
     cin.getline(cad1,10,'\n');

     cout<<"Digite un numero flotante: ";
     cin.getline(cad2,10,'\n');

     numeroI= atoi(cad1);
     numeroF= atof(cad2);

    suma = numeroI + numeroF;

    cout<<"La suma es: "<<suma<<endl;
    

    return 0;
}