// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 7

// Problema planteado: Número amigo

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Num1;
    int Num2;
    int i=1;
    int j=1;
    int SumDiv1=0;
    int SumDiv2=0;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>Num1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>Num2;

    if(Num1==Num2){
        cout<<"Ambos numeros no pueden ser iguales";
    }

    while(i<=Num1){
        if(Num1%i==0){
            SumDiv1=SumDiv1+i;
            i=i+1;
        }
        else{
            i=i+1;
        }
    }

    while(j<=Num2){
        if(Num2%j==0){
            SumDiv2=SumDiv2+j;
            j=j+1;
        }
        else{
            j=j+1;
        }
    }

    if(SumDiv1==SumDiv2){
        cout<<"Son numeros amigos";
    }
    else{
        cout<<"No son numeros amigos";
    }

    return 0;
}
