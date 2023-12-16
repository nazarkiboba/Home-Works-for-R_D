#include <iostream>


void Secound_a(int num);
//void Secound_b(int num);
void Third_a(int num);
void Third_b(int num);
void Third_c(int num);
void Third_d(int num);

int main()
{
	
	std::cout << "Secound Work!\n"<<"1)\n";
	{
		int last_num = 0;
		std::cout << "Enter the number to know factorial of this number: ";
		std::cin >> last_num;
		Secound_a(last_num);
	}
	/*std::cout << "2)\n";
	{
		int last_num = 0;
		std::cout << "Enter the number to know factorial of this number: ";
		std::cin >> last_num;
		Secound_b(last_num);
	}*/
	std::cout << "Third Work!\n" << "a)\n";
    { 
	 int k = 0;
	 std::cout << "Enter the number: ";
	 std::cin >> k;
	 Third_a(k);

	 std::cout << "\nb)\n";
	 int x = 0;
	 std::cout << "Enter the number: ";
	 std::cin >> x;
	 Third_b(x);

	 std::cout << "\nc)\n";
	 int e = 0;
	 std::cout << "Enter the number: ";
	 std::cin >> e;
	 Third_c(e);
 
	 std::cout << "\nd)\n";
	 int q = 0;
	 std::cout << "Enter the number: ";
     std::cin >> q;
	 Third_d(q);
   }
}

void Secound_a(int num)
{
	int factorial = 1;
	for (int i = 2; i <= num; i++)
	{
		factorial *= i; 
		
	}
  std::cout << factorial<<"\n\n";
    
}
/*void Secound_b(int num)
{
	int factorial = --num;
	int sum = factorial * num;
	int i = num;
	if (i >= 2)
	{   
		--i;
		Secound_b(sum * (num));
		return;
	}
	std::cout << sum << "\n";
}*/
void Third_a(int num)
{
	int i = 1;
	while ( i <= num)
	{
		std::cout << num << "\n";
        num --;
	}
	
}
void Third_b(int num)
{
	int number = 0;
	for (int i = 1; i <= num; i++)
	{
		  number =+ i;
		std::cout << number << "\n";
	}
}
void Third_c(int num)
{
    if (num < 1)
	{
		return;
	}
	std::cout << num << "\n";
	Third_c(num - 1);
}
void Third_d (int num)
{
	if (num < 1)
	{
		return;
	}
	Third_d(num - 1);
    std::cout << num << "\n";
}
