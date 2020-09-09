#include <iostream>
#include <string.h>
using namespace std;
/*
                FUNCIONES ESPECIFICAS DE gets,cin,cin,getline();
    cin>>'var'; ---> se usa solamente en numeros no funciona en cadena de caracteres
    gets>>'var'; ---> No es bueno por que no respeta los espacio, especidicado;
    cin.getlines('var','tamaño','argumento'); --> La mejor opcion para cadena de caracteres

CADENA DE CARACTERES
Hacer un programa que pida al usuario que  digite una cadena de caractere,
luego verificar la longitud de la cadena, y si esta superada a 10
caracteres mostrarla en pantalla, caso contrario no mostrarla.

*/ 
int main(){
    char palabra[50];
    int longitud=0;

    cout<<"Digite una palabra: ";
    cin.getline(palabra,50,'\n');

    if (strlen(palabra)>10){

        cout<<palabra<<endl;
    }else{
        cout<<"La cadena de caracter no supera de 10 y no puede mostrar. "<<endl;
    }
    

    getchar();
    return 0;
}