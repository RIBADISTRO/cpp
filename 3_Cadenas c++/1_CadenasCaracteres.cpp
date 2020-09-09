#include <iostream>
#include <string.h>
using namespace std;
/*      FUNCIONES ESPECIFICAS DE gets,cin,cin,getline();
    cin>>'var'; ---> se usa solamente en numeros no funciona en cadena de caracteres
    gets>>'var'; ---> No es bueno por que no respeta los espacio, especidicado;
    cin.getlines('var','tamaño','argumento'); --> La mejor opcion para cadena de caracteres
*/ 
int main(){
    char  palabra1[]="INDEPENDENCIA";  //Cadena de caracteres.
    char  palabra2[]={'I','N','D','E','P','E','N','D','E','N','C','I','A'};


    cout<<palabra1<<endl;
    cout<<palabra2<<endl;
    return 0;
}
