#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Busqueda secuencial

a[5]={3,4,5,6,2}; dato = 4
*/

int main(){

    int a[]={3,4,2,1,5},
        i=0 , dato = 9;
    char band= 'F';

    //Busqueda secuencial.

    while((band== 'F')  && (i<5)){
        if(a[i]== dato){
            band = 'V';
        }
        i++;
    }
    
    if(band=='F'){
        cout<<" El numero a buscar no existe en el arreglo"<<endl;
    }
    else if(band == 'V'){
        cout<<"El numero a sigo encontrado en la pos "<<i-1<<endl;
    }

    return 0;
}