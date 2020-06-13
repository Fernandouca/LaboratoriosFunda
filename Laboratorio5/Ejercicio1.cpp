
#include<iostream>

using namespace std;
int mcd(int,int);

int main()
{
    int num1, num2;
    cout << "Digite el nuemero mayor: "; cin >> num1;
    cout << "digite el numero menor: "; cin >> num2;
    cout << "El mcd de ambos numeros es: " << mcd(num1, num2);
    
    return 0;
}
int mcd(int a, int b)
{
    int residuo = a % b;

    while (residuo)
    {
        a = b;
        b = residuo;
        residuo = a % b;
    }
    return b;
}