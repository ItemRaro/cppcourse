#include <iostream>

using namespace std;

int main() {

  int day_of_week{4};

  switch (day_of_week)
  {
  case 1:
    cout << "Segunda-Feira";
    break;
  case 2:
    cout << "Terça-Feira";
    break;
  case 3:
    cout << "Quarta-Feira";
    break;
  case 4:
    cout << "Quinta-Feira";
    break;
  case 5:
    cout << "Sexta-Feira";
    break;
  case 6:
    cout << "Sábado";
    break;
  case 7:
    cout << "Domingo";
    break;
  
  default:
    cout << "Nenhum dia existente";
    break;
  }

  return 0;
}