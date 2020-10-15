#include <iostream>
#include <iomanip> // setprecision
#include <cmath>
#define PRESICION 10
using namespace std;

double f(double x);    // Retorna el valor de la función evaluada en x
double f_derivada(double x); // Retorna la derivada de la función evaluada en x
void newton_raphson(double Xo, double tolerancia, int maxIteracion);    // Función que calcula la raiz aproximada de una función


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
   double x1, error, fx,dfx, aux;    // Diferencia entre dos aproximaciones sucesivas: x1 - x0
   int Iter = 1; // # de iteraciones
   bool converge = true;
   cout<<"\n| Iter  |    Xo\t     | f(x) \t  |  f'(x)\t| f(x)/f'(x) | Err"<<endl;
   cout<<"---------------------------------------------------------------"<<endl;    
   do {    
      if (Iter > maxIteracion){
         converge = false;
         break;
      }else{
         x1 = Xo - f(Xo) / f_derivada(Xo);
         fx = f(Xo);
         dfx = f_derivada(x1);
         aux = fx- dfx;
         error = fabs((x1 - Xo)/x1*100);              
         cout <<"| "<<setw(5)<< Iter<<" | "<<setw(PRESICION)<<Xo<< " | " <<setw(PRESICION)<< fx << " | " <<setw(PRESICION)<< dfx <<  " | "<<setw(PRESICION)<<aux<<  " | "<<setw(PRESICION)<< error << endl;
            if (error <= tolerancia) {
               converge = true;
               break;            
            }else{
               Xo = x1;
            }
        }
        Iter++;
    
    }while (Iter < maxIteracion);
    
    if (converge) {
        cout << "\n\nPara una tolerancia de " << tolerancia << " la RAIZ APROXIMADA de f es = " << x1 << endl;
    
    } else {
        cout << "\n\nSe sobrepasó la máxima cantidad de iteraciones permitidas" << endl;
    }
}

double f(double x){
   //  return x * exp(cos(x)) / 1.5 - 1;
    //return exp(-x) + 3 * x - 3;
    return pow(exp(1),-x)-x;
}


double f_derivada(double x){
   // return exp(cos(x)) * (1 - x * sin(x)) / 1.5;
    //return -1 * exp(-x) + 3;
    return -pow(exp(1),-x)-x;
}