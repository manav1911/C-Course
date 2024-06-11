//Program in C++ to find the sum of next 10 numbers
#include <iostream>
using namespace std;

int main() {
	int x = 0, sum = 0;

	cout << "Enter the starting number for the sum of the first 10 numbers: ";
	cin >> x;

	for (int i = 1; i <= 10; i++) {
		x++;
		sum = sum + x;
	}

	cout << endl <<"The sum of the 10 numbers after you have entered is: " << sum << endl;
	
	return 0;
}
