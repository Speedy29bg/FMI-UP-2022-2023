#include <iostream>
int main()
{
    int number;
    std::cin >> number;
    int arr[100];
    int i = 0;
    while (number > 0)
    {
        arr[i] = number % 10;
        number /= 10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        std::cout << arr[j];
    }
    std::cout << '\n';
    return 0;
}
