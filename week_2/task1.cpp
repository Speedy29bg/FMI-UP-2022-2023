/*По въведена от конзолата възраст на гражданин (цяло число)
да се провери дали той има право да гласува на изборите. Да се направи с булев израз.*/

#include <iostream>
int main()
{
    int age;
    std::cin >> age;
    bool canVote = age >= 18;
    std::cout << canVote << std::endl;
    return 0;
}