// Materia: Programación I, Paralelo 1

// Autor: Willy Edwin Tenorio Palza

// Fecha creación: 14/08/2023

// Fecha modificación: 14/08/2023

// Número de ejericio: 5

// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y
// raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int xP1;
    int yP1;
    int xP2;
    int yP2;
    int Distancia;
    cout<<"Introduzca las coordenadas del primer punto (P1) para X y Y respectivamente: "<<endl;
    cin>>xP1;
    cin>>yP1;
    cout<<"Introduzca las coordenadas del primer punto (P2) para X y Y respectivamente: "<<endl;
    cin>>xP2;
    cin>>yP2;
    cout<<"la distancia entre los puntos P1 y P2 sera de: "<<endl;
    cout<<sqrt(pow(xP2-xP1,2)+pow(yP2-yP1,2));
    return 0;
}
