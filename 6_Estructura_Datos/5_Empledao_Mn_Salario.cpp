#include <iostream>
using namespace std;
/* Realizar un programa que  lea  un arreglo  de estructuras los datos de N empledos 
de la  empresa  y que  imprimina  los datos  del empleado  con mayor  y menor  salario.
*/ 

struct empleado{
    char nombre[30];
    int edad;
    float salario;
}empleados[3];



int main(){
    int i, posM=0, posm=0;
    float mayor=0, menor=999999;
    for(i = 0; i < 3; i++){
        
        cout<<"Digite Nombre: ";  cin.getline(empleados[i].nombre,30,'\n');
        cout<<"Edad: ";           cin>>empleados[i].edad;
        cout<<"Salario: ";        cin>>empleados[i].salario;        
        
        if(empleados[i].salario > mayor){
            mayor = empleados[i].salario;
            posM = i;
        }
        if(empleados[i].salario < menor){
            menor = empleados[i].salario;
            posm = i;
        }
        cin.ignore();
        cout<<endl;
        
    }


    cout<<"\n::Imprimiendo datos del empleado con mayor salario::\n";
    cout<<"Nombre: "<<empleados[posM].nombre<<endl;
    cout<<"Edad: "<<empleados[posM].edad<<endl;
    cout<<"Salario: "<<empleados[posM].salario<<endl;

    cout<<"\n::Imprimiendo datos del empleado con el menor salario::\n";
    cout<<"Nombre: "<<empleados[posm].nombre<<endl;
    cout<<"Edad: "<<empleados[posm].edad<<endl;
    cout<<"Salario: "<<empleados[posm].salario<<endl;

    return 0;
}