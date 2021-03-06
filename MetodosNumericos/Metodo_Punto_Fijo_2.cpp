#include <iostream>
#include <cmath>
#include <iomanip>
#define PRESICION 10
using namespace std;

double funcion_PF(double fx);
double derivada(double x);
void puntoFijo(double Xo, double tolerancia, int maxIteracion);
int main(){
    double Xo, tolerancia;
    int maxIteracion;
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE PUNTO FIJO                 =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    cout<<"\n\tAproximacion Inicial Xo: ";                cin>>Xo;
    cout<<"\tTolerancia: ";                               cin>>tolerancia;
    cout<<"\tMaxima iteracion: ";                         cin>>maxIteracion;
    puntoFijo(Xo, tolerancia, maxIteracion);
    return 0;
}   

void puntoFijo(double Xo, double tolerancia, int maxIteracion){
    double Xn, error=1, fx, gx,aux,a;
    int iter=0;
    cout<<"| Iter      |    xi\t | g(x) \t    |   f(x)\t| Err"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    while(iter <= maxIteracion){
          if (iter == 0){
              error = 1;
          }else{
              error = fabs((Xo - aux)/Xo);
          }
          fx = funcion_PF(Xo);
          gx = derivada(Xo);
          cout<<"| "<<setw(PRESICION)<<iter<<"| "<<setw(PRESICION)<<Xo<<" | "<<setw(PRESICION)<<gx<<" | "<<setw(PRESICION)<<fx<<" | "<<setw(PRESICION)<<error<<endl;
          aux = Xo;
          Xo=gx;

          if(fx * Xo < 0){
            a=Xo;
          }
          iter++;
       }
}

double funcion_PF(double fx){
    return cos(fx)-fx;//
}
double derivada(double x){
  return cos(x);
}

