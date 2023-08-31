// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 14/08/2023

// Número de ejericio: 4

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double K=273.15;
    int TemCent;
    int TemKel;
    cout<<"Ingrese la temperatura en grados Centigrados [C]: "<<endl;
    cin>>TemCent;
    TemKel=TemCent+K;
    cout<<"La temperatura en grados Kelvin es: "<<endl;
    cout<<TemKel<<" [K]"<<endl;
    return 0;
}
