/*Un arbol binario es un arbol de orden 2.
	autor:Julio Rivera Bautista
	Echo en: linux Elmentary ios
	Carrera: Ingeneria en Sistemas Computacionales
	ITSNZJalisco
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *izq;
	Nodo *der;
	Nodo *padre;
};

/*Prototipo de funcion*/
void menu();							/************************/
Nodo *crearNodo(int, Nodo *);			/*						*/
void insetarNodo(Nodo *&,int, Nodo *);	/*						*/
void mostrarArbol(Nodo *,int);			/*	Prototiṕo de 		*/
bool busqueda(Nodo *,int);				/*	funcion				*/
void preOrden(Nodo *);					/*						*/
void InOrden(Nodo *);					/*						*/
void PostOrden(Nodo *);					/************************/
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);


Nodo *arbol = NULL;


//Fucnion para crear un nuevo nodo
Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();

	nuevo_nodo -> dato = n;
	nuevo_nodo -> der = NULL;
	nuevo_nodo -> izq = NULL;
	nuevo_nodo -> padre = padre;

	return nuevo_nodo;
}
/*Prototipo de insertarNodo en el arbol*/
void insetarNodo(Nodo *&arbol, int n,Nodo *padre){
	if(arbol==NULL){/*Si el arbol esta vacio*/
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;/*AHi que llenar el dato*/
	}
	else{
		int valorRaiz = arbol->dato;/*varible entero de valorRaiz*/
		if ( n < valorRaiz)/*Si el elemento es mayor a la raaiz, insertamos  en der*/
		{
			insetarNodo(arbol->izq,n,arbol);
		}else{
			insetarNodo(arbol->der,n,arbol);
		}
	}
}

void mostrarArbol(Nodo *arbol, int cont){

	if (arbol==NULL){/*Si el arbol esta vacio*/
		return;
	}else{/*impimir el arbol derecho*/
		mostrarArbol(arbol->der,cont+1);/*mostramos muetro arbol*/
		for (int i = 0; i < cont; i++)
		{
			cout<<"   ";/*Este bucle lo que va hacer es dar un espacio para cada espaci de cada Nodo
						para el lado de la ramificacion hijos*/
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);/*mostrar el arbol de lado izquierdo*/
	}
}
/*Funcion para buscar un elemento en el arbol*/
bool busqueda(Nodo *arbol, int n){
	if (arbol==NULL)/*Si el arbol esta vacio*/
	{
		return false;
	}else if (arbol->dato == n)/*si el nodo es igual a elemento */
	{
		return true;
	}else if (n<arbol->dato)/*Si elemento busca del lado izquierdo */
	{
		return busqueda(arbol->izq,n);
	}else{
		return busqueda(arbol->der,n);
	}
}

