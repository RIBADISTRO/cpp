#include <iostream>
#include <string.h>
using namespace std;
/*
FUNCIONES ESPECIFICAS DE gets,cin,cin,getline();
    cin>>'var'; ---> se usa solamente en numeros no funciona en cadena de caracteres
    gets>>'var'; ---> No es bueno por que no respeta los espacio, especidicado;
    cin.getlines('var','tamaño','argumento'); --> La mejor opcion para cadena de caracteres

Longitud de una cadena de caracter - Funcion  strlen()
*/ 
int main(){

    char palabra[]="Hola que tal?";
    int longitud=0;

    longitud=strlen(palabra); // cuneta los espacios usado

    cout<<"Longitud de caracter: "<<longitud<<endl;//Imprimie el datos en tipo entera 

    return 0;
}