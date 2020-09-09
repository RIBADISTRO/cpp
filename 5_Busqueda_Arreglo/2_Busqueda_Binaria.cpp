#include <iostream>
#include <string.h>
using namespace std;
// Busqueda binaria
int main(){
    int numero[] = {1,2,3,4,5},
        inf, sup, mitad,dato;
    char band = 'F';

    dato = 4;

    //algoritmo de busqueda binaria,
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    inf = 0;
    sup = 5 ;
    while(inf <= sup){
        mitad = (inf + sup)/2;
        if (numero[mitad] == dato) {
            band = 'V';
            break;
        }
        if(numero[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if(numero[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup)/2;
        }
    }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    if(band == 'V'){
        cout<<"El numero a sido encontrado "<<mitad<<endl;
    }else{
        cout<<"El numero NO a sido encontrado"<<endl;
    }
    
 
    return 0;
}