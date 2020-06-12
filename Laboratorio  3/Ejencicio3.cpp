#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    float x;
    float y;

    cout << "Por favor, inserte un valor para a\n";
    cin >> a;

    cout << "Por favor, inserte un valor para b\n";
    cin >> b;

    cout << "Por favor, inserte un valor para c\n";
    cin >> c;

    x = (-b+( sqrt(b*b-4*a*c)))/(2*a);
    y = (-b+(sqrt(b*b-4*a*c)))/(2*a);

    cout << "x = ";
    cout << x;

    cout << "y = ";
    cout << y;

    return 0;
}