#include <iostream>
#include <cctype> 

using namespace std;

int main()
{
    cout << "Arithmetic progression\n";

    {
        int firstnum = 0;
        int secoundnum = 0;
        int thirdnum = 0;
        int e = 0;

        cout << "Enter the number: ";
        cin >> firstnum;
        cout << "Enter the step of arithmetic progression: ";
        cin >> secoundnum;
        cout << "Enter the number of steps of the arithmetic progression: ";
        cin >> thirdnum;

        for (int i = 0; i <= thirdnum; ++i)
        {   
            cout <<"A.p. "<< e <<": " << firstnum << " | ";
            firstnum += secoundnum; 
            e++;
        }
    }

    cout << "\nFibonacci\nHow much operation do u need?[x3](max = 15): ";

    {
        int e;
        cin >> e;
        int first_num = 1;
        int secound_num = 1;
        int result = first_num + secound_num;
        int r = 3;

        if (e >= 1)
        {
            cout << "F" << r - 2 << ": " << first_num << " F" << r - 1 << ": " << secound_num << " F" << r << ": " << result << "\n";
        }
        while (e <= 0)
        {
            break;
        }
        while (e >= 16)
        {
            cout << "This is too much";
            break;
        }
        while (e >= 2)
        {

            first_num = secound_num + result;
            r++;
            cout << "F" << r << ": " << first_num;
            secound_num = first_num + result;
            r++;
            cout << " F" << r << ": " << secound_num;
            result = first_num + secound_num;
            r++;
            cout << " F" << r << ": " << result << "\n";
            e--;

        }
    }
 
    cout << "Factorial\n";

    {
        int factorial = 1;
        cout << "Enter the number to find factorial: ";
        cin >> factorial;

        int saver = factorial;
        for (int i = 1; i < factorial; i++)
        {
            saver *= i;
        }
        cout << saver << "\n";
    }

    cout << "Figures\n";
    {
        int height1 = 0;
        cout << "Enter the high,and width[Enter one number]: ";
        cin >> height1;
        for (int i = 0; height1 > i; i++)
        {
            for (int j = i; height1 > j; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }

        int width2 = 1;
        int height2 = 0;
        cout << "Enter the height: ";
        cin >> height2;
        for (int i = 0; height2 > i; i++)
        {
            for (int j = -i; width2 > j; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }

        int width3 = 0;
        int height3 = 0;
        cout << "Enter the width: ";
        cin >> width3;
        cout << "Enter the height: ";
        cin >> height3;
        for (int i = 0; height3 > i; i++)
        {
            for (int j = 0; width3 > j; j++)
            {
                cout << "*";


            }

            cout << "\n";
        }

        cout << "Enter the high,and width[Enter one number]: ";
        int hight;
        string space = "";
        cin >> hight;
        for (int r = 0;r < hight;r++)
        {
            cout << space;
            for (int v = 0;v < hight;v++)
            {
                cout << "*";
            }
            cout << "\n";
            space = space + " ";
        }
    }

 
    /*cout << "Enter the high: ";
    int width = 1;
    cin >> high;
    string ar = "1";
    string ar_1 = "0";

    for (int r = 0;r < high;r++)
    {
        for (int v = -r;v < width;v++)
        {                        
            cout << ar;
            
        }
        
        cout << "\n";
        
    }

    cout << "Enter the simbol: ";
    char w;
    

    while (true)
    {
        cout << "If u wont to exit enter '.'\n";
        cin >> w;
        if (w == '.')
        {
            break;
        }
        if (w >= 'a' && w <= 'z')
        {
            w == (w >= 'A' && w <= 'Z');
            cout << w;
            break;
        }
        if (w >= '0' && w <= '9')
        {
            cout << "";
            break;
        }
        else
        {
            cout << "This character is not processed by the program\n";
            continue;
        }
        
    }*/


}

