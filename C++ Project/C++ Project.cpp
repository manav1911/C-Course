#include <iostream>

using namespace std;

int main() {
	int value = 1, sum = 0;
	
	do {
		sum = sum + value;
		value++;
	} while (value <= 10);

	cout << "The sum of the first 10 natural numbers is: " << sum << endl;

	return 0;
}
