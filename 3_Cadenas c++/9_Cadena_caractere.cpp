#include <iostream>
#include <string.h>
using namespace std;
/*
Crear un  cadena de caracter que tenga las siguiente frase
"Hola que tal", luego  crear otra cadena para preguntar al usuario su nombre,
 por ultimo añadir el nombre al final    de la primera cadena  de mensaje completo
 "Hola que tal(NombreDeUsuario)"
 */ 

int main(){

    char frase[]="Hola que tal ",
         nombre[30],
         guardarCadena[30];

    strcpy(guardarCadena,frase);

    cout<<"Digite su nombre: ";
    cin.getline(nombre,30,'\n');
    
    strcat(guardarCadena,nombre);
    cout<<"Frase: "<<guardarCadena<<endl;


    return 0;
}

