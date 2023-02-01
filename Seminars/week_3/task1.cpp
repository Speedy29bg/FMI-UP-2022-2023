#include <iostream>
int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a > b)
    {
        if (b > c)
        {
            std::cout << c << " " << b << " " << a << '\n';
        }
        else
        {
            if (a > c)
            {
                std::cout << b << " " << c << " " << a << '\n';
            }
            else
            {
                std::cout << b << " " << a << " " << c << '\n';
            }
        }
    }
    else
    {
        if (a > c)
        {
            std::cout << c << " " << a << " " << b << '\n';
        }
        else
        {
            if (b > c)
            {
                std::cout << a << " " << c << " " << b << '\n';
            }
            else
            {
                std::cout << a << " " << b << " " << c << '\n';
            }
        }
    }
    return 0;
}