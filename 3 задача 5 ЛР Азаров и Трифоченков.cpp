#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	int sum = 0;

	for (int i = 1; i <= 200; i++)
	{
		sum += i;
	}
	cout << "Сумма всех чисел от 1 до 200 = " << sum << endl;
	return 0;
}