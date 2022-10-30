#include <iostream>
int main()
{

    double x, y, z;
    std::cin >> x >> y >> z;

    if (x > 0 && y > 0 && z > 0)
    {
        std::cout << "1" << std::endl;
    }
    else if (x < 0 && y > 0 && z > 0)
    {
        std::cout << "2" << std::endl;
    }
    else if (x < 0 && y < 0 && z > 0)
    {
        std::cout << "3" << std::endl;
    }
    else if (x > 0 && y < 0 && z > 0)
    {
        std::cout << "4" << std::endl;
    }
    else if (x > 0 && y > 0 && z < 0)
    {
        std::cout << "5" << std::endl;
    }
    else if (x < 0 && y > 0 && z < 0)
    {
        std::cout << "6" << std::endl;
    }
    else if (x < 0 && y < 0 && z < 0)
    {
        std::cout << "7" << std::endl;
    }
    else if (x > 0 && y < 0 && z < 0)
    {
        std::cout << "8" << std::endl;
    }
    else
    {
        std::cout << "0" << std::endl;
    }

    return 0;
}