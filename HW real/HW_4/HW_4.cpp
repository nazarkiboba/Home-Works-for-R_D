#include <iostream>

enum class Month
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};


int main()
{
    std::cout << "First work:\n\n";

    int firstnum = 0;
    int secoundnum = 0;
    int thirdnum = 0;
    std::cout << "Enter the first number: ";
    std::cin >> firstnum;
    std::cout << "Enter the secound number: ";
    std::cin >> secoundnum;
    std::cout << "Enter the third number: ";
    std::cin >> thirdnum;

    std::cout << "\nThis is the biggest number: \n";


    if (secoundnum < firstnum && firstnum > thirdnum)
    {
        std::cout << firstnum << "\n";
    }
    else if (firstnum < secoundnum && secoundnum > thirdnum)
    {
        std::cout << secoundnum << "\n";
    }
    else if (secoundnum < thirdnum && thirdnum > firstnum)
    {
        std::cout << thirdnum << "\n";
    }
    else
    {
        std::cout << "\nThe numbers are equel\n";
    }
    std::cout << "\nSecound work:\n\n";

    int firstnum2 = 0;
    int secoundnum2 = 0;
    std::cout << "Enter the first number: ";
    std::cin >> firstnum2;
    std::cout << "Enter the secound number: ";
    std::cin >> secoundnum2;
    int y = (firstnum2 > secoundnum2) ? secoundnum2 : firstnum2;
    std::cout << "\nThis is the smollest number: " << y << "\n\n";

    std::cout << "Third work:\n\n";

    int firstnum3 = 0;
    std::cout << "Enter the first number: ";
    std::cin >> firstnum3;

    if (firstnum3 % 5 == 0)
    {

        if (firstnum3 % 11 == 0)
        {
            std::cout << "\nThe number is divisible by 11 and 5\n";
        }
        else
        {
            std::cout << "\nThe number is only divisible by 5\n";
        }
    }
    else
    {
        std::cout << "\nThe number is not divisible by 5\n";
    }

    std::cout << "\nFourth work:\n\n";

    int firstnum4 = 0;
    int secoundnum4 = 0;
    int thirdnum4 = 0;
    std::cout << "Enter the 1-st number of degrees to make a triangle: ";
    std::cin >> firstnum4;
    std::cout << "Enter the 2-nd number of degrees to make a triangl: ";
    std::cin >> secoundnum4;
    std::cout << "Enter the 3-rd number of degrees to make a triangl: ";
    std::cin >> thirdnum4;

    if (firstnum4 + secoundnum4 + thirdnum4 == 180 && firstnum4 != 0 && secoundnum4 != 0 && thirdnum4 != 0)
    {
        std::cout << "Angles can make a triangle";
    }
    else
    {
        std::cout << "Angles can't make a triangle";
    }
    std::cout << "\nFifth work:\n\n";

    int intmonth = 0;

    std::cout << "Enter the month as a date: \n";
    std::cin >> intmonth;

    Month month = static_cast<Month>(intmonth);

    switch (month)
    {
    case Month::January:
        std::cout << "January\n";
        break;
    case Month::February:
        std::cout << "February\n";
        break;
    case Month::March:
        std::cout << "March\n";
        break;
    case Month::April:
        std::cout << "April\n";
        break;
    case Month::May:
        std::cout << "May\n";
        break;
    case Month::June:
        std::cout << "June\n";
        break;
    case Month::July:
        std::cout << "July\n";
        break;
    case Month::August:
        std::cout << "August\n";
        break;
    case Month::September:
        std::cout << "September\n";
        break;
    case Month::October:
        std::cout << "October\n";
        break;
    case Month::November:
        std::cout << "November\n";
        break;
    case Month::December:
        std::cout << "December\n";
        break;
    default:
        std::cout << "Error, there are no such months\n";
        break;
    }

    std::cout << "\nSixth work:\n\n";

    int intmonth1 = 0;

    std::cout << "Enter the month as a date: \n";
    std::cin >> intmonth1;

    Month month1 = static_cast<Month>(intmonth1);

    switch (month1)
    {

    case Month::March:
    case Month::April:
    case Month::May:

        std::cout << "This is the month of Spring\n";

        break;
    case Month::June:
    case Month::July:
    case Month::August:

        std::cout << "This is the month of Summer\n";

        break;
    case Month::September:
    case Month::October:
    case Month::November:

        std::cout << "This is month of Autumn\n";

        break;
    case Month::December:
    case Month::January:
    case Month::February:

        std::cout << "This is the month of Winter\n";

        break;
    default:

        std::cout << "Error, there are no such months\n";

        break;
    }
}