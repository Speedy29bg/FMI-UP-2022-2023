//Направете играта "Бикове и крави"
//https://en.wikipedia.org/wiki/Bulls_and_Cows

#include <iostream>
#include <cstdlib>


int main()
{
    int number = 1111;
    int guess;
    int bulls = 0;
    int cows = 0;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    while (bulls < 4)
    {
        bulls = 0;
        cows = 0;
        for (int i = 0; i < 4; i++)
        {
            if (number % 10 == guess % 10)
            {
                bulls++;
            }
            else if (number % 10 == guess / 10 % 10 || number % 10 == guess / 100 % 10 || number % 10 == guess / 1000 % 10)
            {
                cows++;
            }
            number /= 10;
            guess /= 10;
        }
        std::cout << "Bulls: " << bulls << std::endl;
        std::cout << "Cows: " << cows << std::endl;
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        
    }
    std::cout << "You win!";
    return 0;
}