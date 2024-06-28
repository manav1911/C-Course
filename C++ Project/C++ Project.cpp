//
#include<iostream>
#include<string>
using namespace std;

struct student {
	int Adm_no;
	int percentage;
	string name;
};

int main() {
	struct student stud[3];
	int i;

	//Taking values from the user and storing the data
	for (i = 0; i < 3; i++) {
		cout << "Student: " << i + 1 << endl;
		
		cout << "Enter Admission Number: ";
		cin >> stud[i].Adm_no;
		cout << "Enter Name: ";
		cin >> stud[i].name;
		cout << "Enter percentage: ";
		cin >> stud[i].percentage;
	}

	//Print the data
	cout << "The results are as follows: " << endl;
	for (i = 0; i < 3; i++) {
		cout << "Student: " << i + 1 << endl;
		cout << "Adminssion Number: " << stud[i].Adm_no << endl;
		cout << "Student Name: " << stud[i].name << endl;
		cout << "Percentage: " << stud[i].percentage << endl;
	}

	return 0;
}
