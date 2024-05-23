//Write a program to calculate the sum and average of 4 numbers
#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int sum = 0;
	int avg = 0;

	//User input
	cout << "Enter the value of first number: ";
	cin >> a;

	cout << "Enter the value of second number: ";
	cin >> b;

	cout << "Enter the value of third number: ";
	cin >> c;

	cout << "Enter the value of fourth number: ";
	cin >> d;

	//Calculation
	sum = a + b + c + d;
	cout << "The sum of the four numbers is: " << sum << endl;

	avg = sum / 4;
	cout << "The average of the four numbers is: " << avg << endl;

	return 0;
}
