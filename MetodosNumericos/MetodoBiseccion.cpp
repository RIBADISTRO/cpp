#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#define LIMITACION 10

using namespace std;

/**======================================================
 * =                METODO DE BISECCION                 =
 **======================================================*/

float f(float x );
float funcion;
int main(){

    float xi, xu, xr, fxi, fxr, pm,error;
    int  iter=0,imax;

    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE BISECCION                  =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";
    
    cout<<"\n\tFuncion: cos(x)-x\n\tValores Iniciales:[0,1.57080]\n\tCon cinco Interaciones\n";
    cout<<"\nDigita los valores iniaciales\n\n";

    cout<<"Valor de [\e[44mXi\e[0m, \e[41mXu\e[0m ]:";      cin>>xi>>xu;
    cout<<"\n";
    cout<<"Cuantas iteraciones: ";                          cin>>imax;
    cout<<"\e[96m|it\t|Xi\t\t|Xu\t\t|Xr\t\t|f(Xi)\t\t\t|f(Xr)\t\t|f(Xi) f(Xr)\t\tt|Error\n\e[0m";
    cout<<"|--------------------------------------------------------------------------------------------------------------------------------------|\n";

    do{ 
        fxi = f(xi);
        fxr = f(xr);
        /* Paso numero 1*/
        xr = (xi+xr)/2;
        if(){

        }
        cout<<setprecision(LIMITACION)<<"| "<<iter<<"\t| "<<xi<<"    \t\t"<<xu<<"\t\t"<<xr<<"\t\t"<<fxi<<"\t\t"<<fxr<<endl; 
        iter++;
    }while (iter<=imax);
    


    return 0;
}

float f(float x ){
	    funcion=cos(x)-x;
    return  funcion;
}