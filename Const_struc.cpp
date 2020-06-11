

#include <stdio.h> 
#include <string>
#include <iostream>
using namespace std;

/*struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
int main() {
    Student s;
    cout << "Enter Student Name: ";
    cin.getline(s.stuName, 30);
    cout << "ENter Student Roll No: ";
    cin >> s.stuRollNo;
    cout << "Enter Student Age: ";
    cin >> s.stuAge;
    cout << "Student Record:" << endl;
    cout << "Name: " << s.stuName << endl;
    cout << "Roll No: " << s.stuRollNo << endl;
    cout << "Age: " << s.stuAge;
    return 0;
}*/


class Student
{
public:
    int rollno;
    string name;
    // first constructor
    Student(int x)
    {
        rollno = x;
        name = "None";
        cout << "Roll no is " << rollno << endl;
    }
    // second constructor
    Student(int x, string str)
    {
        rollno = x;
        name = str;
        cout << " My name is " << name << " And my Roll no is " << rollno;
    }
};

int main()
{
    
    Student A(10);
    Student B(11, "John");
    cout << B.name << endl;
    B.name = "sophia";
    cout << B.name << endl;
    return 0;
}