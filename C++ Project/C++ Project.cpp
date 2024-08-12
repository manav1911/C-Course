//
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	//declaration
	map<int, string> map1;

	//initialization
	map<int, string> map2 = { {101,"Mas"},{201,"Kevin"},{301,"Ben"} };

	//methods

	//Insert
	map2[201] = "Tim";
	//check
	for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++) {
		cout << i->first << " ";  //For printing the map KEY
		cout << i->second << endl; //For printing value - for string value, dont forget to include STRING header.
	}
	cout << endl;

	//at
	cout << "Value at 201: " << map2.at(201) << endl; //Get value by KEY, out of bound safe

	//[]
	cout << "Value at 201: " << map2[201] << endl;

	//Change value
	map2.at(201) = "Lima";
	cout << "Value at 201: " << map2.at(201) << endl;

	//insert: insert key, value at particular location as MAP is sorted.
	//2 Types of Approach
	map2.insert(pair<int, string>(106, "Amit"));
	map2.insert(make_pair(208, "Hina"));

	//check
	for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++) {
		cout << i->first << " "; //For printing the key value
		cout << i->second << endl;
	}
	cout << endl;

	//erase(): remove entry in map pointed by iterator
	map<int, string>::iterator i = map2.begin();
	map2.erase(i);

	//check
	for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++) {
		cout << i->first << " "; //For printing the key value
		cout << i->second << endl;
	}
	cout << endl;

	return 0;
}
