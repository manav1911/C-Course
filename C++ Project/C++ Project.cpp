#include <iostream>
#include <string>
using namespace std;

void fun(int number);

void main() {
	int num, originalNum, remainder, result = 0;

	cout << "Enter a three-digit integer: ";
	cin >> num;

	fun(num);
}

void fun(int number) {

	int originalNum, remainder, result = 0;

	originalNum = number;

	while (originalNum != 0) {
		// here remainder contains the last digit
		remainder = originalNum % 10;
		result += remainder * remainder * remainder;

		// it will removing last digit from the orignal number
		originalNum /= 10;
	}
	if (result == number) {
		cout << number << " is an Armstrong number.";
	}

	else {
		cout << number << " is not an Armstrong number.";
	}

}