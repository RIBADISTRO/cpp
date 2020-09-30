#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip> //setpresicion
#define LIMITACION 6

using namespace std;

/**======================================================
 * =                METODO DE BISECCION                 =
 **======================================================*/

double f(double x );
double biseccion(double xi, double xu, double tol, int imax);
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

    cout<<"Valor de [\e[44mXi\e[0m, \e[101mXu\e[0m ]:";      cin>>xi>>xu;
    cout<<"\n";
    cout<<"Tolerancia: ";                                    cin>>tol;
    cout<<"Cuantas iteraciones: ";                           cin>>imax;
    
    raiz = biseccion(xi,xu,tol,imax);
    cout<<"La raiz es: \e[105m"<<raiz<<"\e[0m"<<endl;    
    
    return 0;
}


double f(double x ){  
    return cos(x)-x;
}

double biseccion(double xi, double xu, double tol, int imax){
    double xr;
    int iter=0;

    cout<<"| it\t| Xi\t\t| Xu\t\t|    Xr\t\t| f(Xi)\t\t| f(Xr)\t\t| Error\n";
    cout<<"|------------------------------------------------------------------------------------------------------|\n";
    do{ 

       xr = (xi + xu)/2;
       if(f(xi) * f(xr)<0){
           xu = xr;
       }else{
           xi= xr;
       }

        cout<<setprecision(LIMITACION)<<"|  "<<iter<<"\t| "<<xi<<"\t| "<<xu<<"\t| "<<xr<<"\t| "<<f(xi)<<"\t\t| "<<f(xr)<<endl; 
        iter++;

    }while ((abs(f(xr))>tol) && (iter < imax));
    return xr;   
}
