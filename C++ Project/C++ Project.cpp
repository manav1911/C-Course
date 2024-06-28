//
#include<iostream>
#include<string>
using namespace std;

struct student {
	string fullName;
	int admNo;
	int marks;
};

int main() {
	struct student std[1];
	int i;

	for (i = 0; i < 1; i++) {
		cout << "Student: " << i + 1 << endl;
		
		cout << endl << "Student Full Name: ";
		getline(cin, std[i].fullName);
		cout << "Enter Admission Number: ";
		cin >> std[i].admNo;
		cout << "Enter Marks: ";
		cin >> std[i].marks;
	}

	cout << endl << "The results are below: " << endl;
	for (i = 0; i < 1; i++) {
		cout << " " << endl;
		cout << "Student: " << i + 1 << endl;
		cout << "Full Name: " << std[i].fullName << endl;
		cout << "Admission Number: " << std[i].admNo << endl;
		cout << "Marks: " << std[i].marks << endl;
	}
	return 0;
}
