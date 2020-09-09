#include <iostream>
using namespace std;

/*
Estructura dentro de otra.

struct info_direccion{
    char direccion[30],
         ciudad[20],
         provincia[20];
}


strcut empleado{

    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}
--------------------------------------------------------
|               empleado                               | 
|----------|-------------------------------------------|
|          |        dir_empleado          |            |
| nombre   |------------------------------|  salario   |
|          |̣̣̣̣̣ direcion | ciudad |provincia |            |
--------------------------------------------------------


*/ 

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
struct info_direccion{
    char direccion[30],
         ciudad[20],
         provincia[20];
};


struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

int main(){

    for (int i = 0; i < 2; i++){
        cout<<endl;                         cin.ignore();//Limpia el buffer para poder continuar        
        cout<<"Digite su nombre: ";         cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion: ";      cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Digite su ciudad: ";         cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Digite su proviencia: ";     cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Digite su salaro: ";         cin>>empleados[i].salario;
        
    }

    // Imprimir los datos o todos los campos

    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciduad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<endl;
    }
    
    


    return 0;
}