// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 9

// Problema planteado: // Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 13

// Problema planteado: Indique la cantidad de d�gitos que tiene un n�mero entero

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
