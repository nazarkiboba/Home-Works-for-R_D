#include <iostream>
#include <iomanip>

enum class WeekDays
{
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
	Sunday = 7,

};

int main()
{


	std::cout << "1 work:\n________________________________________________________________________________________________________________________\n\n";
	int myinteger = 0;
	int myinteger1 = 0;

	std::cout << "Enter the number: ";
	std::cin >> myinteger;
	std::cout << "\nEnter the second number: ";
	std::cin >> myinteger1;
	int saver = myinteger1;
	myinteger1 = myinteger + (myinteger1 - myinteger1);
	myinteger = saver;
	std::cout << "\nNow they will change,the secound will become first...\n\n" << myinteger;

	std::cout << "\n\nAnd the first will become second.\n\n" << myinteger1 << "\n";

	std::cout << "________________________________________________________________________________________________________________________\n\n2 work:\n________________________________________________________________________________________________________________________\n\n";
	double r = 23.3;
	int s = static_cast<int>(r);
	std::cout << std::left << std::setw(22) << std::setfill('$') << s << "\n\n";

	std::cout << "________________________________________________________________________________________________________________________\n\n3 work:\n________________________________________________________________________________________________________________________\n\n";

	double StandartNotation = 2678.98088598793456789567;
	double eNotation = 2.6789808859879e3;
	std::cout << std::setprecision(30) << StandartNotation;
	std::cout << "\n";
	std::cout << std::setprecision(15) << eNotation;


	std::cout << "\n\n________________________________________________________________________________________________________________________\n\n4 work:\n________________________________________________________________________________________________________________________\n\n";;

	WeekDays weekday{};
	weekday = WeekDays::Monday;
	weekday = WeekDays::Tuesday;
	weekday = WeekDays::Wednesday;
	weekday = WeekDays::Thursday;
	weekday = WeekDays::Friday;
	weekday = WeekDays::Saturday;
	weekday = WeekDays::Sunday;

	int q = (int)WeekDays::Monday;
	int v = (int)WeekDays::Tuesday;
	int b = (int)WeekDays::Wednesday;
	int a = (int)WeekDays::Thursday;
	int y = (int)WeekDays::Friday;
	int w = (int)WeekDays::Saturday;
	int m = (int)WeekDays::Sunday;
	std::cout << q << "\n" << v << "\n" << b << "\n" << a << "\n" << y << "\n" << w << "\n" << m << "\n";

	std::cout << "\n________________________________________________________________________________________________________________________\n\n5 work:\n________________________________________________________________________________________________________________________\n\n";
	int integerforbool = 0;
	std::cin >> integerforbool;
	bool x = integerforbool;
	std::cout << std::boolalpha << x << "\n\n";

}