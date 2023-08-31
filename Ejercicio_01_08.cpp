// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una
// hora se cobra 5 Bs adicional por hora.
// Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe
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
