#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Hacer un programa que lea 5 numeros en un  arreglo, los copies
a otro  arreglo multiplicandos por 2 y muestre  el segundo  arreglo
*/ 

int main(){
    int numero[5], arregloAlmacen[10],n;

    cout<<"Digite numero de elementos para un arreglo: ";
    cin>>n;
    if(n == 5){
        for (int i = 0; i < n; i++){
            cout<<"Digita elemento "<<i+1<<": ";
            cin>>numero[i];
        }

        for (int  i = 0; i < n; i++){

            arregloAlmacen[i]=numero[i]*2;
            // arregloAlmacen[i] *= n; 
        }

        cout<<"\nMostrando arreglo multiplicado."<<endl;
        for (int  i = 0; i < n; i++)
        {
            cout<<"\t\t\t[ "<<arregloAlmacen[i]<<" ]"<<endl;
        }
        
        
        
    }else{
        cout<<"Solo puedes digitar 5 elementos"<<endl;
    }    
    return 0;
}