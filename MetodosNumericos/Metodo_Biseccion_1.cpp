#include <iostream>
#include <cmath>
#include <iomanip>
#define PRESICION 8
using namespace std;

double funcion_B(double x);
void biseccion( double a,  double b, double tolerancia, int maxIteracion);
int main(){
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE BISECCION                  =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    double a, b, tolerancia;                            // Varible reales
    int maxIteracion;                                   //Varible entera
    
    cout<<"Digita [a,b]: ";     cin>>a>>b;              //Solicita digitar y almacenar en la varible de los intervalo
    cout<<"Tolerancia: ";       cin>>tolerancia;        //solicita usuario dijitar y almacenar en la varible
    cout<<"Maxima Iteracion: "; cin>>maxIteracion;      //Numero de iteracion que va repetir mi funcion
    biseccion(a, b, tolerancia, maxIteracion);
    return 0;
}

 void biseccion( double a,  double b, double tolerancia, int maxIteracion){
     double xr,xAntiguo,error;
     int iter=0;

    /* IMPRIMIR EL ENCABEZADO */
    cout<<"| it\t| A\t\t| B\t\t|    Xr\t\t| f(A)\t\t| f(B)\t\t| f(Xr)\t\t| Error\n";
    cout<<"|-------------------------------------------------------------------------------------------------------|\n";

     do{    
        xAntiguo =xr;
        xr= (a+b)/2;
        error = fabs(double(xr-xAntiguo)/(xr)*100);

         /* IMPRIMIR LOS VALORES CALCULADOS  */
         cout<<"|  "<<iter<<"\t| "<<setw(PRESICION)<< a <<"\t| "<<setw(PRESICION)<< b <<"\t| \e[95m"<<setw(PRESICION)<< xr <<"\e[0m\t| "<<setw(PRESICION)<< funcion_B(a) <<"\t| "<<setw(PRESICION)<< funcion_B(b) <<"\t| "<<setw(PRESICION)<< funcion_B(xr) <<"\t| "<<setw(PRESICION)<<error<<endl; 
        /* CONDICION  */
        if(abs(funcion_B(xr)) <= tolerancia){
            cout<<"\n\nPara la tolerancia \e[34m"<< tolerancia <<"\e[0m la raiz de f es: \e[93m"<< xr <<"\e[0m"<<endl;
            break;
        }else{
            if(funcion_B(xr) * funcion_B(a) > 0){
                a = xr;
            }else if(funcion_B(xr)* funcion_B(b) > 0){
                b = xr; 
            }
        }

        iter++;
        // return xr;
     }while((abs(funcion_B(xr))>tolerancia) && (iter < maxIteracion));

}
/**FUNCION 
 * Aqui se pueda reeplazar la funcion por otra
 */
double funcion_B(double x){
    return cos(x)-x;
}