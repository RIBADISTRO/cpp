#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;

#define LIMITACION 10

//>>>>>>>>>>>>>>>>>>>>>>>>>PROTOTIPO DE MI FUNCION>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
float f(float x );
double funcion;
void mnBisecion();
void menu();

//>>>>>>>>>>>>>>>>>>>>>>>>>FUNCION DE ECUACION>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
float f(float x ){
	funcion=cos(x)-x;
return  funcion;
}

//>>>>>>>>>>>>>>>>>>>>>>>> Algoritmo de METODO DE BISECCION>>>>>>>>>>>>>>>>>>>>>>>

void mnBisecion(){
        // Varible de la funcion
    float a, b, c, fa,fb,fc,error,pm;//Varibles reales
    int imax, iteraciones=0;//Datos enteros para iterar los bucles y 

    cout<<"\n\nMETODO DE BISECCION\n\tFuncion: cos(x)-x\n\tValores Iniciales:[0,1.57080]\n\tCon cinco Interaciones\n";
    cout<<"\nDigita los valores iniaciales\n\n";

    cout<<"Valor de [ a, b ]:";cin>>a;cin>>b;
    cout<<"\n";

    cout<<"Cuantas iteraciones: ";cin>>imax;

    cout<<"|i\t|A\t\t\t|B\t\t\t|C\t\t\t|f(a)\t\t\t|f(b)\t\t\t|f(c)\t\t\t|Error\n";
    cout<<"|--------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
    do{
        
        fa=f(a);
        fb=f(b);
        c=(a+b)/2;

        if (iteraciones > 2){
            error=((c-pm)/c);
        }

        pm = c;
        cout<<setprecision(LIMITACION)<<"|"<<iteraciones<<"\t|"<<a<<"\t\t"<<b<<"\t\t"<<c<<"\t\t"<<f(a)<<"\t\t"<<f(b)<<"\t\t"<<f(c)<<"\t"<<endl;        
        
        if(f(b) > 0 && f(c) > 0){
            a=c;
        }            
        else{
            b=c;
            if (pm=b){
                fc=f(c);
            }

        }
            

        iteraciones++;
        
    }while (iteraciones <= imax); 
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>FUNCION  MENU>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void menu(){
        int opc;
        cout<<":::::::::::::METODOS NUMERICOS::::::::::::\n\n";
        cout<<"->:::::Menu:<-\n";
        cout<<"\t1.Metodo de biseccion\n";
        cout<<"\t2.Metodo de la regla falsa\n";
        cout<<"\tsalir\n\n";
        cout<<"::::::::Selecciona una Opcion: ";cin>>opc;

        switch(opc){
            case 1:            
            mnBisecion();
            break;
            case 2: break;
            case 3: break;
            case 4: break;
            default: break;

        }
}



//=================FUNCION PRINCIPAL DE MI ALGORITMO========================= 
int main(){
    menu();
return 0;
}