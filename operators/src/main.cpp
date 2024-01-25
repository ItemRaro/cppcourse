#include <iostream>

using namespace std;

int main() {

  const int valor_real{100};
  const int valor_cinquenta{50};
  const int valor_vintecinco{25};
  const int valor_dez{10};
  const int valor_cinco{5};
  const int valor_um{1};
  int valor{};

  cout << "Digite o valor total em centavos para separar o troco: ";
  cin >> valor;

  int resto{}, real{}, cinquenta{}, vintecinco{}, dez{}, cinco{}, um{};

  real = valor/valor_real;
  resto = valor%valor_real;
  cinquenta = resto/valor_cinquenta;
  resto %= valor_cinquenta;
  vintecinco = resto/valor_vintecinco;
  resto %= valor_vintecinco;
  dez = resto/valor_dez;
  resto %= valor_dez;
  cinco = resto/valor_cinco;
  resto %= valor_cinco;
  um = resto/valor_um;
  resto %= valor_um;

  cout << "Segue a quantidade de troco separada por valores de moedas:" << endl;
  cout << "Real: " << real << endl << "Cinquenta Centavos: " << cinquenta << endl <<
  "Vintecinco Centavos: " << vintecinco << endl << "Dez Centavos: " << dez << endl <<
  "Cinco Centavos: " << cinco << endl << "Um Centavo: " << um << endl;
  cout << "RESTO: " << resto << endl; 
  
  return 0;
}