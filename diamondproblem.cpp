#include <iostream>
using namespace std;

 class  Sophia {
public:
	int age;
	
	void walk() {


		cout << "Sophia walks" << endl;
				}
};

class student : virtual public Sophia {

};

class teammate : virtual public Sophia {

};

class human : public student, public teammate {

};

int main()
{
	//const int s = 10;
	//s = 11;                          //some compilers might give a warning
	human obj;
	obj.walk();
	return 0;
}