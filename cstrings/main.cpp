#include <iostream>
#include <cstring>

using namespace std;

int main() {

  char first_name[20] {"Bjarne"};
  char last_name[20] {"Stroustrup"};
  char whole_name[40] {};

  int first_name_length {};
  int last_name_length {};
  int whole_name_length {};

  first_name_length = strlen(first_name);
  last_name_length = strlen(last_name);

  strcpy(whole_name, first_name);
  strcat(whole_name, last_name);

  whole_name_length = strlen(whole_name);

  cout << "The length of the first name, " << first_name << ", is " << first_name_length << 
  " letters long and the length of the last name, " << last_name << ", is " << last_name_length << 
  " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long." <<
  endl;

  return 0;
}