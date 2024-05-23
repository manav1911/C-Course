//Area to find area and perimeter of a triangle
//A = l*B
//Perimeter = 2(l+B)
#include <iostream>

using namespace std;

int main() {
	int length = 0;
	int breadth = 0;
	int area = 0;
	int perimeter = 0;

	//User Input
	cout << "Enter the lenght: ";
	cin >> length;

	cout << "Enter the breadth: ";
	cin >> breadth;

	//Calculations
	area = length * breadth;
	cout << "The area of the triangle is: " << area << endl;

	perimeter = 2 * (length * breadth);
	cout << "The perimeter of the triangle is: " << perimeter << endl;

	return 0;
}
