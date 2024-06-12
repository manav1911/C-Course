#include <iostream>

using namespace std;

int main() {
	int arr[5] = {};
	int arraysize = 0;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Enter the numbers: ";
		cin >> arr[i];
	}

	arraysize = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arraysize; i++) {
		sum = sum + arr[i];
	}
	cout << "The sum of the numbers entered is: " << sum << endl;

	return 0;
}
