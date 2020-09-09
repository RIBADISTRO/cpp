#include <iostream>
#include <string.h>
using namespace std;
/*
Hacer una estructura  llamada  corredor,  en la  cual  se  tendran  los  siguientes campos:
Nombre, edad,  sexo, club,  pedir  datos al usuario  para  un corredor  y asi  una categoria 
de competicion:
 - Juvenil <= 18 años
 - Señor <= 40 años
 - Veterano > 40 años

 Posteriormente imprimir todos los datos del corredor, incluidad su  categoria de la copetencia.
*/ 

struct  corredor{
    char nombre[30],
         sexo[15],
         club[20];
    int edad;
}C1;


int main(){
    
    char categoria[20];

    cout<<"Digite nombre: ";
    cin.getline(C1.nombre,30,'\n');

    cout<<"Digite sexo: ";
    cin.getline(C1.sexo,15,'\n');

    cout<<"Digite club: ";
    cin.getline(C1.club,20,'\n');

    cout<<"Edad: ";
    cin>>C1.edad;


    if (C1.edad <= 18) {
        strcpy(categoria, "Juvenil");
    }else if(C1.edad <=40){
        strcpy(categoria, "Señor");
    }else if(C1.edad > 40){
        strcpy(categoria,"Veterano");
    }
    
    cout<<"\nDatos del corredor: \n"<<endl;
    cout<<"Nombre: "<<C1.nombre<<endl;
    cout<<"Sexo: "<<C1.sexo<<endl;
    cout<<"Club: "<<C1.club<<endl;
    cout<<"Edad: "<<C1.edad<<endl;
    cout<<"Categoria:"<<categoria<<endl;
    return 0;
}