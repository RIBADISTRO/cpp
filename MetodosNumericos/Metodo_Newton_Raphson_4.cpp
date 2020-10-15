#include <iostream>
#include <iomanip>
#include <cmath>
#define PRESICION 10
using namespace std;

double f(double x);   
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
   double x1, fx, dfx, error;    // Diferencia entre dos aproximaciones sucesivas: x1 - x0
   int Iter = 1; // # de iteraciones
   bool converge = true;

   cout<<"| Iter      |    Xo\t | f(x) \t    |   f'(x)\t| Err"<<endl;
   cout<<"---------------------------------------------------------------"<<endl;    
    while (Iter <= maxIteracion){
        if (Iter > maxIteracion){
            converge = false;
            break;
        }else{
            x1 = Xo - f(Xo) / f_derivada(Xo);
            fx = f(Xo);
            dfx= f_derivada(x1);
            error = fabs((x1 - Xo)/x1*100);              
            cout <<"| "<< Iter<<" | "<<Xo<< " | " <<setw(PRESICION)<< fx << " | " <<setw(PRESICION)<< dfx <<  " | "<<setw(PRESICION) << error << endl;
            if (error <= tolerancia) {
                converge = true;
                break;            
            }else{
                Xo = x1;
            }
    }
    Iter++;
    }
    
    if (converge) {
        cout << "\n\nPara una tolerancia de " << tolerancia << " la RAIZ APROXIMADA de f es = " << x1 << endl;
    
    } else {
        cout << "\n\nSe sobre pasó la máxima cantidad de iteraciones permitidas" << endl;
    }
}

double f(double x){
    // return pow(exp(1),-x)-x;
    return 2*sin(x)-x;
}


double f_derivada(double x){
    return 2*cos(x)-1;
    // return -pow(exp(1),-x)-x;
}