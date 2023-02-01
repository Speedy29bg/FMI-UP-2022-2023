#include <iostream>


int main(){
    const unsigned int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n; 
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    int count = 0;
    for(int i = 1; i < n; i++){
        if (arr[i - 1] < arr[i] && arr[i] < arr[i + 1]){
            count++;
        }
        else{
            continue;
        }
    }
    std::cout << count;
    return 0;
}