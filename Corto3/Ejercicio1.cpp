#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int horas, extra;
  float total, afp, seguro, renta, real, salario, anadido;
  cout << "Digite el numeros de horas de trabajo: "; cin >> horas;
  salario = horas * 1.75;
  cout << "Digite el numero de horas estra que se a trabajado: "; cin >> extra;
  anadido = extra * 2.50;
  total = salario + anadido;
  afp = total * 0.0625;
  seguro = total * 0.04;
  if(total>500)
  {
    renta = total * 0.1;
    real = total - seguro - afp - renta;
    cout << "Salario total: $" << total<< endl<< "afp: $" << afp<< endl<< "Seguro: $"<< seguro<< endl;
    cout << "renta: $" << renta << endl << "Salario real: $"<< real << endl;
  }
  else
  {
    real = total - seguro - afp;
    cout << "salario total: $" << total << endl << "afp: $" << afp << endl << "Seguro: $" << seguro << endl;
    cout << "Salario real: $" << real << endl;
  }
  return 0;
}
