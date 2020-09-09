// EXAMEN DIAGNOSTICO
//Julio Rivera Bautista
//INgenieria en Sistemas Computacionales
#include <iostream>
#include <stdlib.h>
using namespace std;


/*                  PROBLEMA
// Generar un programa en consola que reciba maximo 10 numeros enteros separados por salto de linea.
// El programa deber imprimirlos de manera ascendente. Los numeros de entrada deben ser del 1 al
// 1000
*/
// ####################################################################################################
// PROTOTIPO DE MI FUNCION
void pedirDatos();
void ordenarNumeros(int *, int);
void mostrarNumeros(int *, int);

// VARIBLE  GLOBALES
int nElementos, *elemento;

// ####################################################################################################
int main(){
    // INVOCAR LA FUNCION
    pedirDatos();
    ordenarNumeros(elemento, nElementos);
    mostrarNumeros(elemento, nElementos);

    delete[] elemento;//Liberar el la memoria que se va utlizar en el arreglor asignado

//   getch();
    return 0;
}

// ####################################################################################################
void pedirDatos(){
    cout<<"Digite numeros de elementos: ";
    cin>>nElementos; // Pedira los numeros de elementos

    elemento = new int[nElementos];// Lo va almacenar como dato entero

     for (int i = 0; i < nElementos; i++){
         cout<<"Digite numero "<<i<<" :";
        //Se guarda en un puntero
        cin>>*(elemento+i);// Este es lo mismo que ponerle //"elemento[i]"
     }

}
// ####################################################################################################
void ordenarNumeros(int *elemento, int nElementos){
    // Varible auxiliar que va realizar la tarea
    int aux;

    // Como el metodo de la burbuja se realiza con for anidado
    // Se crea los bucles
    for (int i = 0; i < nElementos; i++){
        for (int j = 0; j < nElementos-1; j++){
            // Aqui se tiene que hacer la comprovacion
            if (*(elemento+j) > *(elemento+j+1)){// Esta declaracion es igual a "elemento[j] > elemento[j+1]"
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
        }
    }
}

// ####################################################################################################
void mostrarNumeros(int *elemento, int nElementos){

    cout<<"\n\nMostrando numeros ordenados:";
    for (int i = 0; i < nElementos; i++){
        cout<<endl<<*(elemento+i);//Esta declararion es igual "Elemnto[i]"
    }
cout<<"\n";

}
