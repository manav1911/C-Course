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
			string err = "Number divided by 0";
			throw err;
		}
		else {
			total = num1 / num2;
			cout << "The output is: " << total << endl;
		}
	}
	catch (int x) {
		cout << "Exception is: Divide by " << x;
	}
	catch (string y) {
		cout << y;
	}

	return 0;
}
