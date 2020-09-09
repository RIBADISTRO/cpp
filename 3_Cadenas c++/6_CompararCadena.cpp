#include <iostream>
#include <string.h>
using namespace std;
// Comparar cadenas -Funcion strcmp()

int main(){
    char frase1[]="julio",
         frase2[]="Julio";

    if (strcmp(frase1,frase2)!=0){
        cout<<"Las frase son diferentes"<<endl;
    }
    

    return 0;
}