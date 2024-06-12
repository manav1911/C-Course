//Master
#include <iostream>

using namespace std;

int main() {
	int arr[5][5];
	
	//Input
	for (int i = 0; i < 5; i++) { //Representing the row
		for (int j = 0; j < 5; j++) { //Representing the column
			cout << "Row is: " << i << " and column is: " << j << " Enter a value: ";
			cin >> arr[i][j];
		}
	}

	//Print
	for (int i = 0; i < 5; i++) { //Representing the row
		for (int j = 0; j < 5; j++) { //Representing the column
			cout << endl << "Row is: " << i << " and column is: " << j << " The value is: ";
			cout << arr[i][j];
		}
	}

	return 0;
}
