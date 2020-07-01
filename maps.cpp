#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std;

int main()
{

    
    map<int, int> a;

    // key and mapped value. No two mapped vlaues can have same key
    a.insert(pair<int, int>(2, 50));
    a.insert(pair<int, int>(1, 40));
    a.insert(pair<int, int>(3, 60));
    a.insert(pair<int, int>(4, 20));
 
   map<int, int>::iterator itr;
    cout << "\nThe map a is : \n";

    for ( itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }
    cout << endl;
};