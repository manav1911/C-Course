//Check if the letter is upper or lower case
#include <iostream>

using namespace std;

int main() {
	char letter;

	cout << "Enter any character: ";
	cin >> letter;

	if (letter>='A' && letter <= 'Z'){
		cout << "The letter " << letter << " is upper case";
	}
	else if (letter >= 'a' && letter <= 'z') {
		cout << "The letter " << letter << " is lower case";
	}
	else {
		cout << "Invalid Input";
	}

	return 0;
}
