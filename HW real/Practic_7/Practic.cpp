#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
 
int main()
{	cout << "Welcom to geme of numbers guessing challenge!\n";
	
	int a;
	bool true_or_false = true;
	
	while (true_or_false == true)
	{
		int e = 1;
		int b = 100;		
	

		srand(time(nullptr));
        const int GenerationRange = 200;
	    const double generationnum = rand() % (GenerationRange + 1);

		cout << generationnum <<"\n"<< "Enter random number(from 0 to 200)\n" << "If you want to give up enter -1\n";

		while (true_or_false == true)
		{
			e++;
			cout << "Make your guess: ";
			cin >> a;

			if (e == b)
			{
				cout << "I see it’s difficult for you to guess the number.Then let’s change it for you, so to speak for your evil, and maybe everything will turn out in your favor.Who knows, who knows.";
				break;
			}

			if (a >= 201 || a <= -2)
			{
				cout << "WRONG!!!YOUR NUMBER IS BEYOND THE CAPABILITY OF THE PROGRAM, REVIEW THE CONDITION AGAIN!\n";
				continue;
			}

			if (a == -1)
			{
				cout << "Already giving up?!\nI'm win!Come back soon,I'll be waiting for our new game!\n";
				true_or_false = false;
			}

			if (a == generationnum)
			{
				int highscore = std::min(e, b);
								
				cout << "Congradilation you win!!!\nYou spent " << --e << " tries!\n" << "Your highscore is " << --highscore << "\n\n\n\n";
				break;				
			}

			if (a < generationnum)
			{
				if (generationnum - a <= 10)
				{
					cout << "Hot(higher)\n";
					continue;
				}

				if (generationnum - a <= 20)
				{
					cout << "Worm(higher)\n";
					continue;
				}

				if (generationnum - a <= 200)
				{
					cout << "Cold(higher)\n";
					continue;
				}
			}

		    if (a > generationnum)
		    {				
				if (a - generationnum <= 10)
				{
					cout << "Hot(lower)\n";
					continue;
				}

				if (a - generationnum <= 20)
				{
					cout << "Worm(lower)\n";
					continue;
				}

				if (a - generationnum <= 200)
				{
					cout << "Cold(lower)\n";
					continue;
				}
			}

		}
          
	}

}

