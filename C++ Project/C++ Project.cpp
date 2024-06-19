//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string var = "";

	cout << "Enter a string: ";
	getline(cin, var);

	cout << endl << "The string you entered: " << var;

	return 0;
}
