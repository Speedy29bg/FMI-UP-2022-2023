#include <iostream>
#include <math.h>
int main()
{
    double radius;
    std::cin >> radius;
    double area = radius * radius * 3.14;

    std::printf("%.5f\n", area);

    return 0;
}