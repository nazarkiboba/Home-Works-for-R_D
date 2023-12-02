#include <iostream>
#include<ctime>
#include<cstdlib>


int main()
{
 /*
       II.найменшу кількість спроб у попередніх іграх, включно з цією(highscore);
 */

     std::srand(std::time(nullptr));

     const int q = 180;
     const int w = std::rand() % (q + 1);
    
    
    int e = 0;

    std::cout << "Welcome to the game, the essence of which is to guess the number guessed by the computer........Are you ready?...Go!\n";
    std::cout << "Enter numbers ranging from 0 to 180 (inclusive),but if u want to give up:Enter -1;";
     
    std::cout << w;

    int t = 0;

    //ToDo:Якщо вписати число яке більше випадкового, то не залежно від випадку буде Hot;

    while(true)
    {
        ++t;

        std::cout << "\nEnter: ";
        std::cin >> e;

         if (e == -1)
         {
           std::cout << "";
           break;
         }

         if (e > 181 && e < 0 == false)
         {
            std::cout << "ERROR, the number is out of the range of available numbers!\n"; 
            break;
         }

        if (w == e)                                                  
        {
            std::cout << "Congratulations,YOU WIN!!!\n";
            std::cout<<"!!!You spend "<< t <<" tries!!!\n\n\n";
            break;
        }

        if (w - e < 11 || w - e  > 11 == false)
        {

            std::cout << "Hot...";
            continue;
        }

        if ( w - e < 21 || w - e > 21 == false)
        {

            std::cout << "Worm...";
            continue;
        }
        if (w - e < 181 || w - e > 181 == false)
        {

            std::cout << "Cold...";
            continue;
        }
     
    }

}

