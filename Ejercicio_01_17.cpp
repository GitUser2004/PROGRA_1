// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 17

// Problema planteado: Leer un valor en bolivianos y convierta a Euros, D�lares y Libras Esterlinas

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int boli;
    const double euro=0.13;
    const double dolar=0.14;
    const double libra=0.11;
    cout<<"Ingrese un monto de bolivianos: "<<endl;
    cin>>boli;
    cout<<"El monto de "<<boli<<" a Euros es de "<<euro*boli<<endl;
    cout<<"El monto de "<<boli<<" a Dolares es de "<<dolar*boli<<endl;
    cout<<"El monto de "<<boli<<" a LIbras Esterlinas es de "<<libra*boli<<endl;

    return 0;
}
