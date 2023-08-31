// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 6

// Problema planteado: Número primo

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Num;
    cout<<"Introduzca un numero: "<<endl;
    cin>>Num;
    int i=1;
    int Div=0;
    while(i<=Num){
        if (Num%i==0){
            Div=Div+1;
        }
        i=i+1;
    }
    if(Div>2){
        cout<<"No es un numero primo"<<endl;
    }
    else{
        cout<<"Es un numero primo"<<endl;
    }

    return 0;
}
