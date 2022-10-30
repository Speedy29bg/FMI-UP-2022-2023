#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int day = 22 + n;
    int month = 1;
    while (day > 31)
    {
        day -= 31;
        month++;
    }
    std::cout << day << "." << month << '\n';
    return 0;
}