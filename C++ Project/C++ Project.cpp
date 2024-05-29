#include <iostream>
using namespace std;

int main() {
	int marks = 0;

	cout << "Enter your marks: ";
	cin >> marks;

	if (marks >= 60 && marks <= 100) {
		cout << "You have passed!";
	}
	else if(marks >=0 && marks < 60) {
		cout << "You have failed!";
	}
	else {
		cout << "You have invalid scores!";
	}

	return 0;
}
