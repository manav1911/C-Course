//Write a program to print the first and last number in a three digit number.
#include <iostream>

using namespace std;

int main() {
	int num = 0;
	int first = 0;
	int middle = 0;
	int last = 0;

	//User Input
	cout << "Enter the number: ";
	cin >> num;

	//Printing the first and last numbers
	first = num / 100;
	cout << "The first number is: " << first << endl;

	middle = (num / 10) % 10;
	cout << "The middle number is: " << middle << endl;

	last = num % 10;
	cout << "The last number is: " << last << endl;

	return 0;
}
