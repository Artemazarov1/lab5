#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	int height;

    cout << "введите высоту: ";
	cin >> height;

	cout << "трапеция:" << endl;
	for (int i = 0; i < height; ++i) 
	{
		for (int j = 0; j < height - i - 1; ++j) 
		{
			cout << " ";
		}
		for (int c = 0; c < 2 * i + 1; ++c) 
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "квадрат:" << endl;
	for (int b = 0; b < height; ++b) 
	{
		for (int a = 0; a < height; ++a) 
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}