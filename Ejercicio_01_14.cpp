// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 14

// Problema planteado: . Escriba un programa que dato varios valores num�ricos, hasta el que el usuario ingrese
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
