//Write a program to check a number is odd or even
#include <iostream>

using namespace std;

int main() {
	int a = 0;

	cout << "Enter your number: ";
	cin >> a;

	if (a % 2 == 0) {
		cout << "The number is even!";
	}
	else {
		cout << "The number is odd!";
	}
	//
	return 0;
}
