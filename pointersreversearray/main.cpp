#include <iostream>

using namespace std;

void reverse_array(int *array, int size);

int main(){

	int new_array[]{1, 2, 3, 4, 5};
	int new_size{sizeof(new_array)/sizeof(int)};

	cout << endl;

	for (int i{0}; i < new_size; i++){
		cout << new_array[i];
	}

	reverse_array(new_array, new_size);

	cout << endl;

	for (int i{0}; i < new_size; i++){
		cout << new_array[i];
	}

	cout << endl;

	return 0;
}

void reverse_array(int *array, int size){

	int *start{array};
	int *end{array + size - 1};

	while (start < end){

		int temp{*start};
		*start = *end;
		*end = temp;

		start++;
		end--;

	}
}