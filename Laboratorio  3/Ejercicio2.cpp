/*"Progrema para calcular el area y longitud."

Área = pi * radio^2

Longitud de la Circunferencia = 2 * pi * radio*/

#include <iostream>
#include <math.h>
using namespace std;
int main(void){

    double radio, area, longitud;

    cout << "Ingrese el radio del circulo: "<< endl;
    cin >> radio;

    area = M_PI * pow(radio,2);
    longitud = 2 * M_PI * radio;
    
    cout << "El area edl circulo es: " << area << endl;
    cout << "La longuitud de la circunferencia es: " << longitud << endl;

}