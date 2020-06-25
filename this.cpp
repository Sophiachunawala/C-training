#include <iostream>
using namespace std;
/*class access {

    int num;
    char ch;
public:                               //not writing public here gives error because constructor by default is private
    access& setNum(int num) {
        this->num = num;
        return *this;
    }
    access& setCh(char ch) { //not mentioning "&" gives gibberish
        this->num++;
        this->ch = ch;
       this->ch = 'B'; //writing only ch here does not change the value
        return *this;
    }
    void displayMyValues() {
        cout << num << endl;
        cout << ch;
    }
};*/
void increment(int& a)
{
    a++;
}
int main() {
    /*access obj;
    obj.setNum(100).setCh('A');
    obj.displayMyValues();*/
    int a = 4;
    increment(a);
    cout << a;
    return 0;
}