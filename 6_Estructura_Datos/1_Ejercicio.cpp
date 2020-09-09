#include <iostream>
using namespace std;
/*
¿QUE ES UNA ESTRUCTURA?

Es una coleccion de uno  a mas  tipos  de elemento
denominado  campos, cada  uno  de los  cuales  puede ser 
un tipo  de datos diferente.

Supongamos  que se  desea  almacenar  los datos  de una  coleccion  de discos compactos (CD) de 
musica. Estos  datos puede ser.

->Titulo
->Artista
->Numeros de canciones
-> Precio
-> Fecha  de compra
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
struct coleccion_DC{
    char titulo[30],
         arctista[20],
         fecha_compra[20];
    int numCanciones;
    float precio;    
};

int main(){
    struct coleccion_DC CD1, CD2, CD3, CD4;
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

struct coleccion_DC{
    char titulo[30],
         arctista[20],
         fecha_compra[20];
    int numCanciones;
    float precio;    
}CD1,CD2,CD3,CD4;
*/ 


// Estructura Basica

struct persona{
    char nombre[20];
    int edad;
}persona1, persona2;

int main(){

    cout<<"Digite su nombre: ";
    cin.getline(persona1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>persona1.edad;


    cout<<"\e[36mImprimiedo datos:\e[0m"<<endl;
    cout<<"Nombre: \e[5m"<<persona1.nombre<<"\e[0m"<<endl;
    cout<<"Edad: \e[5m"<<persona1.edad<<"\e[0m"<<endl;


    return 0;
}