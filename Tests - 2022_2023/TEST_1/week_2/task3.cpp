#include <iostream>
#include <cmath>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        double p = (a + b + c) / 2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        std::cout << area << std::endl;
    }
    else
    {
        std::cout << -1 << std::endl;
    }
    return 0;
}