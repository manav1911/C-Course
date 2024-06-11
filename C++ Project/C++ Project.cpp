//Master
#include <iostream>

using namespace std;

int main() {
	int arr[] = { 100,200,300,400,500 };
	int arraysize = 0;

	arraysize = sizeof(arr) / sizeof(arr[0]);
	cout << "Length of array is: " << arraysize << endl;

	for (int j = 0; j < arraysize; j++) {
		for (int i = 0; i < arraysize; i++) {
			if (arr[i] < arr[i + 1]) {
				int temp = 0;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	cout << endl << "Second highest value is: " << arr[1];

	return 0;
}
