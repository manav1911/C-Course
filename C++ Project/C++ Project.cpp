//Master
#include <iostream>

using namespace std;

int main() {
	int arr[] = { 15,12,59,2,3,5,4,8,8,3,15,12,9,12,20,12 };
	int arraysize = 0;
	int maxOcc = 0; 
	int count = 1;
	int maxcount = 0;

	arraysize = sizeof(arr) / sizeof(arr[0]);
	cout << "The length of the array is: " << arraysize << endl; 

	for (int i = 0; i < arraysize; i++) {
		for (int j = i + 1; j < arraysize; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}

		if (count > maxcount) {
			maxcount = count;
			maxOcc = arr[i];
		}
		count = 1;
	}

	cout << endl << "Max occuring element: " << maxOcc;
	cout << endl << "Max time it is occ is: " << maxcount;

	return 0;
}
