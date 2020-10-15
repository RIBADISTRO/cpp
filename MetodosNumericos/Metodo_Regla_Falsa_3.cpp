#include <iostream>
#include <cmath>
#include <iomanip>
#define PRESICION 8
using namespace std;

double f(double fx);
void ReglaFalsa(double a, double b, double tolerancia, int maxIteracion);

int main(){
    double a, b, tolerancia;
    int maxIteracion;
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE REGLA FALSA                =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    cout<<"\tDigita [a,b]: ";                               cin>>a>>b; 
    cout<<"\tTolerancia: ";                               cin>>tolerancia;
    cout<<"\tMaxima iteracion: ";                         cin>>maxIteracion;
    ReglaFalsa(a, b, tolerancia, maxIteracion);
    return 0;
}   

void ReglaFalsa(double a, double b, double tolerancia, int maxIteracion){
    double Xr, error=1, fa, fb, fXr, aux;
    int iter=0;
    cout<<"| Iter  |   A\t\t |  B\t\t | Xr  \t\t | f(A) \t| f(B) \t\t| f(Xr)\t\t | Err%"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
     while(iter <= maxIteracion){
        aux = Xr;
        if(iter == 0){
            error = 1;
        }else{
            error = fabs((Xr-aux)/Xr);
        }
        fa = f(a);
        fb = f(b);
        Xr = b-((fb*(a-b))/(fa-fb));
        fXr = f(Xr);
        cout<<"|  "<<iter<<"\t| "<<fixed<<setprecision(PRESICION)<< a <<"\t| "<<fixed<<setprecision(PRESICION)<< b <<"\t| \e[95m"<<fixed<<setprecision(PRESICION)<< Xr <<"\e[0m\t| "<<fixed<<setprecision(PRESICION)<< fa <<"\t| "<<fixed<<setprecision(PRESICION)<< fb <<"\t| "<<fixed<<setprecision(PRESICION)<< fXr <<"\t| "<<fixed<<setprecision(PRESICION)<<error<<endl; 
        if(fabs(f(Xr)) <= tolerancia){
            cout<<"\n\nPara la tolerancia \e[34m"<< tolerancia <<"\e[0m la raiz de f es: \e[93m"<< Xr <<"\e[0m"<<endl;
            break;
        }else{
            if(fa * fXr < 0){
                b=Xr;
            }else{
               a=Xr;
            }
        }
    iter++;
    }
}

double f(double x){
    return (pow(x,3)+(4*pow(x,2)))-10;
    // return exp(1)*pow(x,-x)-log(x);
}
