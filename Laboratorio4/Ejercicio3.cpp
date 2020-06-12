#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main(void)
{
    int numero;

    cout << "Programa para verificar si un numero es negativo. positivo o cero" << endl;
    cout << "Coloque un numero cualquiera" << endl;
    cin >> numero;

    if(numero>0)
    {
        cout << "Su numero es positivo" << endl;
    }
    else
    {
        cout << "Su numero es negativo" << endl;
    }
    if(numero == 0)
    {
        cout << "El valor de su numero es 0" << endl;
    }
    return 0;
    
}