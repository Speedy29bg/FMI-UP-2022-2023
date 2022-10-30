#include <iostream>
#include <cmath>
int main(){
    int x0, y0, r;
    std::cin >> x0 >> y0 >> r;
    int x, y;
    std::cin >> x >> y;
    int distance = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    if (distance < r)
    {
        std::cout << "Inside the circle" << std::endl;
    }
    else if (distance == r)
    {
        std::cout << "On the circle" << std::endl;
    }
    else
    {
        std::cout << "Outside the circle" << std::endl;
    }

    return 0;
}