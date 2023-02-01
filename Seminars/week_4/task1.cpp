#include <iostream>
using namespace std;
int main()
{
    int firstNumber = 1;
    int secondNumber = 1;
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = result;
    }
    cout << result << endl;
    return 0;
}