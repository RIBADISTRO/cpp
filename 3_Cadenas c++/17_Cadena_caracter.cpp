#include <iostream>
#include <stdio.h>
using namespace std;
/*
Realice un programa  que lea una cadena de carcacteres  de la  entrada  estandar y
y quemuetre la salida estandar cuantas ocurrencia  de cada vocal existen  en la cadena
*/ 
int main(){

    char frase[30];
    int vocal_a=0,
        vocal_e=0,
        vocal_i=0,
        vocal_o=0,
        vocal_u=0;

cout<<"Digite una frase: ";cin>>frase;

for (int i = 0; i <30 ; i++){
    switch (frase[i]){
    case 'a': vocal_a++; break;
    case 'e': vocal_e++; break;
    case 'i': vocal_i++; break;
    case 'o': vocal_o++; break;
    case 'u': vocal_u++; break;
    // default: break;
    }
}

    cout<<"Vocal a;"<<vocal_a<<endl;
    cout<<"Vocal e;"<<vocal_e<<endl;
    cout<<"Vocal i;"<<vocal_i<<endl;
    cout<<"Vocal o;"<<vocal_o<<endl;
    cout<<"Vocal u;"<<vocal_u<<endl;




    return 0;
}