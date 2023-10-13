#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "четные числа: ";
	for (int i = 1; i <= 30; ++i) 
	{
		if (i % 2 == 0) 
		{
			cout << i << " ";
		}
	}

	cout << endl << "нечетные числа: ";
	for (int i = 1; i <= 30; ++i) 
	{
		if (i % 2 != 0) 
		{
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}