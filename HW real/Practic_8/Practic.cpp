#include <iostream>
#include "Pract.h"

using namespace std;

int main()
{
	cout << "First Work!\n";
	{
		int count;
		cout << "Enter the number of values: ";
		cin >> count;
		print(count);
	}

	cout << "\nSecound Work!\n" << "a)\n";
	{
		int last_num = 0;
		cout << "Enter the number to know factorial of this number: ";
		cin >> last_num;
		last_num=Secound_a(last_num);
		cout << last_num<<"\n\n";
	
	    cout << "Secound Work!\n" << "b)\n";
	
		int factorial;
		cout<< "Enter the number to know factorial of this number: ";
		cin >> factorial;
		factorial = Secound_b(factorial);
		cout << factorial << "\n\n";
	}

	cout << "Third Work!\n" << "a)\n";
	{
		int k = 0;
		cout << "Enter the number: ";
		cin >> k;
		Third_a(k);

		cout << "b)\n";
		int x = 0;
		cout << "Enter the number: ";
		cin >> x;
		Third_b(x);

		cout << "c)\n";
		int e = 0;
		cout << "Enter the number: ";
		cin >> e;
		Third_c(e);

		cout << "d)\n";
		int q = 0;
		cout << "Enter the number: ";
		cin >> q;
		Third_d(q);
	}
}


