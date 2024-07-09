//
#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = &arr[0];
	//int* ptr = arr;

	for (int i = 0; i < 5; i++) {
		cout << "Value at " << i << " is: " << *(ptr + i) << endl;
	}

	return 0;
}
