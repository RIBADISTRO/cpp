#include <iostream>
#include <cmath>
#include <iomanip>
#define PRESICION 10
using namespace std;

double funcion_B(double x);
double funcion_PF(double fx);
double derivada(double x);
double f(double fx);
double biseccion( double a,  double b, double tolerancia, int maxIteracion);
double puntoFijo(double Xo, double tolerancia, int maxIteracion);
double ReglaFalsa(double a, double b, double tolerancia, int maxIteracion);
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void MetodBiseccion(){    
    
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE BISECCION                  =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    double a, b, tolerancia;                            // Varible reales
    int maxIteracion;                                   //Varible entera
    
    cout<<"\tDigita [a,b]: ";     cin>>a>>b;              //Solicita digitar y almacenar en la varible de los intervalo
    cout<<"\tTolerancia: ";       cin>>tolerancia;        //solicita usuario dijitar y almacenar en la varible
    cout<<"\tMaxima Iteracion: "; cin>>maxIteracion;      //Numero de iteracion que va repetir mi funcion
    biseccion(a, b, tolerancia, maxIteracion);
    
}

 double biseccion( double a,  double b, double tolerancia, int maxIteracion){
     double xr,xAntiguo,error;
     int iter=0;
    system("pause");
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
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void MetodoPuntoFijo(){
    double Xo, tolerancia;
    int maxIteracion;
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE PUNTO FIJO                 =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    cout<<"\n\tAproximacion Inicial Xo: ";                cin>>Xo;
    cout<<"\tTolerancia: ";                               cin>>tolerancia;
    cout<<"\tMaxima iteracion: ";                         cin>>maxIteracion;
    puntoFijo(Xo, tolerancia, maxIteracion);
    
}   

double puntoFijo(double Xo, double tolerancia, int maxIteracion){
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

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MetodoPuntoFijo()

void MetodoReglaFalsa(){
    double a, b, tolerancia;
    int maxIteracion;
    cout<<"\n\t\e[36m=================================================\e[0m\n";
    cout<<"\t\e[36m=          METODO DE REGLA FALSA                =\e[0m\n";
    cout<<"\t\e[36m=================================================\e[0m\n";

    cout<<"\tDigita [a,b]: ";                               cin>>a>>b; 
    cout<<"\tTolerancia: ";                               cin>>tolerancia;
    cout<<"\tMaxima iteracion: ";                         cin>>maxIteracion;
    ReglaFalsa(a, b, tolerancia, maxIteracion);
}   

double ReglaFalsa(double a, double b, double tolerancia, int maxIteracion){
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
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MetodoPuntoFijo()

int main(){
           
    int opc;
    do{
        
        system("clear");
        system("pause");            

        cout<<"\n\t\e[36m=================================================\e[0m\n";
        cout<<"\t\e[36m=:::::::::::::   METODOS NUMERICOS  ::::::::::::=\e[0m\n";
        cout<<"\t\e[36m=================================================\e[0m\n";
        cout<<"\t\t->:::::Menu:::::<-\n";
        cout<<"\t1.Metodo de biseccion\n";
        cout<<"\t2.Metodo de Punto Fijo\n";
        cout<<"\t3.Metodo de Regla falsa\n";
        cout<<"\t4.Metodo de Newton Raphson\n";
        cout<<"\t5.salir\n\n";
        cout<<"::::::::Selecciona una Opcion: ";    cin>>opc;

        switch(opc){
            case 1:
            MetodBiseccion();       
            
            break;
            case 2:
            MetodoPuntoFijo();
            break;
            case 3: 
            MetodoReglaFalsa();
            break;
            case 4: 
            break;
            default: break;

        }
    }while(opc != 5);
        return 0;
}
