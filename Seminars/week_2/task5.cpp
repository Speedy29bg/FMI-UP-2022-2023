bool condition1(int n)
{
    return (n % 3 == 0 && n % 5 == 0) || (n % 2 == 0 && n % 7 == 0);
}

bool condition2(int a, int b, int c)
{
    int d = b * b - 4 * a * c;
    return d >= 0;
}

bool condition3(int x, int y)
{
    return (x * x + y * y > 4 && x * x + y * y < 64);
}
#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    std::cout << condition1(n) << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << condition2(a, b, c) << std::endl;

    int x, y;
    std::cin >> x >> y;
    std::cout << condition3(x, y) << std::endl;
    return 0;
}