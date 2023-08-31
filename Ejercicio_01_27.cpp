// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 27

/*  Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número
es perfecto si la suma de sus divisores es igual al número.
Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es
perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int sum=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    for(int i=1;i<num;i++){     // CIclo de conteo obtencion de los divisores del numero
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){       // Comparacion entre la suma de los divisores con el numero
        cout<<"EL numero es perfecto";
    }
    else{
        cout<<"El numero no es perfecto";
    }
    return 0;
}
