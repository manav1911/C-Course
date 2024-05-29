//Write a program to check if the character entered is a vowel
#include <iostream>

using namespace std;

int main() {
	char mychar;

	cout << "Enter a character: ";
	cin >> mychar;

	if (mychar == 'a' || mychar == 'e' || mychar == 'i' || mychar == 'o' || mychar == 'u') {
		cout << "The character is a vovel.";
	}
	else if (mychar == 'A' || mychar == 'E' || mychar == 'I' || mychar == 'O' || mychar == 'U') {
		cout << "The character is a vovel.";
	}
	else {
		cout << "The character is not a vowel.";
	}

	return 0;
}
