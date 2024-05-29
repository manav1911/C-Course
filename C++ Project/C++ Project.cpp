//Write a program to check the largest number among three given numbers
#include <iostream>

using namespace std;

int main() {
	int num1 = 0, num2 = 0, num3 = 0;

	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;
	cout << "Enter your third number: ";
	cin >> num3;

	if (num1 > num2 && num1 > num3) {
		cout << "The first number is the largest number.";
	}
	else if (num2 > num1 && num2 > num3) {
		cout << "The second number is the largest number.";
	}
	else if (num3 > num2 && num3 > num1) {
		cout << "The third number is the largest number.";
	}
	else {
		cout << "The three numbers are equal.";
	}

	return 0;
}
