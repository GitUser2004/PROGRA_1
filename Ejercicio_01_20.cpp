// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 20

// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el
// menor.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int menor;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese el tercer numero: ";
    cin>>num3;
    if(num1==num2||num2==num3||num1==num2==num3){
        cout<<"Algunos o todos los valores son iguales.";
    }
    else{
        if(num2<num1){
            if(num2<num3){
                menor=num2;
        }
            else{
                if(num3<num1){
                    menor=num3;
                }
            }
        }
        else{
            if(num1<num3){
                menor=num1;
            }
        }
        cout<<"El menor es "<<menor;
    }
    return 0;
}
