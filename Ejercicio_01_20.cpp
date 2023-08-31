// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 20

// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el
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
