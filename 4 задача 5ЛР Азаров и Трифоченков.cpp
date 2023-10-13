#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int num1 = 1;
	long long factorial = 1;

	for (int i = 1; i <= 20; i++)
	{
		factorial *= i;
	}
	cout << "Факториал числа 20 = " << factorial << endl;
	return 0;
}