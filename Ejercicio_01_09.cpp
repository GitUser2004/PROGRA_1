// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 9

// Problema planteado: // Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 9

// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes
// en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de
// mes inválido.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Mes;
    cout<<"Introduzca el numero de un mes: "<<endl;
    cin>>Mes;
    switch(Mes){
        case 1: cout<<"ENERO"<<endl;
            break;
        case 2: cout<<"FEBRERO"<<endl;
            break;
        case 3: cout<<"MARZO"<<endl;
            break;
        case 4: cout<<"ABRIL"<<endl;
            break;
        case 5: cout<<"MAYO"<<endl;
            break;
        case 6: cout<<"JUNIO"<<endl;
            break;
        case 7: cout<<"JULIO"<<endl;
            break;
        case 8: cout<<"AGOSTO"<<endl;
            break;
        case 9: cout<<"SEPTIEMBRE"<<endl;
            break;
        case 10: cout<<"OCTUBRE"<<endl;
            break;
        case 11: cout<<"NOVIEMBRE"<<endl;
            break;
        case 12: cout<<"DICIEMBRE"<<endl;
            break;
        default: cout<<"Mes invalido"<<endl;
    }
    return 0;
}
