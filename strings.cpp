#include <string>
#include <iostream>
using namespace std;
int main()
{
    string str1;
    str1.insert(str1.end(), 'W');
    str1.insert(str1.end(), 'O');
    str1.insert(str1.begin(), 'R');
    str1.insert(str1.end(), 'L');
    str1.insert(str1.end(), 'D');

    for (string::const_iterator it = str1.begin(); it != str1.end(); ++it) {
        cout << *it;
    }
    int len = str1.size();
    cout << "\nLength of string:" << len;
    cout << endl;
    return (0);
}