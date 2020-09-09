#include <iostream>
#include <stdlib.h>
using namespace std;
/* Ordenacion shell

La ordenacion  shell debe  el nombre a su invetor. DonalL. Se suele demoninar
tambien ordenacion por isercion con incrementos decrecientes.  Se cosidera  que es
una mejora del metodo de insercion directa.

En el algoritmo de insercion, cada elemento se compara con los elementos  contiguos
de su izquierda, uno tras otro. Si el elemento a insertar es el mas  pequeño  hay  que
realizar muchas comparaciones antes de colocarlo en su lugar  definitivo. El  algoritmos
de Shell modifica los saltos contiguos por saltos de mayor tamaño y  con ello  sonsigue  
que la ordenacion sea mas rapdia. Generalmente, se toma como  salto  inicial n/2 
(siendo n el numero de elemntos), luego en cada iteracion se  reduce  el  salto  a la 
mitad, hasta que el salto es de tamaño 1.
*/ 

/*Algoritmo de ordenacion shell:
Los pasos a seguir por el algoritmo para una lista de n elemento:

1. Se divide la lista original en n/2 grupos de dos, considerando un  un incremento o un salto
entre los elementos de n/2.

2. Se clasifica cada grupo por separado, comparando las parejas  de elementos  y si no  estan ordenados se intercambian.

3. Se divide ahora la lisra en la mitad de grupos (n/4), con un salto  entre los elemntos
   tambien mitda (n/4), y nuevamente se casifica cada grupo por  separado.

4. Asi sucecivamente, se sigue dividiendo la lista en la mitad de grupos
   que en  el  recorrido anterior con un salto decreciente en la mitad que el salto anterior, y luego  clasificado
   cada grupo por separado.

5. El algoritmo termina cuando el tamaño del salto es 1.

Ejemplo:
 6  1  5  2  3  4  0

n/2
 salto = 3 /2 -> 1

 si (a[j]<=<[k]) Entonces
    arreglo ordenado

sino
    intercambio

    6<=2 ? NO- Intercambio
    1<=3 ? Si
    5<=4 ? NO- Intrecambio
    6<=0 ? No- Intercambio
*/ 

// Ordenamiento Shell

void intercambio(float &x,float &y){
    float aux;
    aux = x;
    x = y;
    y=aux;
}

void ordenacionShell(float a[], int n){
    int salto,i,j,k;
    salto=n/2;

    while (salto > 0){
        for ( i = salto; i < n; i++){
            j = i - salto;
            while (j >= 0){
                k = j + salto;
                if( a[j] <= a[k]){
                    j = -1;
                }else{//Par de elemento estan desordenados
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto/2;
        
    }
    
}


int main(){
    float arreglo[]={4,6,1,9,5,10,2,11,19,7};
    ordenacionShell(arreglo,10);

    
    // ordenacion ascendente
    for (int i = 0; i < 10; i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    // ordenacion descentende
    for (int i = 9; i >=0; i--){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    return 0;
}
