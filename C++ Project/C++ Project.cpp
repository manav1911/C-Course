#include <iostream>

using namespace std;

int main() {
	//Creating an array
	int arr[5] = {  };

	for (int i = 0; i < 5; i++) {
		cout << endl << "Enter no. " << i << " : ";
		cin >> arr[i];
	}

	int min = arr[0];

	for (int i = 1; i < 5; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	cout << endl << "The minimum value is: " << min;

	return 0;
}
