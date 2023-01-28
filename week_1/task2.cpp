#include <iostream>
#include <cmath>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Input a: ";
    std::cin >> a;
    std::cout << "Input b: ";
    std::cin >> b;
    std::cout << "Input c: ";
    std::cin >> c;

    // std::cin >> a >> b >> c;

    int d = b * b - 4 * a * c;

    std::cout << d << std::endl;

    if (d < 0)
    {
        std::cout << "Nqma realni koreni!" << std::endl;
    }
    else
    {
        int x1 = (-b + sqrt(d)) / (2 * a);
        int x2 = (-b - sqrt(d)) / (2 * a);

        std::cout << x1 << " " << x2 << std::endl;
    }

    return 0;
}