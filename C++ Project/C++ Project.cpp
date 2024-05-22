//Write a program to print the sum of the two numbers
#include <iostream>

using namespace std;

int main() {
	/*
	There are two approaches to writing variable and below are two of them:
	int var1 = 10, var2 = 20;
	*/
	int a = 0;
	int b = 0;
	int sum = 0;

	cout << "Enter the first number: " << endl;
	cin >> a;

	cout << "Enter the second number: " << endl;
	cin >> b;


	sum = a + b;
	cout << "The sum of the two numbers is: " << sum;


	return 0;
}
