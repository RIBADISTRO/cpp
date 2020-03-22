
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
/*
*  Hacer un enu de la siguientes opciones
* 
*  Caso 1: Cubo de un numero
*  Caso 2: Numero  par o impar
*  Caso 3: Salir
*/

int main(){

    //Varible a utilizar
    int opc,num;
    float numero,almacenar_cubo;

    //Menu de opciones
    cout<<"1. Cubo de un numero."<<endl;
    cout<<"2. Numero par o impar."<<endl;
    cout<<"3. Salir\n"<<endl;
    
    //Condicional
    cout<<"Opc: ";cin>>opc;
    switch(opc){

        //Casos
        case 1: 
            cout<<"Digita un numero: ";cin>>numero;
            almacenar_cubo = pow(numero,3);
            cout<<"El cubo es: "<<almacenar_cubo<<endl;
        break;

        case 2: 
            cout<<"Digita numero: ";cin>>num;
                if(num%2==0){
                    cout<<"El numero "<<num<<" es par\n";
                }else{
                    cout<<"El numero "<<num<<" no es par"<<endl;
                }        
        break;
        case 3: break;
    }

//Fin de programa
    return 0;
}

