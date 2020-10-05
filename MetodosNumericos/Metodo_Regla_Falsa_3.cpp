#include <iostream>
#include <cmath>
#include <iomanip>
#define PRESICION 10
using namespace std;

double f(double fx);
double ReglaFalsa(double a, double b, double tolerancia, int maxIteracion);

int main(){
    double a, b, tolerancia;
    int maxIteracion;
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE REGLA FALSA                =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    cout<<"Digita [a,b]: ";                               cin>>a>>b; 
    cout<<"\tTolerancia: ";                               cin>>tolerancia;
    cout<<"\tMaxima iteracion: ";                         cin>>maxIteracion;
    ReglaFalsa(a, b, tolerancia, maxIteracion);
    return 0;
}   

double ReglaFalsa(double a, double b, double tolerancia, int maxIteracion){
    double Xr, error=1, fa, fb, fXr, aux;
    int iter=1;
    cout<<"| Iter      |    A\t |  B\t |Xr  \t | f(A) \t| f(B) \t| f(Xr)\t | f(A)*f(Xr) \t| Err%"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
     while(iter <= maxIteracion){
        aux = Xr;
        if(iter == 1){
            error = 1;
        }else{
            error = fabs((Xr-aux)/Xr);
        }
        fa = f(a);
        fb = f(b);
        Xr = b-((fb*(a-b))/(fa-fb));
        fXr = f(Xr);
        cout<<"|  "<<iter<<"\t| "<<setw(PRESICION)<< a <<"\t| "<<setw(PRESICION)<< b <<"\t| \e[95m"<<setw(PRESICION)<< Xr <<"\e[0m\t| "<<setw(PRESICION)<< fa <<"\t| "<<setw(PRESICION)<< fb <<"\t| "<<setw(PRESICION)<< fXr <<"\t| "<<setw(PRESICION)<<error<<endl; 
        if(abs(f(Xr)) <= tolerancia){
            cout<<"\n\nPara la tolerancia \e[34m"<< tolerancia <<"\e[0m la raiz de f es: \e[93m"<< Xr <<"\e[0m"<<endl;
            break;
        }else{
            if(fa * fXr < 0){
                a=Xr;
            }else if(fa * fXr < 0){
               b=Xr;
            }
        }
    iter++;
    }
}

double f(double x){
    // return (pow(x,3)+(4*pow(x,2)))-10;
    return exp(1)*pow(x,-x)-log(x);
}
