#include <iostream>
#include<tuple>
using namespace std;
int main()
{
    pair<int, int> pair1, pair2;
    pair<int, string> pair3;

    pair1 = make_pair(1, 2);
    pair3 = make_pair(1, "Infineon Technologies");
    pair2 = make_pair(2, 4);
    cout << "\nPair1 First member: " << pair1.first << endl;
    cout << "\nPair2 Second member:" << pair2.second << endl;
    if (pair1 == pair2)
        cout << "Pairs are equal" << endl;
    else
        cout << "Pairs are not equal" << endl;




  /*  tuple<int, int, int> tuple1;
    tuple<int, string, string> tuple2;
    tuple1 = make_tuple(1, 2, 3);
    tuple2 = make_tuple(1, "Infineon", "Technologies");
    int a, b, c;
    tie(a, b, c) = tuple1;
    cout << "printing Tuple1"<<endl;
    cout << a << "" << b << "" << c<< endl;

    int id;
    string str1, str2;
    tie(id, str1, str2) = tuple2;
    cout << "Printing Tuple2"<<endl;
    cout << id << " " << str1 << " " << str2;

    return 0;*/
    return 0;
}