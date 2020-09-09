#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>/*Establece la precisión decimal que se utilizará para formatear valores
                    de punto flotante en las operaciones de salida */
using namespace std;
// toleracina = es la distancia del la interseccion
//========================================================================================|>
// PROTOTIPO DE MI FUNCION
void funcionRF(float x);
//========================================================================================|>
// varible global
float calcula;

//========================================================================================|>
// Funcion de ecuacion

float funcion(float x){
    calcula=exp(x)-log(x);
    return calcula;
}
//========================================================================================|>
void funcionRF(){
    float a,b,c=0,fa=0,fb=0,fc=0,error=0,aux=0;
    int iteracion=1, maximoIteracion, cont, tolerancia;

    cout<<"Metodo de regla Falsa"<<endl;
    cout<<"\n\tFuncion e^(-x)-ln(x)\n\tValores iniciales [ 1,1.5 ]\n"<<endl;
    cout<<"ENTRADA [a,b]:";cin>> a >> b;

    cout<<"Interacion: ";cin>>maximoIteracion;
    
    fa=funcion(a);  
    fb=funcion(b);
    fc=funcion(c);
    if(fa==0){
        cout<<fa<<"Es Raiz"<<endl;
    }
    else{
       if(fb==0){
           cout<<fb<<"Es la Raiz"<<endl;
       }else{
           if (fa* fb < 0){
           aux = a - ((funcion(a)*(b - a))/(funcion(b) - funcion(a)));
           cont=1;
           aux = funcion(aux);
           error = tolerancia + 1;
            }while(fa* aux < 0){
                
            }

       }

    }
    
        // if(funcion(a) * funcion( b < 0)){
        //     cout<<"\nError al calcular la raiz del metod de  regla falsa"<<endl;
        //     cout<<"Porque la f( "<<a<<" ) y f( "<<b<<" ) tiene el mimo signo\n"<<endl;
        // }else{
            
        //     aux
        // }

    cout<<"|i\t|A\t\t\t|B\t\t\t|C\t\t\t|f(a)\t\t\t|f(b)\t\t\t|f(c)\t\t\t|Error\n";
    do{ 
        
        
        cout<<iteracion<<endl;
        iteracion++;//Aumeta el iterardor de uno en uno
    } while (iteracion <= maximoIteracion);
    

}


int main(){
    funcionRF();
    return 0;
}