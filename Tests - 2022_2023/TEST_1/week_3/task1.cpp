#include <iostream>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if (x1 <= x3 && x2 >= x3 && y1 >= y3 && y2 <= y3)
    {
        std::cout << "Yes\n";
    }
    else if (x1 <= x3 && x2 >= x3 && y1 >= y4 && y2 <= y4)
    {
        std::cout << "Yes\n";
    }
    else if (x1 <= x4 && x2 >= x4 && y1 >= y3 && y2 <= y3)
    {
        std::cout << "Yes\n";
    }
    else if (x1 <= x4 && x2 >= x4 && y1 >= y4 && y2 <= y4)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }

    return 0;
}