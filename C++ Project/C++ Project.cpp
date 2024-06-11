//Master
#include <iostream>

using namespace std;

int main() {
	int arr[] = { 12,8,15,6,2,9,1 };
	int arraysize = 0, sum = 0, multi = 1;

	arraysize = sizeof(arr) / sizeof(arr[0]);
	cout << "Length of array is: " << arraysize << endl;

	for (int i = 0; i < arraysize; i++) {
		sum = sum + arr[i];
		multi = multi * arr[i];
	}

	cout << "The sum of the array is: " << sum << endl;
	cout << "The multiplication of the array is: " << multi << endl;

	return 0;
}
