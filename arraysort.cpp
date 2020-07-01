#include<iostream>
#include <algorithm> 
//#include<String>
using namespace std;

void fun(int a, string b="infineon")
{
	cout << a << endl;
	cout << b << endl;
}
int main()
{
	fun(3, "Sophia");
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n);                            //greater<int>()) for descending

	cout << "Array after sorting : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;


}
