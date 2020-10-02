#include <iostream>
#include <cmath>
using namespace std;

double funcion(double fx);
double g(double x);
double puntoFijo(double Xo, double tolerancia, int maxIteracion);
int main(){
    float Xo, tolerancia;
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

double puntoFijo(double Xo, double tolerancia, int maxIteracion){
    double Xn, error, fx, gx,fg;
    int iter=0;
    cout<<"| Iteracion\t| xi\t| g(x)\t| f(x)\t| Err"<<endl;
    cout<<"----------------------------------------------"<<endl;
    do{
      Xn = g(Xo);
      
      cout<<"| "<<iter<<endl;
      if(iter == 1){
        error = 1;
      }else{
        error = abs((Xn-Xo)/Xn);
      }
      fx =funcion(Xo);
      gx =g(Xo);
      /* Imprmir  */
      Xn = Xo;
      x = fg;
      if(fx * x < 0){//comparaci�n de signos
        a=x;//toma el dato de c para b
      }
      iter++;
    }while (g(Xo) != 0 && error > tolerancia && (iter < maxIteracion));
    // return gx;
}

double g(double x){
  return cos(x);
}
double funcion(double fx){
    return cos(fx)-fx;//
}

