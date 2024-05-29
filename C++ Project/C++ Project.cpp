//Write a program to check a number is a multiple of 3
#include <iostream>

using namespace std;

int main() {
	int a = 0;

	cout << "Enter your number: ";
	cin >> a;

	if (a % 3 == 0) {
		cout << "The number is a multiple of 3!";
	}
	else {
		cout << "The number is not a multiple of 3!";
	}
	
	return 0;
}
