#include <iostream>
int main()
{
    int age;
    std::cin >> age;
    bool canVote = age >= 18;
    std::cout << canVote << std::endl;
    return 0;
}