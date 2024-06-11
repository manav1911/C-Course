#include <iostream>

using namespace std;

int main() {
	int x = 1, sum = 0;

	while (x <= 10) {
		sum = sum + x;
		x++;
	}
	cout << "The sum of the first 10 natural numbers: " << sum;

	return 0;
}
