#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Hacer un programa  de tipo  2*2, llenarla de numeros y 
luego copiarlo todo su contenido hacia otra matriz
*/ 
int main (){
    int tabla1[2][2]={{2,3},{4,5}};
    int nTabla[2][2];

    cout<<"Almacenar matriz con numeros definidos\n";
    for (int  i = 0; i < 2; i++){
        for (int  j = 0; j < 2; j++){
            cout<<tabla1[i][j];
            nTabla[i][j]=tabla1[i][j];
        }       
        cout<<endl;
    }

    cout<<"\nMostrando una matriz copiado\n";
    for (int  i = 0; i < 2; i++){
        for (int  j = 0; j < 2; j++){
            cout<<nTabla[i][j];
            
        }       
        cout<<endl<<endl;
    }


    return 0;
}