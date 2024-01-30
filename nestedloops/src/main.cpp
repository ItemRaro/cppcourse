#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> vec{1, 2, 3, 4};
  int result{};

  for (int i{1} ; i < vec.size() ; i++) {
    for (int j{i+1} ; j < vec.size() ; j++) {
      result += vec.at(i)*vec.at(j);
      cout << i << " * " << j << " = " << i*j << endl;
      cout << result << endl;
    }
  }


  return 0;
}