//От клавиатурата се въвеждат произволен брой числа. Намерете сбора на всички числа до въвеждането на 0
#include <iostream>
int main()
{
    int n;
    int sum = 0;
    do
    {
        std::cin >> n;
        sum += n;
    } while (n != 0);
    std::cout << "The sum of all integers are: " << sum << '\n';

    return 0;
}