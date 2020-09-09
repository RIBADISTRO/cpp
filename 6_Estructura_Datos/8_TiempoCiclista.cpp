#include <iostream>
#include <string.h>
using namespace std;
/*
Defina una estructura  que indique el tiempo empleado por un
siclista en una etapa la estrcutura debe tener tres campos: hora
minuto y segundos. Escriba un programa que dado n etapas calcule
el tiempo  total empleado  em correr todos las etapas.
*/ 

struct Tiempo{
    int horas,
        minutos,
        segundos;

}etapa[100];
int main(){
    int nEtapas, horasT=0,minutosT=0,segundoT=0;
    cout<<"Digite estapas: ";       cin>>nEtapas;
    for (int i = 0; i < nEtapas; i++){
        cout<<endl;                 cin.ignore();
        cout<<i+1<<". Estapa"<<endl;
        cout<<"\tHoras: ";           cin>>etapa[i].horas;
        cout<<"\tMinutos: ";         cin>>etapa[i].minutos;
        cout<<"\tSegundos: ";        cin>>etapa[i].segundos;

        horasT= horasT + etapa[i].horas;
        minutosT= minutosT + etapa[i].minutos;
        if (horasT>=60){
            minutosT = minutosT -60;
            horasT++;            
        }

        segundoT = segundoT + etapa[i].segundos;
        if (segundoT>=60){
            segundoT = segundoT - 60;
            minutosT++;
            /* code */
        }
        
        
    }
    

    cout<<"\n::Datos de etapas::\n"<<endl;
    cout<<"  Horas:"<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundo:"<<segundoT<<endl;


    return 0;
}