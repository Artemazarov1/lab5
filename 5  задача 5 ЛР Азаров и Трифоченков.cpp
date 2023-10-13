#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int sum = 0;

	for (int i = 1; i <= 100; ++i) 
	{
		if (i % 2 == 0 || i % 3 == 0) 
		{
			sum += i;
		}
	}

	cout << "Сумма всех чисел, кратных 2 или 3, в диапазоне от 1 до 100 = " << sum << endl;

	return 0;
}