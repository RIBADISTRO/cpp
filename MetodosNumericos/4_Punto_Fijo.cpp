#include <iostream>
#include <math.h>
using namespace std;
/*  PUNTO FIJO
¿Que es?: Es el metodo  iterativo  que permite resolver  sistemas  de ecuacion que
no  necesariamente  son lineales.

Concepto de iterativo:
repetir  un proceso  hasta  obtener  un resultado.

Idea  del metodo:

Partiendo  de punto  inicial  aplicando  la formula o funcion g(x) calculamo los
terminos  sucesivos.

Condicion: si -1<=g'(x)<=1  el metodo  converge a la raiz.

             PASOS PARA HALLARLO
1. Determinar el intervalo de confianza y el punto medio.
2. Hallar todos los posibles despejes de "x".
3. Tomamos cada despeje y lo derivamos.
4. Reemplazamos el punto medio del interativo de confianza aquel  que
   cumpla lo siguiente -1<=g'(x)<= 1 sera apto para iterar.
5. Iterar con el despeje apto.
6. Reemplazar en la funciona original, para obtener la raiz

*/ 
float formulag(float x){

    return cos(x);

}
float formula(float fx){


    return cos(fx)-fx;//
}


int main(){
    float a,b,fx,fg,fc,aux,tol,fa,x,
          c = 0,fb =1, error = 1;
    int   opc,n,  cont;

    cout<<"-------------Metodo de Punto Fijo---------------------  "<<endl;
    cout<<"1.Iteracion\n2.f(x)\n3.Error\n";
    cin>>opc;

    if(opc == 1){
        cout<<"Cuantas Iteraciones son:";       cin>>n;

    } else{
        cout<<"Que tolerancia: ";               cin>>tol;
    }
        cout<<"Digita el valor de x: ";         cin>>x;
    
    cont = 0;
    cout<<"Iteraciones \tx\tfx\tfg\tError"<<endl;
/*#########################1.Iteracion################################################*/
    if(opc = 1){
        while(cont<=0){
            if(cont == 0){
                error = 1;
            }else{
                error = fabs((x-aux)/x);
            }
            fx = formula(x);
            fg = formulag(x);
            cout<<cont<<"\t"<<x<<"\t"<<fx<<"\t"<<fg<<"\t"<<error<<endl;
            aux = x;
            x = fg;

            if(fx * x < 0){
                a = x;
            }
            cont++;
        }

    }
/*###################################2.f(x)-Funcion######################################*/
    else if (opc == 2){
        while(fabs(fc) > tol){
            aux=c;
            if (cont == 0)
                error = 1;
                else
                    error=fabs((c-aux)/c);
                    fx=formula(fx);
                    x=formula(x);

            cout<<cont<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<fa<<"\t"<<fb<<"\t"<<fc<<"\t"<<error;

            if(fx * x < 0){
                x=c;
            }else{
                a=c;//baxster
            }
            cont++;
       }
   }
/*#####################################3.Error-tolerancia####################################*/
    else{
       while(error > tol){
            aux=c;
            c=(a+b)/2;
            if (cont == 0)
                error = 1;
            else
                error=fabs((c-aux)/c);
            fa=formula(a);
            fb=formula(b);
            fc=formula(c);

            cout<<cont<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<fa<<"\t"<<fb<<"\t"<<fc<<"\t"<<error;

            if(fa * fc < 0){//comparaci�n de signos
                b=c;//toma el dato de c para b
            }else{
                a=c;
            }
            cont++;

       }
   }
    return 0;
}
