#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Defina una estructura que sirva para representar  a una persona 
la estructura debe contener dos campos: el nombre  de la persona
y un valor de tipo logico que indica si la persona  tiene  algun 
tipo  de discapacidad. Realice un programa que  dado  un vector  
de persona que no tiene ninguna discapacidad y otro  que  contenga 
las persinas con discapacidad.

*/ 

struct Persona{

    char nombre[30];
    bool discapacidad;

}personas[100],
 personaSinD[100],
 personasConD[100];

int main(){
    int nPersonas,
        j=0,
        k=0;

    cout<<"\nDigite el numero de personas: ";          cin>>nPersonas;
    for (int i = 0; i < nPersonas; i++){        
        cout<<endl;                                    cin.ignore();
        cout<<"Digite su nombre:";                     cin.getline(personas[i].nombre,30,'\n');
        cout<<"La persona tiene discapacidad(1/0): ";  cin>>personas[i].discapacidad;

        if(personas[i].discapacidad==1){
            strcpy(personasConD[j].nombre,personas[i].nombre);
            j++;
        }else{
            strcpy(personaSinD[k].nombre,personas[i].nombre);
            k++;
        }
        
    }

    
    cout<<"\n:::Mostrar  las personas  sin Discapcidad:::\n"<<endl;
    for (int i = 0; i < k; i++){
        cout<<"\t\e[5m"<<personaSinD[i].nombre<<"\e[0m"<<endl;
    }

    cout<<"\n:::Mostrar  las personas  con Discapcidad:::\n"<<endl;
    for (int i = 0; i < j; i++){
        cout<<"\t\e[5m"<<personasConD[i].nombre<<"\e[0m"<<endl;
    }

    return 0;
}
