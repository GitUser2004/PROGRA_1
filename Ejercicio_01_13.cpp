// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 9

// Problema planteado: // Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 13

// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Num;
    int d=10;       // Divisor entre 10 que ira creociendo de 10 en 10
    int cont=1;
    cout<<"Ingrese un numero :";
    cin>>Num;
    while(Num/d>=1){        // Ciclo de conteo
        d=d*10;     // Crecimiento de la variable d
        cont=cont+1;        // Contador
    }
    cout<<"La cantidad de digitos del numero: "<<Num<<" es de "<<cont<<endl;
    return 0;
}
