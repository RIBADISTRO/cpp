#include <iostream>
#include <string.h>
using namespace std;

/*
Pedir al usuario una cadena de caracter, almacenado en un arreglo y copiarlo
su contenido hacia otro arreglo de caracteres;
*/ 
int main(){

    char frase[50],
         palabra2[50];

    cout<<"Digite un frase: ";
    cin.getline(frase,50,'\n');

        strcpy(palabra2,frase);// lo copia su contenido a otro arreglo

    cout<<palabra2<<endl;

    return 0;
}