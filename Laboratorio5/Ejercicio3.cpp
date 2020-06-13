#include<iostream>
using namespace std;

bool esbisiesto(const int &n)
{
    if(!( n % 400))
    return true;
    if(!(n % 4)&&(n%100))
    return 0;

    return false;
}
int main()
{
    int w;
    cout << "Digite el año: ";
    cin >> w;
    if(esbisiesto(w))
    cout << "Es bisiesto!" << endl;
    else
    {
        cout << "No es bisiesto!" << endl;
    }
    return 0;
}