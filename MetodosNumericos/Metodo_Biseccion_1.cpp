#include <iostream>
#include <cmath>
#include <iomanip>
// #define PRESICION 6
using namespace std;

double f(double x);
double biseccion( double a,  double b, double tolerancia, int maxIteracion);
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

 double biseccion( double a,  double b, double tolerancia, int maxIteracion){
     double xr,xAntiguo,error;
     int iter=0;
    /* IMPRIMIR EL ENCABEZADO */
    cout<<"| it\t| A\t\t| B\t\t|    Xr\t\t| f(A)\t\t| f(B)\t\t| f(Xr)\t\t| Error\n";
    cout<<"|------------------------------------------------------------------------------------------------------|\n";

     do{    
        xAntiguo =xr;
        xr= (a+b)/2;
        error = fabs(double(xr-xAntiguo)/(xr)*100);

         /* IMPRIMIR LOS VALORES CALCULADOS  */
         cout<<"|  "<<iter<<"\t| "<< a <<"\t| "<< b <<"\t| \e[95m"<< xr <<"\e[0m\t| "<< f(a) <<"\t| "<< f(b) <<"\t| "<< f(xr) <<"\t| "<<error<<endl; 
        /* CONDICION  */
        if(abs(f(xr)) <= tolerancia){
            cout<<"\n\nPara la tolerancia \e[34m"<< tolerancia <<"\e[0m la raiz de f es: \e[93m"<< xr <<"\e[0m"<<endl;
            break;
        }else{
            if(f(xr) * f(a) > 0){
                a = xr;
            }else if(f(xr)* f(b) > 0){
                b = xr; 
            }
        }

        iter++;
        // return xr;
     }while((abs(f(xr))>tolerancia) && (iter < maxIteracion));

}
/**FUNCION 
 * Aqui se pueda replazar la funcion por otra
 */
double f(double x){
    return cos(x)-x;
}