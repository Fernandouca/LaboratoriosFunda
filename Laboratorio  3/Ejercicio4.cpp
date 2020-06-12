#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int cantidad;

    char nombre;

    float precio;
    float Total;

    cout << "Ingrese el nombre del producto: " << endl;
    cin >> nombre;
    cout << "\n" << endl;
    cin >> precio;
    cout << "\n" << endl;
    cout << "Ingrese la cantidad de producto comprado: " << endl;
    cin >> cantidad;

    cout << "\n" << endl;
    Total = (precio*cantidad);
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "El total de dinero gastado es: " << Total << endl;
    system("pausa");
}