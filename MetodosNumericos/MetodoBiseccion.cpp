#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
// #define LIMITACION 5

using namespace std;

/**======================================================
 * =                METODO DE BISECCION                 =
 **======================================================*/

double f(double x );
double biseccion(double xi, double xu, double tol, double imax);
double funcion;
int main(){
    /** Paso nuemro 1:
     *  Conocer las dos varibles de entrada del intervado cerrado
     *  [ xi, xu]
     *  Luego l
     * 
     */
    double xi, xu, tol, raiz;
    int imax;

    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE BISECCION                  =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";
    
    cout<<"\n\tFuncion: cos(x)-x\n\tValores Iniciales:[0,1.57080]\n\tCon cinco Interaciones\n";
    cout<<"\nDigita los valores iniaciales\n\n";

    cout<<"Valor de [\e[44mXi\e[0m, \e[41mXu\e[0m ]:";      cin>>xi>>xu;
    cout<<"\n";
    cout<<"Tolerancia: ";                                   cin>>tol;
    cout<<"Cuantas iteraciones: ";                          cin>>imax;
    
    raiz = biseccion(xi,xu,tol,imax);
    cout<<"La raiz es: "<<raiz<<endl;    
    
    return 0;
}

double biseccion(double xi, double xu, double tol, double imax){
    double xr;
    int iter=0;
    cout<<"\e[96m| it\t| Xi\t\t| Xu\t\t| Xr\t\t| f(Xi)\t\t| f(Xr)\t\t| f(Xi) * f(Xr)\t\t| Error\n\e[0m";
    cout<<"|--------------------------------------------------------------------------------------------------------------------------------------|\n";
    
    do{ 
       xr = (xi + xu)/2;
       if(f(xi) * f(xr)<0){
           xu = xr;
       }else{
           xi= xr;
       }

        cout<<"\t| "<<iter<<"\t| "<<xi<<"\t\t| "<<xu<<"\t\t| "<<xr<<"\t\t| "<<f(xi)<<"\t\t| "<<f(xr)<<endl; 
        iter++;
    }while ((abs(f(xr))>tol) && (iter < imax));
    return xr;   
}

double f(double x ){
	    funcion=cos(x)-x;
    return  funcion;
}