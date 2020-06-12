#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    float N1, N2, N3, P;
    
    cout << "Ingrese el primer número" << endl;
    cin >> N1;
    cout << "\n" << endl;
    cout << "Ingrese el segundo número" << endl;
    cin >> N2;
    cout << "\n" << endl;
    cout << "Ingrece el tercer número" << endl;
    cin >> N3;
    P = (N1 + N2 + N3) / 3;
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "El promedio obtenido es: " << P << endl;
    system ("Pausa");
    return 0;
}