//
#include<iostream>
#include<string>
#include<array>
using namespace std;

int main() {
	//Array Declaration
	array<int, 3>testarray1;

	//Array Initialization
	array<int, 3>testarray2 = { 10,20,30 };

	//Important Methods
	cout << "At " << testarray2.at(2) << endl;      //Adv - Out of Bound Safe //Print the value at a specific position
	cout << "[] " << testarray2[2] << endl;      //Unsafe  //Print the value at a specific position
	cout << "front() " << testarray2.front() << endl;      //Return 1st Element
	cout << "back() " << testarray2.back() << endl;      //Return to last Element
	testarray1.fill(0); //Fill Array with 0
	testarray1.swap(testarray2); //Swap Arrays
	testarray1.empty();  //Empty the Array
	cout << "size() " << testarray2.size() << endl;      //Size of the Array filled
	cout << "max_size() " << testarray2.max_size() << endl;      //Max size of Array

	return 0;
}
