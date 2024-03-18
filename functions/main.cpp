#include <iostream>

using namespace std;

void zero_array(int number [], size_t size);
void print_array(const int number [], size_t size);

int main(){

  int array[] {1, 2, 3, 4, 5};

  print_array(array, 5);

  zero_array(array, 5);

  print_array(array, 5);

  return 0;
}

void zero_array(int number [], size_t size){
  for(size_t num{0}; num < size; num++){
    number[num] = 0;
  }
}

void print_array(const int number [], size_t size){
  for(size_t num{0}; num < size; num++){
    cout << number[num] << " ";
  }
  cout << endl;
}