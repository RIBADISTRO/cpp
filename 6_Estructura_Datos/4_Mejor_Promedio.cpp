#include <iostream>
using namespace std;
/*  Estructura

Hacer una estructura llamada alumno, en la cual  se tendria los siguientes 
Campos: Nombre, Edad, Promedio, Pedir los datos al usuario para 3 alumnos,
comprovar cual de los 3 tiene los mejor promedio  y posterior imprimir 
los datos del alumnos.
*/ 

struct Alumno{
    char Nombre[25];
    int Edad;
    float promedios;
}alumnos[3];


int main(){

    float mayor=0;
    int pos;

    cout<<"Datos del alumnos: "<<endl<<endl;
    for (int i = 0; i < 3; i++){

        // almacenando los datos para los 3 alumnos
        cout<<"Nombre:";      cin.getline(alumnos[i].Nombre,25,'\n');
        cout<<"Edad: ";       cin>>alumnos[i].Edad;        
        cout<<"Promedio: ";   cin>>alumnos[i].promedios;
        
        cout<<endl;
        cin.ignore();//Limpia el buffer para poder continuar
        // Comprovando cual de los 3 alumnos que tiene el mejor promedio
        if (alumnos[i].promedios>mayor) {
            mayor = alumnos[i].promedios;
            pos= i;
        }
    }
    cout<<"Nombre: \e[39m"<<alumnos[pos].Nombre<<"\e[0m"<<endl;
    cout<<"Edad: \e[39m"<<alumnos[pos].Edad<<"\e[0m"<<endl;
    cout<<"Promedio: \e[39m"<<alumnos[pos].promedios<<"\e[0m"<<endl<<endl;
    
    
    

    return 0;
}