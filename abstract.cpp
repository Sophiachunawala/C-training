#include <iostream>

using namespace std;

class Base
{
public:
    virtual void show() = 0;  // =0 in the end is a Pure Virtual Function
};

class Derived :public Base
{
public:
    void show()
    {
        cout<< "Implementation of Virtual Function in Derived class\n";
    }
};

int main()
{
    //Base obj , remember cannot instantiate an abstract class (Vtable is incomplete)
    
    Derived* d = new Derived();
    
    d->show();
}