// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una
// hora se cobra 5 Bs adicional por hora.
// Ingrese la cantidad de horas que un veh�culo est� estacionado y calcule cuanto debe
// pagar.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int horas;
    int PrimHor=7;
    int adicional;
    cout<<"Introducir la cantidad de horas que estuvo estacionado el vehiculo: "<<endl;
    cin>>horas;
    if(horas>1){
        adicional=horas-1;
        cout<<"El monto a pagar es de: "<<PrimHor+(adicional*5)<<" Bs"<<endl;
    }
    else{
        cout<<"El monto a pagar es de: "<<PrimHor<<" Bs"<<endl;
    }
    return 0;
}
