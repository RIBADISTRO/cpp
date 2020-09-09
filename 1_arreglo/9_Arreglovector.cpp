#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Realiza un programa  que  defina dos vector vector de caracteres y despues
almacene el contenido de ambos vectores en un nuevo vector, situando  en primer
 lugar los elementos del segundo vector. Muestre el contendo dl nuevo vector
  en la salidad estandar.
*/
int main(){

    char letra1[] = {'a','b','c','d','j','f'};
    char letra2[] = {'g','h','i','j','k','m'};
    char letra3[12];

    //Copiar arreglo letra 1 -> letra3

    for (int i = 0; i < 6; i++) {
        letra3[i] = letra1[i];
    }

    for (int i = 6; i <12; i++){
        letra3[i]= letra1[i];
    }
    
    for (int i = 0; i < 12; i++){
        cout<<"Arreglo: "<<i+1<<" [ "<<letra3[i]<<" ]"<<endl;
    }  

    return 0;
}