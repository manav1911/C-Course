#include <iostream>
#include <array>
using namespace std;

// How take user input in STL array

int main() {
	int sizeofSTLarray = 0;

	std::array<int, 8> arrayObj2;

	sizeofSTLarray = arrayObj2.size();  // find size of STL array


	for (int i = 0; i < sizeofSTLarray; i++) {   // loop taking input //
		cout << endl << i << " Enter a number : ";
		cin >> arrayObj2[i];					// take input //
	}

	// print
	for (int j = 0; j < sizeofSTLarray; j++) {   // loop taking input //
		std::cout << endl << arrayObj2[j];;
	}

	return 0;
}