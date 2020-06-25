#include <iostream>
using namespace std;

class Area {
    int length, breadth, area;

private:

    Area(int length, int breadth) 
    {
        this->length = length;
        this->breadth = breadth;
    }
    void calcArea() 
    {
        area = length * breadth;
    }

    friend class printClass;

};
class printClass {

public:
    void printArea(Area a) {
        cout << "Area = " << a.area;
    }
};
int main() {
    Area a(10, 15);
    a.calcArea();
    printClass p;
    p.printArea(a);

    return 0;
}