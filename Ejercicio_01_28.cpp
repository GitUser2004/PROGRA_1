// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 28

/*  Problema planteado: Multiplicar dos n�meros naturales, sin emplear el operador de la multiplicaci�n,
empleando sumas sucesivas. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1;
    double num2;
    double multip;
    cout<<"Ingrese el primer numero natural: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero natural: ";
    cin>>num2;
    for(int i=1;i<=num2;i++){
        multip=multip+num1;
    }
    cout<<"La multiplicacion de "<<num1<<"*"<<num2<<" es de: "<<multip;
    return 0;
}
