//C++ program to write and read object using read and write function.
#include <iostream>
#include <fstream>   //This will include ofstream and ifstream

using namespace std;

//class student to read and write student details
class student
{
private:
    char name[30];
    int age;
public:
    void getData(void)
    {
        cout << "Enter name:"; cin.getline(name, 30);
        cout << "Enter age:"; cin >> age;
    }

    void showData(void)
    {
        cout << "Name:" << name << ",Age:" << age << endl;
    }
};

int main()
{
    student s;

    ofstream file;                                   ///writing

    //open file in write mode
    file.open("data.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file.." << endl;
        return 0;
    }
    cout << "\nFile created successfully." << endl;

    //write into file
    s.getData();    //read from user

    /*(char*)&s is used to point at the start of an object and sizeof(s)
    calculates the number of bytes copied in file*/
    file.write((char*)&s, sizeof(s));    //write into file

    file.close();   //close the file
    cout << "\nFile saved and closed succesfully." << endl;


    //re open file in input mode and read data
    //open file1
    ifstream file1;                                             ///reading
    //again open file in read mode
    file1.open("data.txt", ios::in);
    if (!file1) {
        cout << "Error in opening file..";
        return 0;
    }
    //read data from file
    /*(char*)&s is used to point at the start of an object and sizeof(s)
    calculates the number of bytes read from the file.*/
    file1.read((char*)&s, sizeof(s));

    //display data on monitor
    s.showData();
    //close the file
    file1.close();

    return 0;
}