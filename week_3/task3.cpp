/*
Напишете програма, която проверява дали дадена точка (x,y) се намира:
- В квадрат с център (0,0) и страна 4 и в окръжност с център (0,3) и радиус 1, ако x > 0
- В квадрата, но извън окръжността, ако x < 0
*/
#include <iostream>
bool isInSquare(double x, double y, double side, double centerX, double centerY) {
    return (x >= centerX - side / 2 && x <= centerX + side / 2) && (y >= centerY - side / 2 && y <= centerY + side / 2);
}
bool isInCircle(double x, double y, double radius, double centerX, double centerY) {
    return (x - centerX) * (x - centerX) + (y - centerY) * (y - centerY) <= radius * radius;
}
int main(){

    double x, y;
    std::cin >> x >> y;

    isInSquare(x, y, 4, 0, 0) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    isInCircle(x, y, 1, 0, 3) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    return 0;
}