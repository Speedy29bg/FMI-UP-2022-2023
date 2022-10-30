#include <iostream>
int main(){
    int number;
    int temp = 0; 
    int arr[10];
    std::cin >> number;
    while(number > 0){
        arr[temp] = number % 10;
        number /= 10;
        temp++;
    }
    bool flag = false;
    for(int i = 0; i < temp; i++){
        for(int j = i + 1; j < temp; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        std::cout << "True" << std::endl;
    }else{
        std::cout << "False" << std::endl;
    }

}
