// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 24

// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int d=10;
    int cont=1;
    int PrimDig;
    int SegDig;
    int div1;       // Divisores para obtener los primeros digitos
    int div2;
    cout<<"Ingrese un numero :";
    cin>>num;
    while(num/d>=1){
        d=d*10;
        cont=cont+1;        // Contador de los digitos del numero
    }
    div1=pow(10,cont-1);        // Obtencion de los divisores por divisiones base 10
    div2=pow(10,cont-2);
    PrimDig=num/div1;       // Obtencion de los digitos por los divisores
    SegDig=(num%div1)/div2;
    cout<<"La suma del primer y segundo digito de "<<num<<" es de "<<PrimDig+SegDig;
    return 0;
}
