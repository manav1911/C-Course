#include <iostream>

using namespace std;

int main() {
	int value = 0;
	int x = 1;

	cout << "Enter the number: ";
	cin >> value;

	while (x <= 10) {
		cout << endl << value << " * " << x << " = " << value * x;
		x++;
	}

	return 0;
}
