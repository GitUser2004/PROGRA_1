// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 14

// Problema planteado: . Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese
// el valor de cero calculo la suma y el promedio de estos.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int val;
    int i=1;
    int SumaNot=0;
    cout<<"El dato: ";
    cin>>val;
    while(val!=0){
        cout<<"El dato: ";
        cin>>val;
        SumaNot=SumaNot+val;
        i=i+1;
    }
    cout<<"El promedio final sera: "<<(SumaNot*1.0)/i<<endl;
    return 0;
    return 0;
}
