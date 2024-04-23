#include <iostream>

void print(int *array, size_t size);

int main()
{
  int array[5] {};
  size_t array_size{5};

  for (size_t i{0}; i < array_size; i++)
  {
    array[i] = (1 + i) * 10;
  }

  print(array, array_size);

  return 0;
}

void print(int *array, size_t size)
{
  for (int i{0}; i < size; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
  std::cout << *array;
}