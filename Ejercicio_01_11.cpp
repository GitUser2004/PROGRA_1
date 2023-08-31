// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 9

// Problema planteado: // Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 14/08/2023

// Fecha modificación: 15/08/2023

// Número de ejericio: 13

// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato
// civil. Se paga por categoría de acuerdo con la siguiente tabla.


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int horas;
    char tipo;
    char cat;
    int aum;
    cout<<"Ingrese la categoria del docente (en mayusculas): ";
    cin>>cat;
    cout<<"Ingrese el tipo de contrato del docente, es decir permanente o contrato, tal cual se escribe: ";
    cin>>tipo;
    cout<<"Ingrese las horas de trabajo del docente: ";
    cin>>horas;
    switch(cat){
        case "A": if(tipo=="permanente"){
            aum=0.25;
            }
        else{
            if(tipo=="contrato"){
                aum=0.18;
            }
        }
        switch(cat){
        case "B": if(tipo=="permanente"){
            aum=0.2;
            }
        else{
            if(tipo=="contrato"){
                aum=0.14;
            }
        }
        switch(cat){
        case "C": if(tipo=="permanente"){
            aum=0.15;
            }
        else{
            if(tipo=="contrato"){
                aum=0.12;
            }
        }
    }
    cout<<"El pago de la semana del docente deberia ser de: "<<150*horas*aum<<" Bs";
    return 0;
}
