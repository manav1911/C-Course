//Master//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string var1 = "", var2 = "";

	cout << "Enter a string: ";
	getline(cin, var1);

	cout << "Enter another string: ";
	getline(cin, var2);

	if (var1.compare(var2) == 0) {		//We have used the .compare() function to compare the strings
		cout << "Both the strings are the same." << endl;
	}
	else {
		cout << "Both the strings are not the same." << endl;
	}

	return 0;
}
