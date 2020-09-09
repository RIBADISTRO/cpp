#include<iostream>
#include<stdlib.h>
#include<cmath>
#include <iomanip>/*Establece la precisión decimal que se utilizará para formatear valores
                    de punto flotante en las operaciones de salida */
using namespace std;
#define LIMITACION 10

/*      BISECCION

La funcion  del metodo  de biseccion  es encontrar  la raiz  de una  encuacion  y consiste 
 en elegir  un intervalo  en metades  asta  dar  con la raiz

                                        Formula                 Error
                                                            
                                            (a+b)             | XrNuevo-XrAnterior  |
                                        c=----------        e=|---------------------|*100=%
                                              2               |     XrNuevo         |

    PASOS A SEGUIR:

    1. Elegir  valores  iniciales Xi(Inferior) y Xu(Superior) comprobar  que f(Xi)*f(Xu)>0
    2. Una apoximacion de la  raiz, se  determina  mediante  

            (Xi+Xu)           
        c=----------   
              2  
    3. Realice  las siguientes evalucaiones, para  determinar  en que  subintervalo se  encuetra la raiz
            a) si f(Xi)*f(Xu) < 0  Cambiar  Xu = Xr  y vuelve al paso 2
            b) si f(Xi)*f(Xr) > 0  cambiar  Xi = Xr  y vuelve al paso 2

    4. Si f(Xi)*f(Xr)=0 entonces  Xr  es  la raiz  aporximado  busacda.

                      FIN DEL PROCESO 
*/ 

float f(float x );
float funcion;

int main(){
    // Varible de la funcion
    float a, b, c, fa,fb,fc,error,pm;//Varibles reales
    int imax, iteraciones=0;//Datos enteros para iterar los bucles y 

    cout<<"\n\nMETODO DE BISECCION\n\tFuncion: cos(x)-x\n\tValores Iniciales:[0,1.57080]\n\tCon cinco Interaciones\n";
    cout<<"\nDigita los valores iniaciales\n\n";

    cout<<"Valor de [ a, b ]:";      cin>>a>>b;
    cout<<"\n";
    cout<<"Cuantas iteraciones: ";   cin>>imax;

    cout<<"\e[36m|i\t|A\t\t\t|B\t\t\t|C\t\t\t|f(a)\t\t\t|f(b)\t\t\t|f(c)\t\t\t|Error\n\e[0m";
    cout<<"|--------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
    do{
        
        fa=f(a);
        fb=f(b);
        c=(a+b)/2;

        if (iteraciones > 2){
             error=((f(b)-f(a))/f(b)*100);
        }
        
        cout<<setprecision(LIMITACION)<<"| "<<iteraciones<<"\t| "<<a<<"      \t\t"<<b<<"\t\t"<<c<<"\t\t"<<fa<<"\t\t"<<fb<<endl;        
        if(f(b) > 0 && f(c) > 0){
            a=c;
        }else{
            b=c;
            if (c=b){
                fc=f(c);
            }
        }
        iteraciones++;
    }while (iteraciones <= imax);    

    return 0;
}

float f(float x ){
	    funcion=cos(x)-x;
    return  funcion;
}
