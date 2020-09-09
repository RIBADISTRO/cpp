#include <iostream>
#include <string.h>
using namespace std;
//Transformar una cadena a numero - funcion atoi() y atof()
int main(){

     char num[]="1.23";

     float numer;

     numer = atof(num);

     cout<<"Numero: "<<numer<<endl;

    return 0;
}