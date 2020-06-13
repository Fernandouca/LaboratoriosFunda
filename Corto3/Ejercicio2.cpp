#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main()
{
    int num, random, intento, intentosres;
    intento = 0;
    random = 0;
    intentosres = 5;
    cout<< "Se genero un numero al azar, puedes adivinar cual e escogido para ti?"<< endl;
    cout<< "Para hacerlo mas facil sera solo del 1 al 100, y seran nuemeros enteros para evitar trampas"<<endl;
    cout<< "Pero sera tan facil, te dare solo 5 intentos para que adivines"<< endl;
    cout<< "Si no quieres seguir pon 0"<< endl<<endl;
    srand((unsigned)time(0));
    random = 1+rand()%100;
    do{
        intento += 1;
        cout<< "Pon tu nemero: ";
        cin>> num;
        if (num == random){
            cout<< "Bien adivinaste, pero podras adivinar otravez";
            break;
        }else if(num > random){
            cout<< "Bien, pero no es esa mi ciela. Mi numero es menor"<< endl;
            intentosres -=1;
            cout<<"te queda "<< intentosres<< "intentos"<< endl;

        }else if(num == 0){
            break;
        }else{
            cout<< "Oh no, volviste a fallar. Te dire que mi numero es mas mayor a ese"<< endl;
            intentosres -=1;
            cout<<"te quedan "<< intentosres<< "intentos"<< endl;
        }
    }
    while(intento < 5);
    if(num == 0){
        cout<< "Te saliste de mi juego :(";
    }
    else if(intentosres == 0){
        cout<< "Que mal, ya no podre jugar contigo :(. Bueno el numero era: "<< random;
    }
    return 0;
}