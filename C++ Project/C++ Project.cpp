#include <iostream>

using namespace std;

int main() {
	int value = 0;
	int x = 1;

	cout << "Enter the number: ";
	cin >> value;

	do {
		cout << endl << value << " * " << x << " = " << value * x;
		x++;
	} while (x <= 10);

	return 0;
}
