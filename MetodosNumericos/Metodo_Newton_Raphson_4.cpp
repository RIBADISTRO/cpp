#include <iostream>
#include <iomanip> // setprecision
#include <cmath>
#define PRESICION 10
using namespace std;

double funcion(double x);    
double f_derivada(double x); 
void newton_raphson(double Xo, double tolerancia, int maxIteracion);


int main(){
   double Xo, tolerancia;
   int maxIteracion; 
   cout<<"\n\t\e[36m=================================================\e[0m\n";
   cout<<"\t\e[36m=          METODO DE NEWTON RAPHSON             =\e[0m\n";
   cout<<"\t\e[36m=================================================\e[0m\n";

   cout<<"\tDigita [Xi]: ";                                cin>>Xo; 
   cout<<"\tTolerancia: ";                                 cin>>tolerancia;
   cout<<"\tMaxima iteracion: ";                           cin>>maxIteracion;
   newton_raphson(Xo, tolerancia, maxIteracion);
   cin.get();
   return 0;
}

void newton_raphson(double Xo, double tolerancia, int maxIteracion){
    double Xn, error=1, fx, dfx, converge;
    int iter=1;
    cout<<"\t| Iter      |    xi\t | f(x)\t           | f'(x)\t| Err"<<endl;
    cout<<"\t---------------------------------------------------------------"<<endl;
    cout<<"\t| "<<setw(PRESICION)<<iter<<"| "<<setw(PRESICION)<<Xo<<" | "<<setw(PRESICION)<<funcion(Xo)<<" | "<<setw(PRESICION)<<f_derivada(Xo)<<" | "<<setw(PRESICION)<<" -- "<<endl;
    while(iter <= maxIteracion){
        if(iter>maxIteracion){
            converge = false;
            break;
        }else{
            fx= funcion(Xo);
            dfx = f_derivada(Xo);
            Xn = Xo- (fx/dfx);
            error = fabs((Xn-Xo)/Xn);
            cout<<"\t| "<<setw(PRESICION)<<iter<<"| "<<setw(PRESICION)<<Xn<<" | "<<setw(PRESICION)<<fx<<" | "<<setw(PRESICION)<<dfx<<" | "<<setw(PRESICION)<<error<<endl;
        }if(error <= tolerancia){
            converge = true;
            break;
        }else{
            Xo = Xn;
        }         
        iter++;
    }
        if (converge) {
            cout << "\n\tPara una tolerancia de " << tolerancia << " la RAIZ APROXIMADA de f es = " << Xn << endl;
        
        } else {
            cout << "\n\tSe sobrepasó la máxima cantidad de iteraciones permitidas" << endl;
        }
}   

double funcion(double x){
    return pow(exp(1),-x)-x;
}


double f_derivada(double x){
    return -pow(exp(1),-x)-1;
}