#include <iostream>

using namespace std;

u_long fact(u_long n);

int main(){

  u_long num = 0;

  cout << "Digite um número para descobrir seu valor fatorial: ";
  cin >> num;
  cout << "O fatorial de " << num << " é " << fact(num) << endl;

  return 0;
}

u_long fact(u_long n){
  
  if (n <= 1){
    return n;
  }

  return n * fact(n - 1);
}