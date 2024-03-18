#include <iostream>

using namespace std;

int main () {

  int length{}, width{}, height{};
  cout << "Enter the package dimensions in inches separated by spaces (lengh > witdth > height): ";
  cin >> length >> width >> height;

  const int size_limit{10};
  const double cost{2.50};
  double total{};

  if (length <= size_limit && width <= size_limit && height <= size_limit) {
    int cubic_inches{length * width * height};
    if (cubic_inches > 100 && cubic_inches < 500)
      total = cost + (cost * 0.10);
    else if (cubic_inches > 500)
      total = cost + (cost * 0.25);
    else
      total = cost;
  cout << "The total cost of shipping is: " << total << " dolars." << endl;
  } else {
    cout << "Package size is invalid, all dimensions must be 10 inches or less." << endl;
  }
  return 0;
}