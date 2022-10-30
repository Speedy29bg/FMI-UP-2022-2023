#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    int sum = 0;

    if (a < -1016 || b > 1016)
    {
        std::cout << "One of the numbers are not in the interval (-1016 ≤ A, B ≤ 1016)\n";
    }

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    std::cout << sum << '\n';

    return 0; 
}