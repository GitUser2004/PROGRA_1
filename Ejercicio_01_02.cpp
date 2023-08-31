// Materia: Programación I, Paralelo 1

// Autor: Willy Edwin Tenorio Palza

// Fecha creación: 14/08/2023

// Fecha modificación: 14   /08/2023

// Número de ejericio: 2

// Problema planteado: Volumen de una esfera

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI=3.14159;  // definir la constante "pi"
    int radio;
    cout<<"Ingrese el radio de la esfera[cm]: "<<endl;
    cin>>radio;

    int RadioCuad=pow(radio,3);  // elevar el radio para cumplir con la formula
    cout<<"El volumen de la esfera sera[cm]: "<<endl;

    cout<<(4*RadioCuad*PI)/3<<"[cm^3]"<<endl;
    return 0;
}
