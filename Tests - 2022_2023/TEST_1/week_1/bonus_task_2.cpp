#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            std::cout << '\n'
                      << arr[i] << '\n';
            break;
        }
    }

    return 0;
}