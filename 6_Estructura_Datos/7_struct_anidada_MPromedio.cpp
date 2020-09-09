#include <iostream>
#include <string.h>
using namespace std;

/*  Hacer dos estructura  una llamada  promedio  que tendra los siguiente campos
nota1, nota2, nota3; y otra  llamada alumnos  que  tendralos siguientes  miebros:
Nombre, sexo, edad; hacer  que la estructura promedio este anidada en la estructura 
promedio  este  anidada  en la estructura  alumno, luego pedir  todos los datos a 
un alumno, luego calcular  su promedio, y por ultimo  imprmir  todos  sus datos  incluido el promedio del mayor promedio.
*/ 

struct promedio{
    float nota1,
          nota2,
          nota3;
};

struct alumnos{
    char nombre[20],
         sexo[10];
    int  edad;
    struct promedio infoPromedio;
}alumnos[100];


int main(){
    int nAlumnos, posM=0;
    float promedioNotas[100],
          mayor=0;
          
          

    cout<<"Digite numeros de alumnos: ";        cin>>nAlumnos;
    for (int i = 0; i < nAlumnos; i++){
        cout<<endl;                             cin.ignore(); 
        cout<<i+1<<". Alumno:"<<endl; 
        cout<<"\tNombre del alumno: ";          cin.getline(alumnos[i].nombre,20,'\n');
        cout<<"\tDigite el sexo: ";             cin.getline(alumnos[i].sexo,20,'\n');
        cout<<"\tDigite la edad: ";             cin>>alumnos[i].edad;
        cout<<"\tDigite nota 1:";               cin>>alumnos[i].infoPromedio.nota1,'\n';
        cout<<"\tDigite nota 2:";               cin>>alumnos[i].infoPromedio.nota2,'\n';
        cout<<"\tDigite nota 3:";               cin>>alumnos[i].infoPromedio.nota3,'\n';
        
        promedioNotas[i] = (alumnos[i].infoPromedio.nota1+ alumnos[i].infoPromedio.nota2+alumnos[i].infoPromedio.nota3)/3;
        if(promedioNotas[i]>mayor){
            mayor= promedioNotas[i];
            posM=i;
        }
        
    }

    cout<<"\n:::Mostrando los datos del alumno::\n";
    cout<<"  Nombre: "<<alumnos[posM].nombre<<endl;
    cout<<"    Sexo: "<<alumnos[posM].sexo<<endl;
    cout<<"    Edad: "<<alumnos[posM].edad<<endl;
    cout<<"Promedio: "<<promedioNotas[posM]<<endl;
    
    

    return 0;
}