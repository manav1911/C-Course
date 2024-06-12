//Master
#include <iostream>

using namespace std;

int main() {
	int arr[5][5];
	int sum = 0;

	//Input
	for (int i = 0; i < 5; i++) { //Representing the row
		for (int j = 0; j < 5; j++) { //Representing the column
			cout << "Row is: " << i << " and column is: " << j << " Enter a value: ";
			cin >> arr[i][j];
		}
	}

	//Sum Logic
	for (int i = 0; i < 5; i++) { //Representing the row
		for (int j = 0; j < 5; j++) { //Representing the column
			sum = sum + arr[i][j];

		}
	}
	cout << "Sum is: " << sum;

	return 0;
}
