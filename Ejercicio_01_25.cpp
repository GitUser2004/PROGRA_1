// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 25

/*  Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al
azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a
aproximaciones, para lo cual se dispone de 5 intentos. */

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int aleat=50;
    int num;

    int i=1;
    cout<<"Estoy pensando en  un numero entre 0 y 50"<<endl;
    while(aleat!=num||i<=5){
        if(aleat==num){
            cout<<"Felicitaciones… Adivinaste el número"<<endl;
        }
        else{
            cin>>num;
        }
    }
    i=i+1;
    cout<<i;
    return 0;
}
