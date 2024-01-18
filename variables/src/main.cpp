#include <iostream>

using namespace std;

// Este programa calcula a área de uma sala

int main() {

  cout << "Digite o comprimento da sala em metros: ";
  int comprimento_sala {0};
  cin >> comprimento_sala;

  cout << "Digite a largura da sala em metros: ";
  int largura_sala {0};
  cin >> largura_sala;

  cout << "A área da sala é " << comprimento_sala * largura_sala << " metros quadrados." << endl;

  return 0;
}