/*
Да се напише програма, която по въведени цели коефициенти a, b и c, намира всички реални
корени на уравнението 𝑎𝑥 2 + 𝑏𝑥 + 𝑐 = 0 (−230 ≤ 𝑎, 𝑏, 𝑐 ≤ 230 ) и ги извежда с точност 3 знака
знака след десетичната запетая.
*/
#include <iostream>
#include <cmath>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                std::cout << "Any" << std::endl;
            }
            else
            {
                std::cout << "None" << std::endl;
            }
        }
        else
        {
            std::cout << -c / (double)b << std::endl;
        }
    }
    else
    {
        int d = b * b - 4 * a * c;
        if (d < 0)
        {
            std::cout << "None" << std::endl;
        }
        else if (d == 0)
        {
            std::cout << -b / (2.0 * a) << std::endl;
        }
        else
        {
            std::cout << (-b - sqrt(d)) / (2.0 * a) << std::endl;
            std::cout << (-b + sqrt(d)) / (2.0 * a) << std::endl;
        }
    }
    return 0;
}