// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 9

// Problema planteado: // Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 10

// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
// ninguna letra que diga que es car�cter especial.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char letra;
    cout<<"Ingrese una letra"<<endl;
    cin>>letra;
    if("a"||"e"||"i"||"o"||"u"){
        cout<<"La letra "<<letra<<" es una vocal"<<endl;
    }
    else{
        if("b"||"c"||"d"||"f"||"g"||"h"||"j"||"k"||"l"||"m"||"n"||"�"||"p"||"q"||"r"||"s"||"t"||"v"||"w"||"x"||"y"||"z"){
            cout<<"La letra "<<letra<<" es una consonante"<<endl;
        }
        else{
            cout<<"Es un caracter especial"<<endl;
        }
    }
    return 0;
}
