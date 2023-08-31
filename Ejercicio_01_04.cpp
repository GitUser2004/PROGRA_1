// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 14/08/2023

// N�mero de ejericio: 4

// Problema planteado: Conversi�n de temperatura de grados cent�grado a Kelvin

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
