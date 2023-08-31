// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 15

/*  Problema planteado: Escriba la sucesi�n de Fibonacci. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a=0;        // Variables para generar la serie
    int b=1;
    int c;
    int lim;
    cout<<"Ingrese el limite que desee para la serie: ";
    cin>>lim;
    for(int i=1;i<=lim;i++){
        c=a+b;      // Obtencion de los valores de la serie por la suma de un numero con el anterior
        cout<<b<<" ";
        a=b;
        b=c;
    }
    return 0;
}
