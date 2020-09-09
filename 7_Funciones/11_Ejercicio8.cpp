#include <iostream>
using namespace std;
/*
Escriba una funcion nombrada cambio() que tenga un parametro en numeros entero
y seis parametros de referencia en numeros entero nombrados cien, cincuenta, 
veinte, diez, cinco y uno, respectivamente.
La funcion tiene que considerar el valor entero transmitido tiene que considerar
el valor entero transmitido como una cantidad en dolares y convertir el valor
en el numero menor de billetes equivalentes.*/

void cambio(int, int&, int&, int&, int&, int&, int&);
int main(){

    int valor, cien, cincuenta, veinte, diez, cinco, uno;
    cout<<"Digite la cantidad en dolares: ";
    cin>>valor;

    cambio(cien, cincuenta, veinte, diez, cinco, uno);

    cout<<"Cantidad de billetes a entregar como cambio es:"<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincueta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;


    return 0;
}

void cambio(int valor, int&  cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
    valor %= 100;

    cincuenta = valor/50;
    valor %= 50;

    veinte = valor/20;
    valor  %= 20;

    diez = valor/10;
    valor %= 10;

    cinco = valor/5;
    uno = valor%5;    
}