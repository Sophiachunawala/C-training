#include<iostream>
using namespace std;


	template <typename t1, typename t2>
	t1 sum(t1 x, t2 y)
	{
		return (t1)(x + y);

	}
	int main()
	{
		cout << sum('s', 4) << endl;
		return 0;
	}