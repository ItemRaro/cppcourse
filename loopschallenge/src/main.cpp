#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  bool executing{false};
  char selection{};
  int number{};
  double mean{};
  int min{};
  int max{};
  vector<int> list{};

  while (!executing) {
    cout << "Selecione a opção desejada." << endl;
    cout << "[P] - Mostrar lista de números." << endl;
    cout << "[A] - Adicionar número a lista." << endl;
    cout << "[M] - Média dos números." << endl;
    cout << "[S] - Menor número da lista." << endl;
    cout << "[L] - Maior número da lista." << endl;
    cout << "[Q] - Sair." << endl;
    cout << endl << "Digite sua escolha: ";
    cin >> selection;

    switch (selection) {
    case 'p':
    case 'P':
      if (list.size() == 0) {
        cout << "Não existe nenhum número nesta lista." << endl;
      } else {
        for (auto numbers : list) {
          cout << numbers << " ";
        }
        cout << endl;
      }
      break;

    case 'a':
    case 'A':
      cout << "Digite o número a ser adicionado: ";
      cin >> number;
      list.push_back(number);
      cout << number << " adicionado" << endl;
      break;

    case 'm':
    case 'M':
      if (list.size() <= 1) {
        cout << "Não é possível tirar a média" << endl;
      } else {
        for (auto numbers : list) {
          mean += numbers;
        }
        mean /= list.size();
        cout << "A média desta lista de números é " << mean << endl;
      }
      break;

    case 's':
    case 'S':
      if (list.size() == 0) {
        cout << "Não existe nenhum número nesta lista." << endl;
      } else {
        min = list.at(0);
        for (int numbers : list) {
          if (numbers < min)
            min = numbers;
        }
      cout << "O menor número da lista é " << min << endl;
      }
      break;

    case 'l':
    case 'L':
      if (list.size() == 0) {
        cout << "Não existe nenhum número nesta lista." << endl;
      } else {
        max = list.at(0);
        for (int numbers : list) {
          if (numbers > max)
            max = numbers;
        }
      cout << "O maior número da lista é " << max << endl;
      }
      break;

    case 'q':
    case 'Q':
      executing = true;
      cout << "Adeus." << endl;
      break;

    default:
      cout << "Escolha inválida." << endl;
    }
  }

  return 0;
}