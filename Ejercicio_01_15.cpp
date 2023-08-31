// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 15

/*  Problema planteado: Escriba la sucesión de Fibonacci. */

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
