#include <iostream>
#include<string>
using namespace std;

int main() {
	string firstname, lastname, address;

	cout << "Enter your First Name: ";
	cin >> firstname;

	cout << "Enter your Last Name: ";
	cin >> lastname;

	cout << "Enter your Address: ";
	getline(cin.ignore(), address);   /* We have used getline() to also accept spaces in user inputs,
	and we have used the .ignore() because we need to flush the newline out of the stream*/

	string fullname = firstname.append(lastname);

	cout << "Your Fullnames are: " << fullname << " and address is: " << address << endl;

	return 0;
}
