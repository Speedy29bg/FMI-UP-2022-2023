#include <iostream>


bool* isInteresting(int n){
    int* arr = new int[n];
    bool* result = new bool[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
        result[i] = true;
    }
    for(int i = 0; i < n; i++){
        int lastDigit = arr[i] % 10;
        while(arr[i] > 0){
            int currentDigit = arr[i] % 10;
            if(currentDigit > lastDigit){
                result[i] = false;
                break;
            }
            lastDigit = currentDigit;
            arr[i] /= 10;
        }
    }
    return result;
}
int main()
{
    int n;
    std::cin >> n;
    bool* result = isInteresting(n);
    for(int i = 0; i < n; i++){
        std::cout << std::boolalpha << result[i] << "\n";
    }
    return 0;
}