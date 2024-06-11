#include <iostream>

using namespace std;

int main() {
	int arr[] = { 100,200,300,400,500 };
	int arraysize = 0;

	arraysize = sizeof(arr) / sizeof(arr[0]);
	cout << "Lenght of array is: " << arraysize;

	return 0;
}
