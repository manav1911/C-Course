//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ofstream fout;

	fout.open("my.txt");

	fout << "C++Course";
	
	fout.close();

	return 0;
}
