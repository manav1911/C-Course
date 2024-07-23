//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream fin;   //create input stream
	char ch;  //Variable for storing GET pointer character

	fin.open("my.txt");    //Load file in RAM
	fin >> ch;   //Storing 1st GET pointer value into CH variable

	while (!fin.eof()) {  //Iterate till END OF FILE
		cout << ch;   //Print the value at first index (1st character)
		fin >> ch;    //move the GET pointer forward
	}

	fin.close();  //Close file

	return 0;
}
