#include <iostream>
#include <string.h>
using namespace std;

/*
Copiar el contenido de una  a otra -  Funcion strcpy();
*/
int main(){
    char palabra[]="Julio", 
         palabra2[50];
         
    strcpy(palabra2,palabra);// Esta forma se puede copiar la cadena de caracter  a otra

    cout<<palabra2<<endl;

    return 0;
}