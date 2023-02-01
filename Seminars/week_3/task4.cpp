#include <iostream>

int main()
{
    double budget, nights, price, percent;
    std::cin >> budget >> nights >> price >> percent;
    double total = nights * price;
    if (nights > 7)
    {
        total *= 0.95;
    }
    total += budget * percent / 100;
    if (total <= budget)
    {
        std::cout << "Ivanovi will be left with " << budget - total << " leva after vacation." << std::endl;
    }
    else
    {
        std::cout << total - budget << " leva needed." << std::endl;
    }
    return 0;
}