#include <iostream>
using namespace std;
/*Intercambiar valor  de 2  varible  utilizando  paso    de parametro  por  
referencia */ 

void intercambio( int&, int& );
int main(){
    int num1 = 10,
        num2 = 3; 
        cout<<"El valor de num1 es: "<<num1<<endl;
        cout<<"El valor de num1 es: "<<num2<<endl;

        intercambio(num1,num2);
        cout<<"El nuevo valor es: "<<num1<<endl;
        cout<<"El nuevo valor es: "<<num2<<endl;

    return 0;
}

void intercambio( int& xNumero, int& yNumero){
    int aux;

    aux = xNumero;
    xNumero = yNumero;
    yNumero= aux;
}