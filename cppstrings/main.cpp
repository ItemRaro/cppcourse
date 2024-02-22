#include <iostream>
#include <string>

using namespace std;

int main() {

  string nome;
  string sobrenome;
  string nome_completo;

  cout << "Digite o seu primeiro nome: ";
  getline(cin, nome);
  cout << endl << "Digite seu sobrenome: ";
  cin >> sobrenome;

  nome_completo = nome + " " + sobrenome;
  cout << endl << "Seu nome completo é: " << nome_completo << endl;

  return 0;
}