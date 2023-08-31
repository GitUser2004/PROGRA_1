// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 21

// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está
// dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior,
// obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int a;      // limite superior
    int b;      // limite inferior
    int res;
    cout<<"Ingrese el numero n: "<<endl;
    cin>>n;
    cout<<"Ingrese el limite inferior del intervalo: "<<endl;
    cin>>a;
    cout<<"Ingrese el limite superior del intervalo: "<<endl;
    cin>>b;
    if(n>=a||n<=b){     // comprobacion si n esta en el intervalo
        res=pow(n,2);
    }
    else{
        if(n<a){        // si es menor al limite inferior
            res=1.0/n;
        }
        else{
            if(n>b){        // si es menor al limite superior
            res=n/2;
            }
        }
    }
    cout<<"Considerando el valor de n por su posicion en el intervalo es: "<<res;
    return 0;
}
