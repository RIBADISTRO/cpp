#include <iostream>
#include <string.h>
using namespace std;

/*Hacer un arreglo de estructura llamada  atleta
para  N atletas  que contenga los  siguientes 
campo: nombre, pais, numero_medallas. Y devuelva los datos (Nombre, pais ) 
del atleta que ha  ganado  el mayor  numero  de medallas
*/ 

struct Atleta{
    char nombre[20],
         pais[20];
    int Medallas;

}nAtletas[100];
int main(){
    int nAtl, pos=0, mayor=0;
    cout<<"\nNumero de atletas: "; cin>>nAtl;

    for ( int i = 0; i < nAtl; i++){
        cin.ignore();    
        cout<<endl;
        cout<<i+1<<". Atleta"<<endl<<endl;
        cout<<"\tDigite Nombre: ";    cin.getline(nAtletas[i].nombre,20,'\n');
        cout<<"\tPais: ";             cin.getline(nAtletas[i].pais,20,'\n');
        cout<<"\tMedallas: ";         cin>>nAtletas[i].Medallas;     

        if(nAtletas[i].Medallas>mayor){
            mayor = nAtletas[i].Medallas;
            pos = i;
        }   
    }

    cout<<endl;
    cout<<":::Datos de la atleta con mayor numero de medallas:::\n";
    cout<<"Nombre: "<<nAtletas[pos].nombre<<endl;
    cout<<"  Pais: "<<nAtletas[pos].pais<<endl;

    return 0;
}