#include<iostream>
using namespace std;

int main()
{
    int anio;
    cout<<"Introdusca el anio: ";
    cin>> anio;
    if(anio%400==0)
    cout<<"Es bisiesto"<<endl;
    else if(anio%4==0 and anio%100!=0){
        cout<<"es bisiesto"<< endl;
    }else{
        cout<<"No es bisiesto"<< endl;
    }
    return 0;
}