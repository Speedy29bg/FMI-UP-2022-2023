#include <iostream>
int main()
{
    int a, b;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    a = b - a;
    b = b - a;
    a = b + a;
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    return 0;
}