/*Funciones para recorrer en profundidad -preOdern*/
void  preOrden(Nodo *arbol){
	if(arbol==NULL){/*Si el arbol esta vacio nada que mostrar */
		return;/*reornar*/
	}else{
		cout<<arbol->dato<<"-";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

/*Orden Indorden*/
void InOrden(Nodo *arbol){
	if (arbol==NULL)
	{
		return;
	}else{
		InOrden(arbol->izq);
		cout<<arbol->dato<<"-";
		InOrden(arbol->der);

			}
}

/*funcion de PostOrden*/
void PostOrden(Nodo *arbol){
	if (arbol==NULL)
	{
		return;
	}else{
		PostOrden(arbol->izq);
		PostOrden(arbol->der);
		cout<<arbol->dato<<"-";
	}

}

/*Eliminar un nodo del arbol*/
void eliminar(Nodo *arbol, int n){
	if (arbol==NULL)/*Si el arbol esta vacio no retornar nadas*/
	{
		return;
	}else if (n < arbol -> dato)/*Si el valor es menor*/
	{
		eliminar( arbol -> izq,n );/*Busca por la izquierda*/
	}else if (n > arbol -> dato )/*Si el valor es mayor*/
	{
		eliminar( arbol -> der,n );/*Busca por la derecha*/
	}else{/*Si el elemento   el valor del nodo a encontrado*/
		eliminarNodo(arbol);

	}
}

/*Funcion para determinar el nodo mas izq posible*/
Nodo *minimo(Nodo *arbol){
	if (arbol==NULL)/*Si el arbol est vacio */
	{
		return NULL;/*No retornes nada*/
	}
	if(arbol -> izq){/*Si tiene hijo izquierdo*/
		return minimo(arbol -> izq);/*Busca la parte izquierda mas posible*/
	}else{/*Si no tiene hijos izq*/
		return arbol; /*Retornamos el mismo nodo*/
	}
}

/*Funcion para eliminar el nodo encontado*/

void eliminarNodo(Nodo *nodoEliminar){
	if (nodoEliminar->izq && nodoEliminar->der)/*si el nodo tienes hijo izquierdo o derecho*/
	{
		Nodo *menor = minimo(nodoEliminar -> der);
		nodoEliminar->dato=menor->dato;
		eliminarNodo(menor);
	}else if (nodoEliminar->izq)/*si tiene hijo*/
	{
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if (nodoEliminar->der)
	{
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{/*no tiene hijos*/
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);

	}

}



/*Funcion para reemplazar dos nodos*/
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if (arbol->padre)
	{
		/*arbol->padre hay que asignarle su nuevo hijo*/
		if(arbol->dato==arbol->padre->izq->dato)
		{
			arbol->padre->izq=nuevoNodo;
		}
		else if(arbol->dato==arbol->padre->der->dato)
		{
			arbol->padre->der=nuevoNodo;
		}


	}if (nuevoNodo)
	{
		/* */
		nuevoNodo->padre=arbol->padre;
	}
}
/*Funcion de destruir nodo*/
void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;

	delete nodo;
}

/*Funcion de menu*/
void menu(){
	int dato, opcion,contador=0;
	do{
		cout<<"|-------------------------------- ------------|"<<endl;
		cout<<"|\tN°|   °.:MENU:.°                      |"<<endl;
		cout<<"|------------------------------- -------------|"<<endl;
		cout<<"|\t1.| Insertar un nuevo Nodo            |"<<endl;
		cout<<"|\t2.| Mostrar el arbol completo         |"<<endl;
		cout<<"|\t3.| Buscar un elemento en el arbol    |"<<endl;
		cout<<"|\t4.| Recorre el arbol en preOrden      |"<<endl;
		cout<<"|\t5.| Recorre el arbol en InOrden       |"<<endl;
		cout<<"|\t6.| Recorre el arbol en PostOrden     |"<<endl;
		cout<<"|\t7.| Eliminar  un Nodo de arbol        |"<<endl;
		cout<<"|\t8.| Salir                             |"<<endl;
		cout<<"|\t--------------------------------------------|";
		cout<<"\n\n\tOpcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:

			cout<<"Digite un numero: ";
			cin>>dato;
			insetarNodo(arbol, dato, NULL);/*Insertamos un nuevo nodo*/
			cout<<"\n";
			getchar();
			
			break; 	

			case 2:
			
			cout<<"\nMostral el arbol completo"<<endl;
			mostrarArbol(arbol,contador);
			cout<<"\n";
			
			
			break; 
			
			case 3:
			
			cout<<"\nDigite el elemnto a buscar: ";
			cin>>dato;
			if (busqueda(arbol,dato)==true)
			{
				cout<<"\nElmento "<<dato<<"a  sido encontrado en el arbol\n";
			}
			else{
				cout<<"\nElmento "<<dato<<"no elemento\n";
			}
			
			cout<<"\n";
			//system("pause");
			
			break;
			case 4:

			cout<<"\nRecorrido en preOdern:";
			preOrden(arbol);
			cout<<"\n\n";
			//system("pause");
			
			break;
			case 5:

			cout<<"\nRecorrido en Indorden: ";
			InOrden(arbol);
			cout<<"\n\n";
			//system("pause");
			
			break;
			case 6:

			cout<<"\nRecorrido en PostOrden: ";
			PostOrden(arbol);
			cout<<"\n\n";
			//system("pause");
			
			break;

			case 7: 

			cout<<"\nDigite el numero a eliminar: ";
			cin>>dato;
			eliminar(arbol,dato);			
			cout<<"\n\n";
			//system("pause");

			break;
			default:
			
			cout<<"\nFinalizando el  programa...!";

			break;

		}
	}while(opcion !=8);
}



int main(){
	menu();
	//return 0;
}
