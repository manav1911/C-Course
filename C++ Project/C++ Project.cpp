#include <iostream>
using namespace std;

int main() {
	int x = 0, factorial = 1;

	cout << "Enter the starting number for the sum of the first 10 numbers: ";
	cin >> x;

	for (int i = x; i > 0; i--) {
		factorial = factorial * i;
	}

	cout << "The factorial of " << x << " you entered is: " << factorial << endl;	

	return 0;
}
