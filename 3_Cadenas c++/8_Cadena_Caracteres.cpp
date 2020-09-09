#include <iostream>
#include <string.h>
using namespace std;
// Añadir o concatenar con  otra- Funcion strcat();
int main(){

    char cad1[]="Bienvenido al mundo de la ",
         cad2[]="programacion, con c++",
         cadg[60];

    // Primero copiar la cadena con la funcion strcpy
    strcpy(cadg,cad1); // cad1="Bienvenido al mundo de la "

    //Concatenando cadenas de caracteres

    strcat(cadg,cad2); //cad2="Bienvenido al mundo de la  programacion, con c++"
    
    cout<<cadg<<endl;



    return 0;
}