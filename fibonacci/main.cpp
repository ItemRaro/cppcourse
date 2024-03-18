#include <iostream>

using namespace std;

unsigned long long fibonachos(unsigned long long n);

int main(){

  int num = 0;

  cout << "Digite uma quatidade de vezes para rodar fibonacci: ";
  cin >> num;
  cout << endl << "Resultado: " << fibonachos(num) << endl;

  return 0;
}

unsigned long long fibonachos(unsigned long long n){
  
  if (n <= 1){
    return n;
  }

  return fibonachos(n - 1) + fibonachos(n - 2);
}