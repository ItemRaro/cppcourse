#include <iostream>
#include <string>

using namespace std;

int main() {

  cout << "Digite uma sequência de caracteres: ";
  string letters;
  getline(cin, letters);

  size_t lines{letters.length()};
  int8_t counter{0};
  size_t looping{0};

  while (looping < lines) {
    if (counter == 0) {
      for (int8_t i{counter}; i < lines; i++) {
        cout << letters.at(i);
        counter++;
      }
      cout << endl;
    } else {
      for (int8_t i{counter-1}; i >= 0; i--) {
        cout << letters.at(i);
        counter--;
      }
      cout << endl;
    }
    looping++;
  }

  cout << endl;
  return 0;
}