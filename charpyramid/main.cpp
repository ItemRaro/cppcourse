#include <iostream>
#include <string>

using namespace std;

int main() {

  cout << "Digite os caracteres para compor sua pirâmide: ";
  string characters;
  getline(cin, characters);
  size_t lines{characters.length()};

  for (size_t row{1}; row <= lines; row++) {
    for (size_t col{1}; col <= 2*lines - 1; col++) {
      if (col >= lines-(row-1) && col <= lines+(row-1)){
        cout << characters.at(0);
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  

  cout << endl;
  return 0;
}