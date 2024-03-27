#include <iostream>

using namespace std;
 
int main(){

   int num{10};
   int *ptr;

   cout << "NUM variable value: " << num << endl;
   cout << "NUM variable size: " << sizeof num << endl;
   cout << "NUM variable memmory address: " << &num << endl;

   cout << "PTR variable value: " << ptr << endl;
   cout << "PTR variable size: " << sizeof ptr << endl;
   cout << "PTR variable memmory address: " << &ptr << endl;

   ptr = nullptr;

   cout << "PTR variable value: " << ptr << endl;
   cout << "PTR variable size: " << sizeof ptr << endl;
   cout << "PTR variable memmory address: " << &ptr << endl;

   ptr = &num;

   cout << "PTR variable value: " << ptr << endl;
   cout << "PTR variable size: " << sizeof ptr << endl;
   cout << "PTR variable memmory address: " << &ptr << endl;

   return 0;
}