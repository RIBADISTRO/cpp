#include <iostream>
using namespace std;
/*Escriba una funcion nombrela funpot() que eleve un numero 
entero que se le transmita a una potencia  en numero  entero 
positivo  y despliegue  el resultado . El  numero  entero 
positivo  debera  ser  el  segundo valor  transmitido  a la  funcion
*/ 
void pedirDATOS();
void funpot(int numeroIx, int numeroIy);
int num1, exponente;
int main(){

    pedirDATOS();   // Incoando mi funcion digite datos
    funpot(num1,exponente);   // Invocando mu funcion pasando los parametro
    return 0;
}

void pedirDATOS(){
    cout<<"Numero base: ";  cin>>num1;
    cout<<"   Exponete: ";  cin>>exponente;
}
            //  base ---------exponente
void funpot(int numeroIx, int numeroIy){
        long resultado=1;        //varible que alamcena la operacion.
        for (int i = 0; i < numeroIy; i++){
            resultado = resultado * numeroIx;// Realiza operacion, lo almacena en la variable  resultado.
        }
        cout<<"Resultado: "<<resultado<<endl;
}