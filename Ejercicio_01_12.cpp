// Materia: Programación I, Paralelo 4

// Problema planteado: // Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 11

// Problema planteado: Mostrar los primeros 100 número primos.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for(int i=2;i<=100;i++){        // Inicia un ciclo hasta el 100
        int j=1;        // Se inicia una variable divive a la primera
        int div=0;
        while(j<=i){        // COnteo de divisores
            if(i%j==0){     // Se define si es primo o no
                div=div+1;
            }
            j=j+1;
        }
        if(div<=2){
            cout<<i<<endl;
        }
    }
    return 0;
}
