//
#include<iostream>
#include<string>
using namespace std;

int main() {
	int num1 = 0, num2 = 0, total = 0;

	cout << "Enter the two numbers: ";
	cin >> num1 >> num2;

	try {
		if (num2 == 0) {
			throw num2;
		}
		else {
			total = num1 / num2;
			cout << "The output is: " << total << endl;
		}
	}
	catch (int x) {
		cout << "Exception is: Divide by " << x;
	}

	return 0;
}
