// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 15/08/2023

// N�mero de ejericio: 6

// Problema planteado: N�mero primo

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
