#include <iostream>
#include <cmath>
using namespace std;
double f(double x);
double puntoFijo(double xi, int imax);
int main(){
    float xi;
    int imax;
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE PUNTO FIJO                 =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    cout<<"\n\tAproximacion Inicial Xo: ";  cin>>xi;
    cout<<"\tMaxima iteracion: ";           cin>>imax;
}


double f(double x){
  return cos(x)-x;
}


double puntoFijo(double xi, int imax){
    double gx;
    int iter=0;
    cout<<"Iteracion\txi\tg(x)\tErr";
    do{


    }while (abs(f(gx)) && (iter <imax));
    return gx;
}
