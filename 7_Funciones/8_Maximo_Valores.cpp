#include <iostream>
using namespace std;
/*Escriba una plantilla de funcion  llamada  maximo() que  devuelva el valor
maximo  de tres  argumentos que se trasmitan  a la  funcion  cuando sea llamada.
Suponga que los tres argumentos seran  del  mismo tipo de datos.
*/ 

void pedirDATOS();
template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);




int main(){
    float Dato1= 3.45,
        Dato2= 4,
        Dato3= 5.9999999;
        cout<<"El valor maximo es: "<<maximo(Dato1,Dato2,Dato3)<<endl;


    return 0;
}

// void pedirDATOS(){
//     for (int  i = 0; i < 3; i++){
//         cout<<"Digite un numero: ";     cin>>num1;
//     }
    
// }

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3){
    TIPOD maximo;
    if((dato1>=dato2 && dato1>= dato3)){
        maximo = dato1;
    }else if((dato2 >= dato1 && dato2 >= dato3)){
        maximo = dato2;
    }else{
        maximo = dato3;
    }
    
}