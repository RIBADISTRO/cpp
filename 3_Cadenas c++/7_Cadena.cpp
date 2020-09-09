#include <iostream>
#include <string.h>
using namespace std;
/*
Pedir al usuario que digite  2 cadenas de caracteres, e indicar si ambas
cadenas son iguales, en caso de no serlo, indicar  cual es el mayor alfabericamente
*/ 

int main(){
    char frase1[40],
         frase2[40];

    cout<<"Digite una frase: ";
    cin.getline(frase1,40,'\n');
    cout<<"Digite una frase: ";
    cin.getline(frase2,40,'\n');

    if (strcmp(frase1,frase2)==0){
        cout<<"La "<<frase1<<" y "<<frase2<<" son iguales"<<endl;
    }else if(strcmp(frase1,frase2)<0){
        cout<<frase1<<": Es mayor alfabeticamente"<<endl;
    }else{
        cout<<frase2<<": Es mayor alfabeticamente"<<endl;
    }   

    return 0;
}