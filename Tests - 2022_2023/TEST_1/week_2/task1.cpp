#include <iostream>
int main(){

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a > b || c > d)
    {
        std::cout << "Invalid interval" << std::endl;
    }
    else if (a > d || b < c)
    {
        std::cout << "{}" << std::endl;
    }
    else if (a < c && b < d)
    {
        std::cout << "[" << c << ", " << b << "]" << std::endl;
    }
    else if (a > c && b > d)
    {
        std::cout << "[" << a << ", " << d << "]" << std::endl;
    }
    else if (a < c && b > d)
    {
        std::cout << "[" << c << ", " << d << "]" << std::endl;
    }
    else if (a > c && b < d)
    {
        std::cout << "[" << a << ", " << b << "]" << std::endl;
    }
    else if (a == c && b < d)
    {
        std::cout << "[" << a << ", " << b << "]" << std::endl;
    }
    else if (a == c && b > d)
    {
        std::cout << "[" << a << ", " << d << "]" << std::endl;
    }
    else if (a < c && b == d)
    {
        std::cout << "[" << c << ", " << b << "]" << std::endl;
    }
    else if (a > c && b == d)
    {
        std::cout << "[" << a << ", " << b << "]" << std::endl;
    }
    else if (a == c && b == d)
    {
        std::cout << "[" << a << ", " << b << "]" << std::endl;
    }

    return 0;
}