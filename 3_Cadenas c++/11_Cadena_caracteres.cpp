#include <iostream>
#include <string.h>
using namespace std;
//5. Hacer un programa que determine  s una palabra  es 
// polindroma 

// oso = oso; reconocer = reconocer; anita lava latina

int main(){

    char palabra1[20],
         palabra2[20];

    cout<<"Digite una palabra: ";
    cin.getline(palabra1 ,20,'\n');

    strcpy(palabra1,palabra2);

    strrev(palabra1); //invertir a palabra1

    if(strcmp(palabra1,palabra2)==0){
        cout<<palabra2<<" es  un polindrome";
    }else{
        cout<<palabra1<<"  no es polindrome."<<endl;
    }

    return 0;
}