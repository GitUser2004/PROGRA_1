// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 8

// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas,
// minutos y segundos.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int seg;
    int minu;
    int hora;
    cout<<"Ingrese una cantidad x de segundos: "<<endl;
    cin>>num;
    if(num>59){
        minu=(num/60);
        seg=(num%60);
        if(minu>59){
            hora=(minu/60);
            minu=(hora%60);
        }
        else{
            hora=0;
        }
    }
    else{
        seg=num;
        minu=0;
        hora=0;
    }
    cout<<"Son "<<hora<<" hora(s)"<<endl;
    cout<<"Con "<<minu<<" minuto(s)"<<endl;
    cout<<"y "<<seg<<" segundo(s)"<<endl;
    return 0;
}
