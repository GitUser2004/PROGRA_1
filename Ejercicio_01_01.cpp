// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 14/08/2023

// N�mero de ejericio: 1

// Problema planteado: �rea de un tri�ngulo

#include <iostream>

using namespace std;

int main()
{
    int base;
    int altura;
    cout<<"Ingrese la altura del triangulo[cm]: "<<endl;
    cin>>altura;
    cout<<"Ingrese la base del triangulo[cm]: "<<endl;
    cin>>base;
    cout<<"El area del triangulo sera: "<<endl;
    cout<<(base*altura)/2<<"[cm]"<<endl;   // la formula par hallar el area del triangulo
    return 0;
}
