#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
// Invertir una cadena de caracter- Funcion strrev()
int main(){
    char cad[]= "Rivera";

    strrev(cad);// La funcione strrev() No esta disponible en linuc ya que no es compatible

    cout<<"Frase invertida: "<<cad<<endl;

    return 0;
}