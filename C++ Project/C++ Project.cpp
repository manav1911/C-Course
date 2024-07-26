//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream fin;
	char A[10];

	fin.open("my.txt");

	for (int i = 0; i < 10; i++) {
		A[i] = 0;
	}

	fin.seekg(-3, ios_base::end); //The negative numbers mean moving backward and vice versa for positive numbers

	fin.read(A, -3);

	for (int i = 0; A[i] != 0; i++) {
		cout << A[i];
	}
	fin.close();
	

	return 0;
}
