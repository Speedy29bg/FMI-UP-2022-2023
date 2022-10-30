//Да се пресметне n-тото число на Фибоначи
//пример: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

#include <iostream>
using namespace std;
int main(){
    int firstNumber = 1;
    int secondNumber = 1;
    int n;
    cin >> n;
    int result = 0;
    for(int i = 0; i < n; i++){
        result = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = result;
    }
    cout << result << endl;
    return 0;
}