#include <iostream>
#include <string>

using namespace std;

int main() {

  cout << "Digite uma sequência de caracteres para sua pirâmide: ";
  string letters;
  getline(cin, letters);

  size_t lines{letters.length()};
  int counter{0};
  size_t looping{0};

  while (looping < lines) {
    if (counter <= 0) {
      for (size_t i; i < lines; i++) {
        cout << letters.at(i);
        counter++;
      }
    } else {
      for (int i{counter-1}; i >= 0; i--) {
        cout << letters.at(i);
        counter--;
      }
    }
    cout << endl;
    looping++;
  }

  cout << endl;
  return 0;
}