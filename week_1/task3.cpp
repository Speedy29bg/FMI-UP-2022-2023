#include <iostream>

int main()
{
    unsigned int number;

    std::cin >> number;

    unsigned int ones = number % 10;
    number /= 10; // number = number / 10;
    unsigned int tens = number % 10;
    number /= 10;
    unsigned int hundreds = number % 10;

    unsigned int sum = ones + tens + hundreds;

    std::cout << "Ones: " << ones << " Tens: " << tens
              << " Hundreds: " << hundreds << " Sum: " << sum
              << std::endl;

    return 0;
}