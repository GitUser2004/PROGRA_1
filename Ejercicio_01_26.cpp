// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 26

/*  Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera
necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los
distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para
asegurar el pago exacto de los artículos comprados la señora anota el precio y la
cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los
demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
llenar el carrito de manos con todos los artículos de primera necesidad. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cant;
    int precio;
    int total=0;
    cout<<"Debe ingresar la cantidad y el precio de cada producto en ese orden, los precios no pueden ser 0."<<endl;
    for(int i=1;i<=10;i++){     // Ciclo de pregunta para cada articulo
        switch(i){      // Mediante el for se ejecuta presenta la pregunta de precio y cantidad
            case 1: cout<<"Cereales"<<endl<<"Cantidad: ";       // Primer articulo donde ocurren las preguntas
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 2: cout<<"Zanahorias"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 3: cout<<"Cebollas"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 4: cout<<"Patatas"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 5: cout<<"Cereales"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 6: cout<<"Manzanas"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 7: cout<<"Carne (pollo)"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 8: cout<<"Carne (res)"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 9: cout<<"Arroz [kg]"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
            case 10: cout<<"Fideo [kg]"<<endl<<"Cantidad: ";
                    cin>>cant;
                    cout<<"Precio [Bs]: ";
                    cin>>precio;
                    total=total+(cant*precio);
                    break;
        }
    }
    cout<<"El monto total a pagar de todas las compras es de: "<<total<<" [Bs]";        // El total se suma de cada articulo
    return 0;
}
