#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main(void)
{
    int numero1;
    int numero2;
    int rwsultado;

    cout << "Programa para verificar si un numero es par o impar" << endl;
    cout << "Instrucciones: El usuarrio debe digita cualquier numero para saber si es par o impar" << endl;
    cout << "digite un numero" << endl;
    cin >> numero1;

    numero2 = numero1%2;
    
    if(numero2 == 0)
    {
        cout << "Su numero es par" << endl;
    }
    else
    {
        cout << "Su numero es impar" << endl;
    }
    
    return 0;
}