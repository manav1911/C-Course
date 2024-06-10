//Program to print the table of input No.
#include <iostream>

using namespace std;

int main() {
	int value = 0;

	cout << "Enter a number: ";
	cin >> value;

	//For Loop
	for (int i = 1; i <= 10; i++) {
		cout << endl << value << " * " << i << " = " << value * i;
	}

	return 0;
}
