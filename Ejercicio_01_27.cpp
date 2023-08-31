// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 27

/*  Problema planteado: Crear un programa que indique si un n�mero es perfecto o no, se dice que un n�mero
es perfecto si la suma de sus divisores es igual al n�mero.
Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el n�mero 6 es
perfecto, si el n�mero es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto. */

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
