// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 25

/*  Problema planteado: Escribir un programa que permita adivinar un n�mero que sea genere internamente al
azar, el cual est� en el rango de 0 a 50. El usuario debe adivinar este n�mero en base a
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
            cout<<"Felicitaciones� Adivinaste el n�mero"<<endl;
        }
        else{
            cin>>num;
        }
    }
    i=i+1;
    cout<<i;
    return 0;
}
