//Program in C++ to find the sum of first 10 natural numbers.
#include <iostream>

using namespace std;

int main() {
	int x, sum = 0;

	for (x = 1; x <= 10; x++) {
		sum = sum + x;
	}

	cout << "The sum of the first 10 natural numbers: " << sum << endl;

	return 0;
}
