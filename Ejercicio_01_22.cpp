// Materia: Programaci�n I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 19/08/2023

// Fecha modificaci�n: 19/08/2023

// N�mero de ejericio: 22

// Problema planteado: En una f�brica de computadoras se planea ofrecer a los clientes un descuento que
// depender� del n�mero de computadoras que compre. Si las computadoras son menos
// de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de
// computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
// descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada
// computadora es un valor que el usuario ingrese desde el teclado.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int compu;      // Vriables para las cantidades y costo
    int costo;
    double descu;
    cout<<"Ingrese la cantidad de computadoras que compro un cliente: ";
    cin>>compu;
    cout<<"Ingrese el valor de la(s) computadora [Bs]: ";
    cin>>costo;
    if(compu<5){        // Ciclo de preguntas para averiguar el descuento
        descu=0.1;
    }
    else{
        if(compu>=5&&compu<10){
            descu=0.2;
        }
        else{
            if(compu>=10){
                descu=0.4;
            }
            else{
                descu=1;
            }
        }
    }
    cout<<"El monto a pagar por la(s) "<<compu<<" es de: "<<compu*(costo-(costo*descu))<<"[Bs]";   // Aplicacion del descuento
    return 0;
}
