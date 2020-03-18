#include <iostream>
#include <stdlib.h>
using namespace std;
/*
*Escribe un programa que defina un vector de numeros  y calcule  las
*multiplicaciones  acumuladas  de sus  elementos 
*/
int main(){
    // Varible
    int vector[5]= {3,6,2,5,3};
    int multiplicacion=1;   //Como es multiplicaion es sucesiva
    
    cout<<"La multiplicacion de los elementos de los vectores\n\n";

    // Funcion Ciclo
    for (int i = 0; i < 5; i++){
        multiplicacion *= vector[i];
        
    }
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;

return 0;
}