// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 20/08/2023

// Fecha modificaci�n: 20/08/2023

// N�mero de ejericio: 29

/*  Problema planteado: En una llanter�a se ha establecido una promoci�n de las llantas marca �Ponchadas�,
dicha promoci�n consiste en lo siguiente:
Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se
compran de cinco a 10 y de 200 Bs. si se compran m�s de 10.
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
