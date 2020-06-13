#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int hh, mm, ss;

    cout << "Introdusca la hora correspondiente (que sea del modo 24 horas): ";
    cin >> hh;
    cout << "introdusca los minutos: ";
    cin >> mm;
    cout << "Introdusca los segundos: ";
    cin >> ss;
    
    ss++;
    mm += ss/60;
    hh += mm/60;
    ss %= 60;
    mm %= 60;
    hh %= 24;

    cout << "Hora despues de 1 segundo: \n";
    cout << setw(2) << setfill('0') << hh;
    cout << ':';
    cout << setw(2) << setfill('0') << mm;
    cout << ':';
    cout << setw(2) << setfill('0') << ss;

    return 0;
}