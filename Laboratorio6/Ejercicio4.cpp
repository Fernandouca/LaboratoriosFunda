#include<iostream>
using namespace std;

int leer_arreglo1(int arreglo1[],int n)
{
    for(int i=0; i<n; i++){
        cout << "Digite el valor en la posiciion " << i << " del arreglo 1: ";
        cin >> arreglo1[i];
    }return arreglo1[n];
}
//Se realizaran las funciones que pediran las unidades que se sumarian
int leer_arreglo2(int arreglo2[],int n){
    for (int i = 0; i<n; i++){
        cout << "Digite el valor de la posicion " << i << " del arreglo 2: ";
        cin >> arreglo2[i]; 
    }return arreglo2[n];
}

int suma_arreglos(int arreglo1[], int arreglo2[],int n, int arreglosum[]){
    for(int i = 0; i<n; i++){//se sumanlos elements de ambos arreglos y se almacena en un tercero
    arreglosum[i] = arreglo1[i] + arreglo2[i];
    }return arreglosum[n];
}

int desplegar_array(int arreglosum[], int n){
    //funcion que solamente imprime la suma realizada anteriormente
    cout << "La suma de los arrrglos fue de: ";
    for (int i = 0; i<n; i++){
        cout << arreglosum[i] << "\t";
    }
}

int main(void){
    int n; //La cantidad de elementos para cada arreglo

    cout << "Digitar el numero de elementos formados por los arregos: ";
    cin >> n;

    int arreglo1[n];    //Se declara los arreglos con la cantidad de elementos escogidos por el usuario
    int arreglo2[n];
    int arreglosum[n];

    leer_arreglo1(arreglo1,n);
    cout << endl;
    leer_arreglo2(arreglo2,n);
    suma_arreglos(arreglo1, arreglo2, n, arreglosum);
    desplegar_array(arreglosum,n);
}