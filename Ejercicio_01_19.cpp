// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double coorx;
    double coory;
    double polarx;
    double polary;
    cout<<"Ingrese la coordenada rectangular para x: ";
    cin>>coorx;
    cout<<"Ingrese la coordenada rectangular para y: ";
    cin>>xcoory;
    polarx=sqrt(pow(coorx,2)+pow(coory,2));
    polary=atan(coory/coorx);
    cout<<"Las coordenadas rectangulares ("<<coorx<<","<<coory<<")"<<endl;
    cout<<"Seran las coordenadas polares ("<<polarx<<","<<polary<<")"<<endl;

    return 0;
}
