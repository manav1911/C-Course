//Write a program to check a number is in a range of 100 and 200
#include <iostream>

using namespace std;

int main() {
	int a = 0;

	cout << "Enter your number: ";
	cin >> a;

	if (a >= 100 && a <= 200) {
		cout << "The number is in range of 100:200.";
	}
	else {
		cout << "The number is out of range of 100:200.";
	}

	return 0;
}
