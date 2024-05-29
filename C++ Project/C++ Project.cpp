#include <iostream>
using namespace std;

int main() {
	int marks = 0;

	cout << "Enter your marks: ";
	cin >> marks;

	if (marks >= 60) {
		cout << "You have passed!";
	}
	else {
		cout << "You have failed!";
	}

	return 0;
}
