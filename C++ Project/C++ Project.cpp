//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ofstream fout;
	char A[8] = "Academy";

	fout.open("my.txt", ios::in);

	fout.seekp(3, ios_base::beg);

	fout.write(A, 8);

	fout.close();
	return 0;

	return 0;
}
