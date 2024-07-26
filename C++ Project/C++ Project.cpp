//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ofstream fout;

	fout.open("my.txt", ios::app);

	int pos;
	pos = fout.tellp();

	cout << "Put pointer is at: " << pos << endl;
	
	fout << "Academy";

	pos = fout.tellp();
	cout << "Put pointer after text: " << pos;

	fout.close();

	return 0;
}
