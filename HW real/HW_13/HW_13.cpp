#include <iostream>
#include <fstream>

void Read_a_worde_from_a_fale(const char* fileName);

void Rondom_word(char arr2[], char arr[], bool Guessed_word)
{
    if (arr2 == arr)
    {

        Guessed_word == true;
    }
    if (arr2 == arr)
    {
        Guessed_word == true;
    }
    if (arr2 == arr)
    {
        Guessed_word == true;
    }
}

int main()
{
    Read_a_worde_from_a_fale("Words for game.txt");
    const int a = 6;
    int tries = 0;
    bool guessed_word = false;
    int input2;
    char array2[a]{  };
    char array[a]{ '_', '_', '_', '_', '_' };
    
    std::cout << "Hello player!Today we will play gallows.Are you ready?Just be careful,you only have 10 attempts.And then do not say";
    std::cout << " that I did not warn you.So what?Go!!!\n";
   

    while (true)
    {
        std::cout << "\n0 - EXIT\n" << "1 - Random Wordle\n" << "2 - Wordle of the day\n" << "\nENTER: ";
        std::cin >> input2;

        if (input2 <= 2 && input2 > 1)
        {
            std::cout << "Wordle of the day\n";
           
        }
        if (input2 <= 0 && input2 > -1)
        {
            break;
        }
        if (input2 <= 1 && input2 > 0)
        {
            while (!guessed_word)
            {
                ++tries;
                std::cout << "\nResult: " << array;
                std::cout << "\nEnter:  ";
                std::cin >> array2;
                
                Rondom_word(array2,array, guessed_word);
                
                if (tries == 10)
                {
                    std::cout << "\nYou lose!!!\nTry again\nYou used all 10 attempts\n";
                    break;
                }
                if (guessed_word == true)
                {
                    std::cout << "CONGRATULATION!!!\nYou made " << tries << " tries.";

                }
            }
        }

    }
  
}
void Read_a_worde_from_a_fale(const char* fileName)
{
    std::fstream file;
    file.open(fileName, std::ios::in);
    if (!file)
    {
        std::cout << "FILE NOT FOUND!\n";
    }
    else
    {
        const unsigned int Max_line_size = 256;
        char line[Max_line_size]{};
        //char ch = '\0';
        while (!file.eof())
        {
           file.getline(line, Max_line_size, '\n');
          // std::cout << line;
          // std::cout << '\n';
        }
    }
    file.close();
}

