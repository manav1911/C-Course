//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream fin;
	char ch;

	fin.open("my.txt");
	int pos;
	pos = fin.tellg();

	cout << pos << endl;
	fin >> ch;

	pos = fin.tellg();
	cout << pos << endl;

	fin.close();

	return 0;
}
