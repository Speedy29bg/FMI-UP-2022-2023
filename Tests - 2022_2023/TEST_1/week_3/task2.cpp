#include <iostream>
int main()
{
    int hours, minutes, seconds;
    std::cin >> hours >> minutes >> seconds;
    if (seconds == 59)
    {
        seconds = 0;
        if (minutes == 59)
        {
            minutes = 0;
            if (hours == 23)
            {
                hours = 0;
            }
            else
            {
                hours++;
            }
        }
        else
        {
            minutes++;
        }
    }
    else
    {
        seconds++;
    }
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    return 0;
}