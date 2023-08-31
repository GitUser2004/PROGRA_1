// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 30

/*  Problema planteado: Calcular la siguiente sucesión
2−3/2+4/3−5/4+...*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;      // El termino n para la serie
    double resul=0;     // Definirlo para que acepte decimales
    cout<<"Ingrese un termino n para la serie: ";
    cin>>n;
    for(int i=1.0;i<=n;i++){
        if(i%2!=0){     // Si es impar se suma a la serie
            resul=resul+((i+1)*1.0/i);
        }
        else{       // Si es par se resta
            resul=resul-((i+1)*1.0/i);
        }
    }
    cout<<"El resultado para la serie dada es de: "<<endl;
    cout<<resul<<" ";
    return 0;
}
