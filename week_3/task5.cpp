/*
Дадено е цяло число – начален брой точки. Върху него се начисляват бонус точки по правилата, описани по-долу.
Да се напише програма, която пресмята бонус точките, които получава числото и общия брой точки (числото + бонуса).
- Ако числото е до 100 включително, бонус точките са 5.
- Ако числото е по-голямо от 100, бонус точките са 20% от числото.
- Ако числото е по-голямо от 1000, бонус точките са 10% от числото.
Допълнителни бонус точки (начисляват се отделно от предходните):
- За четно число -> + 1 т.
- За число, което завършва на 5 -> + 2 т.

Вход: 20  Изход: 6 26
*/

#include <iostream>
int main()
{
    int points;
    std::cin >> points;
    int bonus = 0;
    if (points <= 100)
    {
        bonus = 5;
    }
    else if (points > 1000)
    {
        bonus = points * 0.1;
    }
    else
    {
        bonus = points * 0.2;
    }
    if (points % 2 == 0)
    {
        bonus += 1;
    }
    else if (points % 10 == 5)
    {
        bonus += 2;
    }
    std::cout << bonus << std::endl;
    std::cout << points + bonus << std::endl;
    return 0;
}