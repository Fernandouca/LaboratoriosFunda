#include<iostream>
#include<iomanip>
using namespace std;

using namespace std;
bool esbisiesto(const int &n)
{
    if (!(n%400))
    return true;
    if(!(n%4)&&(n%100))
    return true;
    return false;
}
void diadespues(int, int, int);
int diaspormes(const int &, const int &);
int main()
{
    int dia, mes, año;
    
    cout << "Digite el dia: ";
    cin >> dia;
    cout << "Digite el mes: ";
    cin >> mes;
    cout << "Digite el año: ";
    cin>> año;

    diadespues(dia, mes, año);
    
    return 0;
}

void diadespues(int dd, int mm, int aa)
{
    if(dd < 1 || mm < 1 || aa < 0)
    {
        cout << "Error de digitacion" <<endl;
        return;
    }
    if(dd > diaspormes(mm,aa))
    {
        cout << "Erro de digitacion" << endl;
        return;
    }
    else
    {
        if(mm == 2 && dd == diaspormes(mm,aa))
        {
            dd = 1;
            mm = 3;
        }
        else
        {
            dd++;
            mm += dd/diaspormes(mm,aa);
            aa += mm/12;

            mm %= 12;
            dd %= diaspormes(mm,aa);
        }
    }
    cout << "La fecha luego de 1 dia es: \n";
    cout << setw(2) << setfill('0') << dd;
    cout << "/";
    cout << setw(2) << setfill('0') << mm;
    cout << "/" << aa << endl;
}
int diaspormes(const int &mes, const int &yy)
{
    switch(mes)
    {
        case 4:
        case 6:
        case 9:
        case 11:
        return 30;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        return 31;
        case 2:
        if(esbisiesto(yy))
        return 29;
        else
        {
            return 28;
        }
        default:
        return -1;
        
    }
}