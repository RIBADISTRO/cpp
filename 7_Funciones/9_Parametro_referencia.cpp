#include <iostream>
using namespace std;

// Paso de parametro por referencia
void valNuevo(int& , int& );
int main(){
    int num1, num2;
    cout<<"Digite dos numero:";
    cin>>num1>>num2;
    valNuevo(num1,num2);


    cout<<"El nuevo valor del primer numero es:"<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es:"<<num2<<endl;
    return 0;
}
                //Direccion de memoria
void valNuevo(int& Xnumero, int& Ynumero){
    cout<<"El valor del primer numero  es:"<<Xnumero<<endl;
    cout<<"El valor del segundo numero es:"<<Ynumero<<endl;
    Xnumero = 100;
    Ynumero = 203;
}