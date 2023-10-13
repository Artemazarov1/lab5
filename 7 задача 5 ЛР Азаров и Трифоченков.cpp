#include <iostream>
using namespace std;

int main() 
{
	setlocale (0, "");
	int num1;
	cout << "введите число: ";
	cin >> num1;

	cout << "делители числа " << num1 << ": ";
	for (int i = 1; i <= num1; ++i) 
	{
		if (num1 % i == 0) 
		{
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}