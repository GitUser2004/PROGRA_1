// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 9

// Problema planteado: // Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 10

// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
// ninguna letra que diga que es carácter especial.

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
        if("b"||"c"||"d"||"f"||"g"||"h"||"j"||"k"||"l"||"m"||"n"||"ñ"||"p"||"q"||"r"||"s"||"t"||"v"||"w"||"x"||"y"||"z"){
            cout<<"La letra "<<letra<<" es una consonante"<<endl;
        }
        else{
            cout<<"Es un caracter especial"<<endl;
        }
    }
    return 0;
}
