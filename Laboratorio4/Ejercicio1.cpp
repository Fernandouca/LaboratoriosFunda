#include"iostream"
#include"stdlib.h"
#include"cmath"

using namespace std;
int main()
{
    int dividendo;
    int divisor;
    int division;
    int residuo;

    cout << "Progama para verificar si el numero dado es divisible entre otro" << endl;
    cout << "Por favor, que es dividendo sea mayor que el divisor" << endl;
    cout << "Ingrese su diviendo" << endl;
    cin >> dividendo;
    cout << "ingrese su divisor" << endl;
    cin >> divisor;

    division = dividendo/divisor;
    residuo =dividendo%divisor;

    cout << "El resultado de tu division es: " << division << endl;
    cout << "El resultado de tu residuo es: " << residuo << endl;

    if(residuo == 0)
    {
        cout << "Sus numeros si son divisibles entre si, ya que su residuo es 0" << endl;
    }
    else
    {
        cout << "Sus numeros no son divisibles entre si, ya que su residuo no es 0" << endl;
    }
    return 0;
    

}