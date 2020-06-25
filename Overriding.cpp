#include <iostream> 
using namespace std;

class Base {
public: 
    virtual void func()  {
        cout << " printing from base class " << endl;
    }
};


class derived : public Base {
public:
    void func()  {
        cout << "printing from derived class" << endl;
    }
};

 
int main()
{
    Base* b;
    b = new Base();
    b->func();

    derived* d;
    d = new derived();
    d->func();
    
    delete b;
    delete d;

    cout << "From main" << endl;
    return 0;
}