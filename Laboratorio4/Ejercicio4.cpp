#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main(void)
{
    string caracteres;
    int par;

    cout << "Programa para verificar si la palabra digitad es mayor a 10 caracteres y ver si la cantidad de la misma es par o impar" << endl;
    cout << "Digite una palabra" << endl;
    cin >> caracteres;
    par = caracteres.length();

    if(par > 10)
    {
        cout << "La palabra digitada tiene un numer de caracteres mayor a 10" << endl;
    }
    else
    {
        cout << "La palabra digitada tiene un numero de caracteres menor a 10" << endl;
    }
    if((par %2) == 0)
    {
        cout << "El numero de caracteres es par" << endl;
    }
    else
    {
        cout << "El numero de caracteres es impar" << endl;
    }
    return 0;
    
    
}