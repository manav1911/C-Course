//Write a program to print the area of a square
#include <iostream>

using namespace std;

int main() {
	int sides = 0;
	int area = 0;

	//User Input
	cout << "Enter the lenght of the square: ";
	cin >> sides;

	//Calculation
	area = sides * sides;
	cout << "The area of the square is: " << area;

	return 0;
}
