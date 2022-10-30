#include <iostream>
#include <math.h>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    if (d < 0)
    {
        std::cout << "0\n";
    }
    else if (d == 0)
    {
        std::cout << "1\n";
    }
    else
    {
        std::cout << "2\n";
    }
    return 0;
}