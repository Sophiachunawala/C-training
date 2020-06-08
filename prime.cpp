#include <iostream>
 int main()
{
	int n;
	int flag = 0;
	cout << "Enter a number";
		cin >> n;
	int m = n / 2;
	for (int i = 1; i <= m; i++)
	{
		if (n % i == 0)
		{


			flag++; 
		
		}


	}
	if (flag == 1)
		cout << "Is Prime";
	else
		cout << "Not Prime";

}
