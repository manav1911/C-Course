//Write a program to compute quotient and remainder
#include <iostream>

using namespace std;

int main() {
	int divident = 0;
	int divisor = 0;
	int quotient = 0;
	int remainder = 0;
	
	//Take input fropm user
	cout << "Enter the Divident number: ";
	cin >> divident;

	cout << "Enter the Divisor number: ";
	cin >> divisor;

	//Calculation
	quotient = divident / divisor;
	cout << "The quotient for the two numbers is: " << quotient << endl;

	remainder = divident % divisor;
	cout << "The remainder for the two numbers is: " << remainder << endl;

	return 0;
}
