// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 29

/*  Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”,
dicha promoción consiste en lo siguiente:
Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se
compran de cinco a 10 y de 200 Bs. si se compran más de 10.
Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
llantas que compra y la que tiene que pagar por el total de la compra. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int llanta;
    int costo;
    cout<<"Ingrese la cantidad de llantas que compro un cliente: ";
    cin>>llanta;
    if(llanta<5){       // Ciclo de preguntas para saber el costo de la llanta
        costo=300;
    }
    else{
        if(llanta>=5&&llanta<=10){
            costo=250;
        }
        else{
            if(llanta>10){
                costo=200;
            }
        }
    }
    cout<<"El monto a pagar por la(s) "<<llanta<<" es de: "<<llanta*costo<<" [Bs]";
    return 0;
}
