// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 14/08/2023

// Número de ejericio: 1

// Problema planteado: Área de un triángulo

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
