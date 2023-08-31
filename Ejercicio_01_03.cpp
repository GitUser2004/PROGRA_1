// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 14/08/2023

// Número de ejericio: 3

// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int nNotas;
    int Notas;
    int Promedio;
    int SumaNot=0;
    int i=1;
    cout<<"Ingrese el numero de notas a promediar: "<<endl;
    cin>>nNotas;
    while(i<=nNotas){
        cout<<"La nota numero "<<i<<endl;
        cin>>Notas;
        SumaNot=SumaNot+Notas;
        i=i+1;
    }
    cout<<"El promedio final sera: "<<endl;
    cout<<SumaNot/nNotas<<endl;
    return 0;
}
