#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    // Varible a utilizar 
    int saldo_inicial = 1000, opc;
    float extra, saldo=0,retiro;

    //Mensaje de bienvenida
    cout<<"\tBienvenido su cajero automatico"<<endl;
    
    //Menu 
    cout<<"1. Ingresar  dinero  en cuenta."<<endl;
    cout<<"2. Retirar dinero de la cuenta."<<endl;
    cout<<"3. Salir.\n"<<endl;
    cout<<"Opc: ";cin>>opc;
    
    
    //Funcion switch
    switch(opc){

        //Caso a elegir
        case 1: 
            cout<<"Digite la cantidad de dinero  para su cuenta: ";
            cin>>extra;
                saldo = saldo_inicial+ extra;
                cout<<"Dinero en cuenta:"<<saldo<<endl;
        break;
               
        
        case 2:
            cout<<"Digite la cantidad de dinero a retirar: ";
            cin>>retiro;

                if (retiro>saldo_inicial){
                    cout<<"No tiene esa cantidad de dinero"<<endl;
                }else{
                    saldo = saldo_inicial-retiro;
                    cout<<"Dinero en tu cuenta: "<<saldo<<endl;
                }      
        break;
        case 3:break;

    }

    return 0;
}

