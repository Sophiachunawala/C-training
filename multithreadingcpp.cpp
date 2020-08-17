
#include <iostream>       
#include <thread>         // std::thread

void f1()
{
	for (int i = 0; i <= 1000; i++)
	{
		std::cout << "In thread F1 \n";
	}
}

void f2(int x)
{
	for (int i = 0; i <= 1000; i++)
	{
		std::cout << " In thread F2 \n";
	}
}

int main()
{
	std::thread first(f1);     //  new thread that calls f1()
	first.join();
	std::thread second(f2, 0);  // new thread that calls f2(0)
	second.join();
	std::cout << "\n main, f1 and f2 now execute concurrently\n";

	// synchronize threads:
	//first.join();                // pauses until first finishes
	//second.join();               // pauses until second finishes

	std::cout << "f1 and f2 completed.\n";

	return 0;
}