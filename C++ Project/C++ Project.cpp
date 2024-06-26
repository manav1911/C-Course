//
#include<iostream>
#include<string>
using namespace std;

struct person {    //Definition of structure
	string name;
	int age;
	float weight;
	float height;
	double salary;
};

int main() {
	person pVar;

	pVar.name = "Goti";
	pVar.age = 25;
	pVar.weight = 80.5f;
	pVar.height = 6.1f;
	pVar.salary = 100000.95;

	pVar.salary = 90000.34;

	cout << endl << "Name: " << pVar.name;
	cout << endl << "Salary: " << pVar.salary;
	cout << endl << "Weight: " << pVar.weight;
	cout << endl << "Height: " << pVar.height;
	cout << endl << "Salary: " << pVar.salary;


	return 0;
}
