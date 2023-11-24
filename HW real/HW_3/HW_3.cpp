#include <iostream>

int main()
{
	std::cout << "1 work:\n";

	int secondsinminute = 60;
	int secondsinhour = 3600;
	int justseconds = 0;
	std::cout << "Enter the time spent on the game in seconds:";
	std::cin >> justseconds;
	int hours = justseconds / secondsinhour;
	int minuts = (justseconds - hours * secondsinhour) / secondsinminute;
	int seconds = (justseconds - hours * secondsinhour) % secondsinminute;
	std::cout << "Hourse: " << hours << "\n" << "Minuts: " << minuts << "\n" << "Seconds: " << seconds;

	std::cout << "\n2 work:\n";

	double m = 0;
	double n = 0;
	double y = 0;

	std::cout << "Enter the first number: ";
	std::cin >> m;
	std::cout << "Enter the second number: ";
	std::cin >> n;
	std::cout << "Enter the third number: ";
	std::cin >> y;
	double p = m + n + y;
	std::cout << "The sum of all numbers is equal: " << p;
	double r = m * n * y;
	std::cout << "\nThe product of all numbers is equal to: " << r;
	double v = (m + n + y) / 3;
	std::cout << "\nThe arithmetic mean of all numbers is equal to: " << v;
	bool b = m <= n;
	bool c = m >= n;
	bool u = n <= y;
	bool h = n >= y;
	std::cout << "\nIs it true that the first number is less than or equal to the second? " << std::boolalpha << b;
	std::cout << "\nIs it true that the first number is greater than or equal to the second? " << std::boolalpha << c;
	std::cout << "\nIs it true that the second number is less than or equal to the third? " << std::boolalpha << u;
	std::cout << "\nIs it true that the second number is greater than or equal to the third? " << std::boolalpha << h << "\n";

	std::cout << "3 work:\n";

	double o = 0;
	double a = 0;

	std::cout << "Enter the first number: ";
	std::cin >> o;
	std::cout << "Enter the second number: ";
	std::cin >> a;
	bool lessThan = o < a;
	bool equal = o == a;
	bool moreThan = o > a;
	bool lessOrEqual = o <= a;
	std::cout << "Is it true that the first number is less than the second? " << "               Answer: " << std::boolalpha << lessThan << "\n";
	std::cout << "Is it true that the first number is equal to the second? " << "                Answer: " << std::boolalpha << equal << "\n";
	std::cout << "Is it true that the first number is greater than the second? " << "            Answer: " << std::boolalpha << moreThan << "\n";
	std::cout << "Is it true that the first number is smaller or the same as the second? " << "  Answer: " << std::boolalpha << lessOrEqual << "\n";

	std::cout << "4 work:\n";

	double width = 0;
	double height = 0;

	std::cout << "Enter width: ";
	std::cin >> width;
	std::cout << "Enter height: ";
	std::cin >> height;
	double Perimeter = (width + height) * 2;
	double Square = width * height;
	std::cout << "This is the rectangle's pyrimeter: " << Perimeter << "\n";
	std::cout << "This is the area rectangle: " << Square << "\n";

	std::cout << "5 work:\n";

	double radius = 0;
	double pi = 3.14;
	double area_of_a_circle = 0;
	double circlelength = 0;
	std::cout << "Enter the radius of the circle: ";
	std::cin >> radius;
	area_of_a_circle = pi * (radius * radius);
	std::cout << "The area of the circle: " << area_of_a_circle << "\n";
	circlelength = (2 * pi) * radius;
	std::cout << "The lenght of the circle: " << circlelength << "\n";
}