#include <iostream>
int main()
{
    char symbol;
    std::cin >> symbol;
    if (symbol >= 'a' && symbol <= 'z')
    {
        symbol -= 32;
        std::cout << symbol << std::endl;
    }
    else if (symbol >= 'A' && symbol <= 'Z')
    {
        symbol += 32;
        std::cout << symbol << std::endl;
    }
    else if (symbol >= '0' && symbol <= '9')
    {
        int number = symbol - '0';
        std::cout << number * number << std::endl;
    }
}