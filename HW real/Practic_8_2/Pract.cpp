#include "Pract.h"
#include <iostream>

using namespace std;

int print(int count) 
{
	int positive = 0;
	int negative = 0;
	int zero = 0;

	for (int i = 0; i < count; ++i)
	{
		int number;
		cout << "Enter the values: ";
		cin >> number;

		if (number > 0) 
		{
			++positive;
		}
		if (number < 0) 
		{
			++negative;
		}
		if (number == 0)
		{
			++zero;
		}
    }

	cout << "Positive: " << positive<< "\nNegative: " << negative << "\nZeroes: " << zero << endl;			
	return 0;
}
int Secound_a(int num)
{
	int factorial = 1;
	for (int i = 2; i <= num; i++)
	{
		factorial *= i;

	}
	return factorial;

}
int Secound_b(unsigned int num)
{
	
	if (num == 1 || num == 0)
	{
		return 1;
	}
	else 
	{
		return num * Secound_b(num - 1);
	}	
}
void Third_a(int num)
{

	int i = 1;
	while (i <= num)
	{
		cout << num << "\n\n";
		num--;
	}

}
void Third_b(int num)
{
	int number = 0;
	for (int i = 1; i <= num; i++)
	{
		number = +i;
		cout << number << "\n\n";
	}
}
void Third_c(int num)
{
	if (num < 1)
	{
		return;
	}
	cout << num << "\n\n";
	Third_c(num - 1);
}
void Third_d(int num)
{
	if (num < 1)
	{
		return;
	}
	Third_d(num - 1);
	cout << num << "\n\n";
}