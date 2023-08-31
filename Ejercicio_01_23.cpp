// Materia: Programación I, Paralelo 4

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 20/08/2023

// Fecha modificación: 20/08/2023

// Número de ejericio: 23

/*  Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos
correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que
consiste en lo siguiente:
- Empiece con cualquier entero positivo.
- Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
- Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo,
cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout<<"Ingrese un numero mayor a 1: ";
    cin>>num;
    cout<<num<<" ";
    if(num>1){
        while(num!=1){      // Ciclo para mostrar los numeros por la conjetura de ulman
            if(num%2==0){       // Ciclo de comparacion si el numero es par o impar
                num=num/2;
                cout<<num<<" ";
            }
            else{
                num=(num*3)+1;
                cout<<num<<" ";
            }
        }
    }
    else{
        cout<<"EL resultado ya es 1";
    }
    return 0;
}
